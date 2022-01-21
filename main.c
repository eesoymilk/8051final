#include <8052.h>
#include "i2c.h"
#include "delay.h"
#include "MPU6050.h"
#include "MAX7219.h"

#define PB1 P3_2
#define PB2 P3_3
#define PB3 P2_0
#define PB4 P2_1
#define Hall_In P3_6

int PASSWORD = 0x1138, ENTERED = 0x0000, ms = 0, s = 0, cur = 0, best = 0;
UC flash = 0, update = 0, pb1cnt = 0, State = 0, Hall_Pre, ball_m, ball_x, ball_y,
M1[8] = {
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
    0xd0,
    0x15,
    0x74,
    0x16,
    0xd4,
    0x05,
    0x14
};

void Flash_Dot();

void T0_isr(void) __interrupt 1						// Interrupt routine w/ priority 1
{
	// PC jumps to here every 1ms  
	TH0 = (65536-1000) / 256;						// Reset initial higher 8 bits into Timer 0
	TL0 = (65536-1000) % 256;						// Reset initial lower 8 bits into Timer 0
	
    if (ms++ == 10000)  ms = 0;

    if (ms % 100 == 0) {
        flash = ~flash;
    }

    if (ms % 1000 == 0) {
        update = ~update;
        s++;
    }

    if (State < 16) {
        // PEDGE
        if (Hall_In == 0 && Hall_Pre == 1) {
            ms = 0;
        }
        // NEDGE
        if (Hall_In == 1 && Hall_Pre == 0) {
            if (ms >= 1000) {
                ENTERED |= 0x8000 >> State;
            }
            if (State != 0x10) {
                if (++State == 0x10) {
                    ms = 0;
                    if (PASSWORD == ENTERED)    State++;
                }
            }
        }
        if (PB1 == 0) {
            pb1cnt++;
            if (pb1cnt == 10) {
                State = 0;
                ms = 0;
            }
        } else {
            pb1cnt = 0;
        }
        P3_7 = Hall_Pre = Hall_In;
    } else if (State == 16) {
        if (ms == 2000) {
            Hall_In = Hall_Pre = 1;
            ENTERED = 0X0000;
            State = 0;
        }
        if (flash && P3_7 == 0) P3_7 = 1;
        else                    P3_7 = 0;
    } else if (State == 17) {
        if (ms == 2000) {
            State++;
            ms = s = ball_m = ball_x = ball_y = 0;
        }
        if (ms <= 200 && flash && P3_7 == 0)    P3_7 = 1;
        else                                    P3_7 = 0;
    } else if (State == 18) {
        if (ball_m == 1 && ball_x == 7 && ball_y == 7) {
            cur = s;
            if (best == 0 || cur < best)    best = cur;
            State++;
        }
        if (PB1 == 0) {
            pb1cnt++;
            if (pb1cnt == 10) {
                State = 17;
                ms = 0;
            }
        } else {
            pb1cnt = 0;
        }
    } else if (State == 19) {
        if (PB1 == 0) {
            pb1cnt++;
            if (pb1cnt == 10) {
                State = 17;
                ms = 0;
            }
        } else {
            pb1cnt = 0;
        }
    }
}

void main()
{
    int accel_x = 0, accel_y = 0, accel_z = 0;
    UC i, patt = 0, ssd_state, nxt_x, nxt_y, nxt_m;
	SDA = 1;
    SCL = 1;
    MAT_SSD_INIT();
    MPU6050_INIT();

	TMOD = 0x01;			    // Set Timer 1 to mode 0 & Timer 0 mode 1. (16-bit timer)
	TH0 = (65536 - 1000) / 256; // Load initial higher 8 bits into Timer 0
	TL0 = (65536 - 1000) % 256; // Load initial lower 8 bits into Timer 0
	EA = 1;					    // Enable all interrupt
	ET0 = 1;				    // Enable Timer 0 interrupt
	TR0 = 1;				    // Start Timer 0

    Hall_In = Hall_Pre = 1;
    while(1) {
        if (State < 16) {
            ssd_state = State / 4;
            patt = 1 << ssd_state;
            MAT_SSDpass_Show(ssd_state, ENTERED);
            if (flash) {
                patt |= 0x10 << (State % 4);
                LOAD = 0;
                SerialDIN(4 - ssd_state, 0x08);
                SerialDIN(4 - ssd_state, 0);
                SerialDIN(4 - ssd_state, 0);
                LOAD = 1;
            }
            for (i = ssd_state * 4; i < State; i++) {
                if (ENTERED & 0x8000 >> i)  patt |= 0x10 << (i % 4);
            }

        } else if (State == 16 || State == 17) {
            if (flash) {
                patt = 0xff;
                MAT_SSDpass_Show(4, ENTERED);
            } else {
                patt = 0x00;
                MAT_SSD_CLEAR();
            }
        } else if (State == 18) {
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
            MAT_SSDgame_Show(M1, M2, s);
            Flash_Dot();
            // Show_Game(s);
        } else if (State == 19) {
            patt = 0x00;
            if (flash)  patt = 0xff;
            if (update) MAT_SSDbest_Show(M1, M2, best);
            else        MAT_SSDcur_Show(M1, M2, cur);
            // if (update) Show_Best(best);
            // else        Show_Cur(cur);
            Flash_Dot();
        }

        P1 = ~patt;
    }
}

void Flash_Dot()
{
    if (flash) {
        LOAD = 0;
        SerialDIN(0, 0);
        if (ball_m == 0) {
            SerialDIN(0, 0);
            SerialDIN(ball_x + 1, M1[ball_x] | 0x80 >> ball_y);
        } else if (ball_m == 1) {
            SerialDIN(ball_x + 1, M2[ball_x] | 0x80 >> ball_y);
            SerialDIN(0, 0);
        }
        LOAD = 1;
    }
}

void Show_Game(int t)
{
    MAT_SSDgame_Show(M1, M2, t);
    if (flash) {
        LOAD = 0;
        SerialDIN(0, 0);
        if (ball_m == 0) {
            SerialDIN(0, 0);
            SerialDIN(ball_x + 1, M1[ball_x] | 0x80 >> ball_y);
        } else if (ball_m == 1) {
            SerialDIN(ball_x + 1, M2[ball_x] | 0x80 >> ball_y);
            SerialDIN(0, 0);
        }
        LOAD = 1;
    }
}

void Show_Best(int t)
{
    MAT_SSDbest_Show(M1, M2, t);
    if (flash) {
        LOAD = 0;
        SerialDIN(0, 0);
        if (ball_m == 0) {
            SerialDIN(0, 0);
            SerialDIN(ball_x + 1, M1[ball_x] | 0x80 >> ball_y);
        } else if (ball_m == 1) {
            SerialDIN(ball_x + 1, M2[ball_x] | 0x80 >> ball_y);
            SerialDIN(0, 0);
        }
        LOAD = 1;
    }
}