#include <8052.H>
#include "i2c.h"
#include "delay.h"
#include "MPU6050.h"
#include "MAX7219.h"

#define PB1 P3_2
#define PB2 P3_3
#define PB3 P2_0
#define PB4 P2_1
#define Hall_In P3_6

int ball_m, ball_x, ball_y;
UC flash = 0, update = 0, depb1 = 0, pb1cnt = 0, State = 0, preState = 0, Hall_Pre = 0, Hall_Hold = 0;
UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
// UC BottomLeft = 0, preBottomLeft = 0, BottomRight = 0, preBottomRight = 0;
// UC TopLeft = 0, preTopLeft = 0, TopRight = 0, preTopRight = 0;

UC CUR_M[8] = {0}, M1[8] = {
    0x4a,
    0x6a,
    0x08,
    0xda,
    0x0a,
    0xba,
    0x0a,
    0x22
}, M2[8] = {
    0x14,
    0xd4,
    0x14,
    0x70,
    0x15,
    0xd4,
    0x06,
    0x14
};


// const signed int 4000 = 4000;

long ms = 0, s = 0;

void InitGame()
{
    // UC i;
    State = 1;
    ball_m = ball_x = ball_y = 0;
}

void T0_isr(void) __interrupt 1						// Interrupt routine w/ priority 1
{
	// PC jumps to here every 1ms  
	TH0 = (65536-1000) / 256;						// Reset initial higher 8 bits into Timer 0
	TL0 = (65536-1000) % 256;						// Reset initial lower 8 bits into Timer 0
	
    ms++;
    if (PB1 == 0) {
        if (depb1 == 0 && pb1cnt++ == 10)   depb1 = 1;
    } else {
        depb1 = pb1cnt = 0;
    }

    if (ms % 10 == 0) {
        if (State == 1) {
            flash = ~flash;
        }
    }

    if (ms % 100 == 0) {
        if (State == 1) {
            update = ~update;
        }
    }

    if (ms == 1000) {
        s++;
        ms = 0;
    }

    // if (State < 16) {
    //     if (Hall_In == 1 && Hall_Pre == 0) {
    //         if (STATE == 1 && Hall_Hold == 1) {
    //             patt |= 0x80;
    //             if (timer_ms >= 2000) {
    //                 patt |= 0x60;
    //                 MORSEIN[MORSECUR] = 1;
    //             }
    //             if (++MORSECUR >= 5)
    //                 STATE = 2;
    //         }
    //     } 
    // }

    Hall_Pre = Hall_In;
    // preflash = flash;
}

void main()
{
    int accel_x = 0, accel_y = 0, accel_z = 0;
    UC i, patt = 0, nxt_x, nxt_y, nxt_m;
	SDA = 1;
    SCL = 1;
    MAT_SSD_INIT();
    MPU6050_INIT();

	TMOD = 0x01;			    // Set Timer 1 to mode 0 & Timer 0 mode 1. (16-bit timer)
	TH0 = (65536-1000) / 256;   // Load initial higher 8 bits into Timer 0
	TL0 = (65536-1000) % 256;   // Load initial lower 8 bits into Timer 0
	EA = 1;					    // Enable all interrupt
	ET0 = 1;				    // Enable Timer 0 interrupt
	TR0 = 1;				    // Start Timer 0

    State = 0;
    while(1) {
        // MAT_SSD_Show(M1, M2, N);
        if (State == 16) {
            if (update) {
                readMPU6050_AccelData(&accel_data[0]);
                accel_x = accel_data[0];
                accel_y = accel_data[1];
                accel_z = accel_data[2];

                nxt_m = ball_m;
                nxt_x = ball_x;
                nxt_y = ball_y;
                if (accel_x > 4000 && accel_y > 4000) {
                    // BOTTOM LEFT
                    patt = 0x10;
                    if (ball_x < 7) nxt_x = ball_x + 1;
                } else if (accel_x < -4000 && accel_y > 4000) {
                    // BOTTOM RIGHT
                    patt = 0x20;
                    if (ball_y < 7) nxt_y = ball_y + 1;
                } else if (accel_x < -4000 && accel_y < -4000) {
                    // TOP RIGHT
                    patt = 0x40;
                    if (ball_x != 0)    nxt_x = ball_x - 1;
                } else if (accel_x > 4000 && accel_y < -4000) {
                    // TOP LEFT
                    patt = 0x80;
                    if (ball_y != 0)    nxt_y = ball_y - 1;
                } else if (accel_y > 4000) {
                    if (ball_m == 0 && ball_x == 7 && ball_y == 7) {
                        nxt_m = ball_m + 1;
                        nxt_x = nxt_y = 0;
                    }
                    patt = 0x04;
                } else {
                    patt = 0x02;
                }
                if (nxt_m == ball_m) {
                    if (ball_m == 0) {
                        if (nxt_x != ball_x && M1[nxt_x] & 0x80 >> ball_y)
                            nxt_x = ball_x;
                        else if (nxt_y != ball_y && M1[ball_x] & 0x80 >> nxt_y)
                            nxt_y = ball_y;
                    } else {
                        if (nxt_x != ball_x && M2[nxt_x] & 0x80 >> ball_y)
                            nxt_x = ball_x;
                        else if (nxt_y != ball_y && M2[ball_x] & 0x80 >> nxt_y)
                            nxt_y = ball_y;
                    }
                }
                ball_m = nxt_m;
                ball_x = nxt_x;
                ball_y = nxt_y;
            }

            if (flash) {
                patt |= 0x01;
                if (ball_m == 0) {
                    for (i = 0; i < 8; i++) CUR_M[i] = M1[i];
                    CUR_M[ball_x] |= 0x80 >> ball_y;
                    MAT_SSDnum_Show(CUR_M, M2, accel_x);
                } else if (ball_m == 1) {
                    for (i = 0; i < 8; i++) CUR_M[i] = M2[i];
                    CUR_M[ball_x] |= 0x80 >> ball_y;
                    MAT_SSDnum_Show(M1, CUR_M, accel_x);
                }
            } else  MAT_SSDnum_Show(M1, M2, accel_x);
        }

        // if (z > LB_Z || z < -LB_Z) {
        //     patt = 0x00;
        // } else if (x > 4000 || x < -4000) {
        //     if (x > 0){
        //         patt = 0x01;
        //     } else {
        //         patt = 0x02;
        //     }
        // } else if (y > 4000 || y < -4000) {
        //     if (y > 0) {
        //         patt = 0x04;
        //     } else {
        //         patt = 0x08;
        //     }
        // } else if (x > 0) {
        //     if (y > 0) {
        //         patt = 0x10;
        //     } else {
        //         patt = 0x20;
        //     }
        // } else {
        //     if (y > 0) {
        //         patt = 0x40;
        //     } else {
        //         patt = 0x80;
        //     }
        // }
        // if (BottomLeft == 1 && preBottomLeft == 0) {
        //     // BOTTOM LEFT
        //     patt = 0x01;
        // } else if (BottomRight == 1 && preBottomRight == 0) {
        //     // BOTTOM RIGHT
        //     patt = 0x02;
        // } else if (TopRight == 1 && preTopRight == 0) {
        //     // TOP RIGHT
        //     patt = 0x04;
        // } else if (TopLeft == 1 && preTopLeft == 0) {
        //     // TOP LEFT
        //     patt = 0x08;
        // } else {
        //     patt = 0X00;
        // }
        
        if (depb1 == 1) InitGame();

        // if (State == 1) patt |= 0x01;

        P1 = ~patt;
    }
}
