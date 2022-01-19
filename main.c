
#include <8051.h>
// #include "delay.h"
// #include "i2c.h"
// #include "OLED.h"
// #include "MPU6050.h"
#include "MAX7219.h"

int data_buf;
char i = 0;

UC M1[8] = {
    0x07,
    0x13,
    0xD3,
    0x83,
    0x83,
    0xD3,
    0x13,
    0x07
}, M2[8] = {
    0x00,
    0x0C,
    0xEC,
    0x70,
    0x70,
    0xEC,
    0x0C,
    0x00
}, N[8] = {1, 2, 3, 4, 5, 6, 7, 8};


long ms = 0;

void T0_isr(void) __interrupt 1						// Interrupt routine w/ priority 1
{
	// PC jumps to here every 1ms  
	TH0 = (65536-1000) / 256;						// Reset initial higher 8 bits into Timer 0
	TL0 = (65536-1000) % 256;						// Reset initial lower 8 bits into Timer 0
	
	ms++;
}

int main() {
	TMOD = 0x01;									// Set Timer 1 to  mode 0 & T imer 0 mode 1. (16-bit timer)
	TH0 = (65536-1000) / 256;						// Load initial higher 8 bits into Timer 0
	TL0 = (65536-1000) % 256;						// Load initial lower 8 bits into Timer 0
	ET0 = 1;										// Enable Timer 0 interrupt
	EA = 1;											// Enable all interrupt
	TR0 = 1;										// Start Timer 0

	P1 = 0x8f;
    MAT_SSD_INIT();
	P1 = 0x00;
    while(1) {
		P1 = 0x81;
		// MAT_SSD_Show(M1, M2, N);
		MAT_SSDnum_Show(M1, M2, ms);
    }
}
