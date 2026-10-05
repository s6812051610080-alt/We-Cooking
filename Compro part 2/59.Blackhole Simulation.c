/*
 * black_hole_sim.c
 * -----------------
 * จำลองวงโคจรของอนุภาคทดสอบ (test particle) รอบหลุมดำแบบไม่หมุน
 * โดยใช้เมตริก Schwarzschild (หน่วยธรรมชาติ G = c = 1)
 *
 * แนวคิด:
 *   ในระนาบเส้นศูนย์สูตร (equatorial plane, theta = pi/2) การเคลื่อนที่ของอนุภาค
 *   ทดสอบรอบหลุมดำ Schwarzschild ถูกอธิบายด้วยสมการอนุรักษ์พลังงาน E และ
 *   โมเมนตัมเชิงมุม L ต่อมวลนิ่ง:
 *
 *     (dr/dtau)^2 = E^2 - (1 - 2M/r) * (1 + L^2/r^2)
 *     dphi/dtau   = L / r^2
 *     dt/dtau     = E / (1 - 2M/r)
 *
 *   โปรแกรมนี้อินทิเกรตสมการเหล่านี้ด้วยวิธี RK4 แล้วบันทึกตำแหน่ง (r, phi)
 *   ของอนุภาคลงไฟล์ trajectory.csv เพื่อนำไปพล็อตกราฟวงโคจรต่อได้
 *
 * คอมไพล์:   gcc -O2 -o black_hole_sim black_hole_sim.c -lm
 * รัน:       ./black_hole_sim
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ---------- พารามิเตอร์ของระบบ ---------- */
#define M_BH      1.0      /* มวลหลุมดำ (หน่วยที่ทำให้ G=c=1) */
#define R_S       (2.0*M_BH) /* รัศมี Schwarzschild (event horizon) */

typedef struct {
    double r;      /* พิกัดรัศมี */
    double phi;    /* มุมในระนาบวงโคจร */
    double vr;     /* dr/dtau (ความเร็วเชิงรัศมี) */
} State;

double E_energy;   /* พลังงานต่อมวลนิ่ง (ค่าคงที่ของการเคลื่อนที่) */
double L_ang;       /* โมเมนตัมเชิงมุมต่อมวลนิ่ง (ค่าคงที่ของการเคลื่อนที่) */

/* ฟังก์ชันศักย์เทียม (effective potential) สำหรับตรวจสอบ/คำนวณ dr/dtau */
double dr_dtau2(double r) {
    double f = 1.0 - 2.0*M_BH/r;
    return E_energy*E_energy - f*(1.0 + (L_ang*L_ang)/(r*r));
}

/* อนุพันธ์ของ dr_dtau2 เทียบกับ r เพื่อหาความเร่งเชิงรัศมี */
double accel_r(double r) {
    /* d/dr [ E^2 - (1-2M/r)(1+L^2/r^2) ] คูณ 1/2 = dvr/dtau */
    double M = M_BH, L = L_ang;
    double term = -( (2.0*M/(r*r)) * (1.0 + (L*L)/(r*r))
                    + (1.0 - 2.0*M/r) * (-2.0*L*L/(r*r*r)) );
    return 0.5 * (-term); /* d(vr^2)/dr = 2*vr*dvr/dtau -> dvr/dtau = 0.5*d(vr^2)/dr */
}

/* อนุพันธ์ของสถานะระบบ (สำหรับ RK4): คืนค่า d(r)/dtau, d(phi)/dtau, d(vr)/dtau */
void derivatives(State s, double *dr, double *dphi, double *dvr) {
    *dr   = s.vr;
    *dphi = L_ang / (s.r * s.r);
    *dvr  = accel_r(s.r);
}

/* ก้าว RK4 หนึ่งขั้น */
State rk4_step(State s, double dtau) {
    double dr1, dphi1, dvr1;
    double dr2, dphi2, dvr2;
    double dr3, dphi3, dvr3;
    double dr4, dphi4, dvr4;
    State tmp;

    derivatives(s, &dr1, &dphi1, &dvr1);

    tmp.r = s.r + 0.5*dtau*dr1;
    tmp.phi = s.phi + 0.5*dtau*dphi1;
    tmp.vr = s.vr + 0.5*dtau*dvr1;
    derivatives(tmp, &dr2, &dphi2, &dvr2);

    tmp.r = s.r + 0.5*dtau*dr2;
    tmp.phi = s.phi + 0.5*dtau*dphi2;
    tmp.vr = s.vr + 0.5*dtau*dvr2;
    derivatives(tmp, &dr3, &dphi3, &dvr3);

    tmp.r = s.r + dtau*dr3;
    tmp.phi = s.phi + dtau*dphi3;
    tmp.vr = s.vr + dtau*dvr3;
    derivatives(tmp, &dr4, &dphi4, &dvr4);

    State out;
    out.r   = s.r   + (dtau/6.0)*(dr1 + 2*dr2 + 2*dr3 + dr4);
    out.phi = s.phi + (dtau/6.0)*(dphi1 + 2*dphi2 + 2*dphi3 + dphi4);
    out.vr  = s.vr  + (dtau/6.0)*(dvr1 + 2*dvr2 + 2*dvr3 + dvr4);
    return out;
}

int main(void) {
    /* ----- ตั้งค่าเงื่อนไขเริ่มต้นของวงโคจร ----- */
    double r0   = 10.0 * M_BH;   /* เริ่มต้นที่ r = 10M */
    double phi0 = 0.0;

    /* เลือก L และ E ให้ได้วงโคจรแบบวงรีที่สวยงาม (ไม่ใช่ค่าวงกลมสมบูรณ์)
       เพื่อให้เห็นการส่ายเชิงมุม (perihelion precession) ซึ่งเป็นลักษณะเด่น
       ของทฤษฎีสัมพัทธภาพทั่วไปที่ต่างจากกลศาสตร์นิวตัน */
    L_ang = 3.9 * M_BH;                 /* โมเมนตัมเชิงมุมต่อมวล */
    double f0 = 1.0 - 2.0*M_BH/r0;
    /* เลือก E ให้ dr/dtau เริ่มต้น = 0 (จุดใกล้/ไกลสุดของวงโคจร) */
    E_energy = sqrt(f0 * (1.0 + (L_ang*L_ang)/(r0*r0)));

    State s;
    s.r = r0;
    s.phi = phi0;
    s.vr = 0.0;   /* เริ่มที่จุดเปลี่ยนทิศทางเชิงรัศมี */

    double dtau = 0.5;     /* ขนาดก้าวเวลาเชิงสัดส่วน (proper time step) */
    int nsteps = 20000;    /* จำนวนก้าวทั้งหมด */

    FILE *fp = fopen("trajectory.csv", "w");
    if (!fp) {
        fprintf(stderr, "เปิดไฟล์ trajectory.csv ไม่สำเร็จ\n");
        return EXIT_FAILURE;
    }
    fprintf(fp, "step,tau,r,phi,x,y\n");

    for (int i = 0; i <= nsteps; i++) {
        double x = s.r * cos(s.phi);
        double y = s.r * sin(s.phi);
        fprintf(fp, "%d,%.6f,%.6f,%.6f,%.6f,%.6f\n",
                i, i*dtau, s.r, s.phi, x, y);

        /* หยุดจำลองถ้าอนุภาคตกเข้าสู่ event horizon */
        if (s.r <= R_S * 1.001) {
            printf("อนุภาคตกเข้าสู่ event horizon ที่ step %d (r = %.4f)\n", i, s.r);
            break;
        }

        s = rk4_step(s, dtau);
    }

    fclose(fp);
    printf("จำลองเสร็จสิ้น ผลลัพธ์ถูกบันทึกไว้ที่ trajectory.csv\n");
    printf("มวลหลุมดำ M = %.2f, รัศมี Schwarzschild = %.2f\n", M_BH, R_S);
    printf("ค่าคงที่ของการเคลื่อนที่: E = %.6f, L = %.6f\n", E_energy, L_ang);

    return EXIT_SUCCESS;
}