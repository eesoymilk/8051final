#ifndef MAX7219_H
#define MAX7219_H

#include <8052.h>

#define UI unsigned int
#define UC unsigned char
#define UL unsigned long
#define DIN P2_4
#define LOAD P2_3
#define CLK P2_2
#define MAX7219_NUM 3

// REGISTERS
#define DECODE_MODE     0x09
#define INTENSITY       0x0A
#define SCAN_LIMIT      0x0B
#define SHUTDOWN        0x0C
#define DISPLAY_TEST    0x0F

UC SSD_CODE[] = {
    0x7E,   // 0b01111110: 0
    0x30,   // 0b00110000: 1
    0x6D,   // 0b01101101: 2
    0x79,   // 0b01111001: 3
    0x33,   // 0b00110011: 4
    0x5B,   // 0b01011011: 5
    0x5F,   // 0b01011111: 6
    0x70,   // 0b01110000: 7
    0x7F,   // 0b01111111: 8
    0x7B,   // 0b01111011: 9
    0x77,   // 0b01110111: A
    0x1F,   // 0b00011111: b
    0x4E,   // 0b01001110: C
    0x3D,   // 0b00111101: d
    0x4F,   // 0b01001111: E
    0x47    // 0b01000111: F
};

void BitExtract(UC);
void SerialDIN(UC, UC);
void MAT_SSDpass_Show(UC, int);
void MAT_SSDcur_Show(UC*, UC*, int);
void MAT_SSDgame_Show(UC*, UC*, int);
void MAT_SSDbest_Show(UC*, UC*, int);
void MAT_SSD_CLEAR();
void MAT_SSD_INIT();

void BitExtract(UC bits)
{
    UC i;

    for (i = 0; i < 8; i++) {
        CLK = 0;
        DIN = (bits & 0x80);
        bits <<= 1;
        CLK = 1;
    }
}

void SerialDIN(UC address_7219, UC dat_7219)
{
    BitExtract(address_7219);
    BitExtract(dat_7219);
}

void MAT_SSDpass_Show(UC state, int num)
{
    UI i, j, n;

    LOAD = 0;
    SerialDIN(8, 0x67);// 0b01100111: P
    SerialDIN(8, 0);
    SerialDIN(8, 0);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(7, SSD_CODE[0xA]);
    SerialDIN(7, 0);
    SerialDIN(7, 0);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(6, 0x5b);     // 0b01011011: S
    SerialDIN(6, 0);
    SerialDIN(6, 0);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(5, 0x5b);     // 0b01011011: S
    SerialDIN(5, 0);
    SerialDIN(5, 0);
    LOAD = 1;

    for (i = 0; i < 4 - state; i++) {
        LOAD = 0;
        SerialDIN(i + 1, 0);
        SerialDIN(i + 1, 0);
        SerialDIN(i + 1, 0);
        LOAD = 1;
    }

    LOAD = 0;
    SerialDIN(4 - state, 0);
    SerialDIN(4 - state, 0);
    SerialDIN(4 - state, 0);
    LOAD = 1;

    for (i = 0; i < state; i++) {
        n = 0;
        for (j = 12 - i * 4; j < 16 - i * 4; j++) {
            if (num & 1 << j) {
                switch (j % 4)
                {
                case 0: n += 1; break;
                case 1: n += 2; break;
                case 2: n += 4; break;
                case 3: n += 8;
                }
            }
        }
        LOAD = 0;
        SerialDIN(4 - i, SSD_CODE[n]);
        SerialDIN(4 - i, 0);
        SerialDIN(4 - i, 0);
        LOAD = 1;
    }
}

void MAT_SSDgame_Show(UC* mat1, UC* mat2, int t)
{
    UC i;
    UI min = t / 60, sec = t % 60;
    for (i = 0 ; i < 2; i++) {
        LOAD = 0;
        SerialDIN(i + 1, SSD_CODE[sec % 10]);
        SerialDIN(i + 1, mat2[i]);
        SerialDIN(i + 1, mat1[i]);
        sec /= 10;
        LOAD = 1;
    }
    LOAD = 0;
    SerialDIN(3, 0x01);
    SerialDIN(3, mat2[2]);
    SerialDIN(3, mat1[2]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(4, SSD_CODE[min]);
    SerialDIN(4, mat2[3]);
    SerialDIN(4, mat1[3]);
    LOAD = 1;

    for (i = 4; i < 8; i++) {
        LOAD = 0;
        SerialDIN(i + 1, 0);
        SerialDIN(i + 1, mat2[i]);
        SerialDIN(i + 1, mat1[i]);
        LOAD = 1;
    }
}

void MAT_SSDcur_Show(UC* mat1, UC* mat2, int t)
{
    UC i;
    UI min = t / 60, sec = t % 60;
    for (i = 0 ; i < 2; i++) {
        LOAD = 0;
        SerialDIN(i + 1, SSD_CODE[sec % 10]);
        SerialDIN(i + 1, mat2[i]);
        SerialDIN(i + 1, mat1[i]);
        sec /= 10;
        LOAD = 1;
    }
    LOAD = 0;
    SerialDIN(3, 0x01);
    SerialDIN(3, mat2[2]);
    SerialDIN(3, mat1[2]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(4, SSD_CODE[min]);
    SerialDIN(4, mat2[3]);
    SerialDIN(4, mat1[3]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(8, SSD_CODE[0xC]);
    SerialDIN(8, mat2[7]);
    SerialDIN(8, mat1[7]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(7, 0x3e);     // 0b00111110: U
    SerialDIN(7, mat2[6]);
    SerialDIN(7, mat1[6]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(6, 0x05);     // 0b00000101: r
    SerialDIN(6, mat2[5]);
    SerialDIN(6, mat1[5]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(5, 0);
    SerialDIN(5, mat2[4]);
    SerialDIN(5, mat1[4]);
    LOAD = 1;
}

void MAT_SSDbest_Show(UC* mat1, UC* mat2, int t)
{
    UC i;
    UI min = t / 60, sec = t % 60;
    for (i = 0 ; i < 2; i++) {
        LOAD = 0;
        SerialDIN(i + 1, SSD_CODE[sec % 10]);
        SerialDIN(i + 1, mat2[i]);
        SerialDIN(i + 1, mat1[i]);
        sec /= 10;
        LOAD = 1;
    }
    LOAD = 0;
    SerialDIN(3, 0x01);
    SerialDIN(3, mat2[2]);
    SerialDIN(3, mat1[2]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(4, SSD_CODE[min]);
    SerialDIN(4, mat2[3]);
    SerialDIN(4, mat1[3]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(8, SSD_CODE[0xB]);
    SerialDIN(8, mat2[7]);
    SerialDIN(8, mat1[7]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(7, SSD_CODE[0xE]);
    SerialDIN(7, mat2[6]);
    SerialDIN(7, mat1[6]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(6, 0x5b);     // 0b01011011: S
    SerialDIN(6, mat2[5]);
    SerialDIN(6, mat1[5]);
    LOAD = 1;
    LOAD = 0;
    SerialDIN(5, 0x11);     // 0b00010001: t
    SerialDIN(5, mat2[4]);
    SerialDIN(5, mat1[4]);
    LOAD = 1;
}

void MAT_SSD_CLEAR()
{
    UC i, j;
    for (i = 1; i <= 8; i++) {
        LOAD = 0;
        for (j = 0; j < 3; j++)
            SerialDIN(i, 0x00);
        LOAD = 1;
    }
}

void MAT_SSD_INIT()
{
    UC i;
    LOAD = 0;
    for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SHUTDOWN,     0x01);   // Normal mode (0xX1)
    LOAD = 1;
    LOAD = 0;
    for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DISPLAY_TEST, 0x00);  // Overwrite SHUTDOWN
    LOAD = 1;
    LOAD = 0;
    for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DECODE_MODE,  0x00);  // no decoding
    LOAD = 1;
    LOAD = 0;
    for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SCAN_LIMIT,   0x07);  // use all 8 digits
    LOAD = 1;
    LOAD = 0;
    for (i = 0; i < MAX7219_NUM; i++) SerialDIN(INTENSITY,    0x0E);  // brightness
    LOAD = 1;

    MAT_SSD_CLEAR();
}

#endif