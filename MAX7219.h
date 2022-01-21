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
void MAT_SSD_INIT();
void MAT_SSD_Show(UC*, UC*, UC*);
void MAT_SSDnum_Show(UC*, UC*, long);
// void SSD_Number(long);
// void SSD_Show(UC*);
// void MAT_Show(long);

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

void MAT_SSD_Show(UC* mat1, UC* mat2, UC* num)
{
    UI i;
    for (i = 0 ; i < 8; i++) {
        LOAD = 0;
        SerialDIN(i + 1, SSD_CODE[num[i]]);
        SerialDIN(i + 1, mat1[i]);
        SerialDIN(i + 1, mat2[i]);
        LOAD = 1;
    }
}

void MAT_SSDnum_Show(UC* mat1, UC* mat2, long num)
{
    UI i, n;
    n = num > 0 ? num : -num;
    for (i = 0 ; i < 8; i++) {
        LOAD = 0;
        SerialDIN(i + 1, SSD_CODE[n % 10]);
        SerialDIN(i + 1, mat2[i]);
        SerialDIN(i + 1, mat1[i]);
        n /= 10;
        LOAD = 1;
    }
}

// void SSD_Number(long num)
// {
//     UI i, n;

//     n = num > 0 ? num : num * -1;

//     for (i = 1; i <= 8 && n; i++) {
//         SerialDIN(i, SSD_CODE[n % 10]);
//         n /= 10;
//     }
//     if (num < 10 && i <= 8) {
//         SerialDIN(i++, 0x01);
//     }
//     for (i++; i <= 8; i++)
//         SerialDIN(i, 0);
// }

// void SSD_Show(UC* num)
// {
//     UI i;

//     for (i = 1; i <= 8; i++)
//         SerialDIN(i, SSD_CODE[num[8 - i]]);
// }

void MAT_SSD_INIT()
{
    UC i, j;
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

    for (i = 1; i <= 8; i++) {
        LOAD = 0;
        for (j = 0; j < 3; j++)
            SerialDIN(i, 0x00);
        LOAD = 1;
    }
}

// void MAT_Show(UC* mat1, UC* mat2)
// {
//     UC i;

//     for (i = 0; i < 8; i++)
//         SerialDIN(i + 1, mat1[i], mat2[i]);
// }


#endif