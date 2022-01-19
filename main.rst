                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.1 #6083 (Dec 17 2010) (MINGW32)
                              4 ; This file was generated Wed Jan 19 18:47:20 2022
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _T0_isr
                             14 	.globl _CY
                             15 	.globl _AC
                             16 	.globl _F0
                             17 	.globl _RS1
                             18 	.globl _RS0
                             19 	.globl _OV
                             20 	.globl _F1
                             21 	.globl _P
                             22 	.globl _PS
                             23 	.globl _PT1
                             24 	.globl _PX1
                             25 	.globl _PT0
                             26 	.globl _PX0
                             27 	.globl _RD
                             28 	.globl _WR
                             29 	.globl _T1
                             30 	.globl _T0
                             31 	.globl _INT1
                             32 	.globl _INT0
                             33 	.globl _TXD
                             34 	.globl _RXD
                             35 	.globl _P3_7
                             36 	.globl _P3_6
                             37 	.globl _P3_5
                             38 	.globl _P3_4
                             39 	.globl _P3_3
                             40 	.globl _P3_2
                             41 	.globl _P3_1
                             42 	.globl _P3_0
                             43 	.globl _EA
                             44 	.globl _ES
                             45 	.globl _ET1
                             46 	.globl _EX1
                             47 	.globl _ET0
                             48 	.globl _EX0
                             49 	.globl _P2_7
                             50 	.globl _P2_6
                             51 	.globl _P2_5
                             52 	.globl _P2_4
                             53 	.globl _P2_3
                             54 	.globl _P2_2
                             55 	.globl _P2_1
                             56 	.globl _P2_0
                             57 	.globl _SM0
                             58 	.globl _SM1
                             59 	.globl _SM2
                             60 	.globl _REN
                             61 	.globl _TB8
                             62 	.globl _RB8
                             63 	.globl _TI
                             64 	.globl _RI
                             65 	.globl _P1_7
                             66 	.globl _P1_6
                             67 	.globl _P1_5
                             68 	.globl _P1_4
                             69 	.globl _P1_3
                             70 	.globl _P1_2
                             71 	.globl _P1_1
                             72 	.globl _P1_0
                             73 	.globl _TF1
                             74 	.globl _TR1
                             75 	.globl _TF0
                             76 	.globl _TR0
                             77 	.globl _IE1
                             78 	.globl _IT1
                             79 	.globl _IE0
                             80 	.globl _IT0
                             81 	.globl _P0_7
                             82 	.globl _P0_6
                             83 	.globl _P0_5
                             84 	.globl _P0_4
                             85 	.globl _P0_3
                             86 	.globl _P0_2
                             87 	.globl _P0_1
                             88 	.globl _P0_0
                             89 	.globl _B
                             90 	.globl _ACC
                             91 	.globl _PSW
                             92 	.globl _IP
                             93 	.globl _P3
                             94 	.globl _IE
                             95 	.globl _P2
                             96 	.globl _SBUF
                             97 	.globl _SCON
                             98 	.globl _P1
                             99 	.globl _TH1
                            100 	.globl _TH0
                            101 	.globl _TL1
                            102 	.globl _TL0
                            103 	.globl _TMOD
                            104 	.globl _TCON
                            105 	.globl _PCON
                            106 	.globl _DPH
                            107 	.globl _DPL
                            108 	.globl _SP
                            109 	.globl _P0
                            110 	.globl _ms
                            111 	.globl _N
                            112 	.globl _M2
                            113 	.globl _M1
                            114 	.globl _i
                            115 	.globl _data_buf
                            116 	.globl _SSD_CODE
                            117 	.globl _BitExtract
                            118 	.globl _SerialDIN
                            119 	.globl _MAT_SSD_Show
                            120 	.globl _MAT_SSDnum_Show
                            121 	.globl _SSD_Number
                            122 	.globl _MAT_SSD_INIT
                            123 ;--------------------------------------------------------
                            124 ; special function registers
                            125 ;--------------------------------------------------------
                            126 	.area RSEG    (ABS,DATA)
   0000                     127 	.org 0x0000
                    0080    128 _P0	=	0x0080
                    0081    129 _SP	=	0x0081
                    0082    130 _DPL	=	0x0082
                    0083    131 _DPH	=	0x0083
                    0087    132 _PCON	=	0x0087
                    0088    133 _TCON	=	0x0088
                    0089    134 _TMOD	=	0x0089
                    008A    135 _TL0	=	0x008a
                    008B    136 _TL1	=	0x008b
                    008C    137 _TH0	=	0x008c
                    008D    138 _TH1	=	0x008d
                    0090    139 _P1	=	0x0090
                    0098    140 _SCON	=	0x0098
                    0099    141 _SBUF	=	0x0099
                    00A0    142 _P2	=	0x00a0
                    00A8    143 _IE	=	0x00a8
                    00B0    144 _P3	=	0x00b0
                    00B8    145 _IP	=	0x00b8
                    00D0    146 _PSW	=	0x00d0
                    00E0    147 _ACC	=	0x00e0
                    00F0    148 _B	=	0x00f0
                            149 ;--------------------------------------------------------
                            150 ; special function bits
                            151 ;--------------------------------------------------------
                            152 	.area RSEG    (ABS,DATA)
   0000                     153 	.org 0x0000
                    0080    154 _P0_0	=	0x0080
                    0081    155 _P0_1	=	0x0081
                    0082    156 _P0_2	=	0x0082
                    0083    157 _P0_3	=	0x0083
                    0084    158 _P0_4	=	0x0084
                    0085    159 _P0_5	=	0x0085
                    0086    160 _P0_6	=	0x0086
                    0087    161 _P0_7	=	0x0087
                    0088    162 _IT0	=	0x0088
                    0089    163 _IE0	=	0x0089
                    008A    164 _IT1	=	0x008a
                    008B    165 _IE1	=	0x008b
                    008C    166 _TR0	=	0x008c
                    008D    167 _TF0	=	0x008d
                    008E    168 _TR1	=	0x008e
                    008F    169 _TF1	=	0x008f
                    0090    170 _P1_0	=	0x0090
                    0091    171 _P1_1	=	0x0091
                    0092    172 _P1_2	=	0x0092
                    0093    173 _P1_3	=	0x0093
                    0094    174 _P1_4	=	0x0094
                    0095    175 _P1_5	=	0x0095
                    0096    176 _P1_6	=	0x0096
                    0097    177 _P1_7	=	0x0097
                    0098    178 _RI	=	0x0098
                    0099    179 _TI	=	0x0099
                    009A    180 _RB8	=	0x009a
                    009B    181 _TB8	=	0x009b
                    009C    182 _REN	=	0x009c
                    009D    183 _SM2	=	0x009d
                    009E    184 _SM1	=	0x009e
                    009F    185 _SM0	=	0x009f
                    00A0    186 _P2_0	=	0x00a0
                    00A1    187 _P2_1	=	0x00a1
                    00A2    188 _P2_2	=	0x00a2
                    00A3    189 _P2_3	=	0x00a3
                    00A4    190 _P2_4	=	0x00a4
                    00A5    191 _P2_5	=	0x00a5
                    00A6    192 _P2_6	=	0x00a6
                    00A7    193 _P2_7	=	0x00a7
                    00A8    194 _EX0	=	0x00a8
                    00A9    195 _ET0	=	0x00a9
                    00AA    196 _EX1	=	0x00aa
                    00AB    197 _ET1	=	0x00ab
                    00AC    198 _ES	=	0x00ac
                    00AF    199 _EA	=	0x00af
                    00B0    200 _P3_0	=	0x00b0
                    00B1    201 _P3_1	=	0x00b1
                    00B2    202 _P3_2	=	0x00b2
                    00B3    203 _P3_3	=	0x00b3
                    00B4    204 _P3_4	=	0x00b4
                    00B5    205 _P3_5	=	0x00b5
                    00B6    206 _P3_6	=	0x00b6
                    00B7    207 _P3_7	=	0x00b7
                    00B0    208 _RXD	=	0x00b0
                    00B1    209 _TXD	=	0x00b1
                    00B2    210 _INT0	=	0x00b2
                    00B3    211 _INT1	=	0x00b3
                    00B4    212 _T0	=	0x00b4
                    00B5    213 _T1	=	0x00b5
                    00B6    214 _WR	=	0x00b6
                    00B7    215 _RD	=	0x00b7
                    00B8    216 _PX0	=	0x00b8
                    00B9    217 _PT0	=	0x00b9
                    00BA    218 _PX1	=	0x00ba
                    00BB    219 _PT1	=	0x00bb
                    00BC    220 _PS	=	0x00bc
                    00D0    221 _P	=	0x00d0
                    00D1    222 _F1	=	0x00d1
                    00D2    223 _OV	=	0x00d2
                    00D3    224 _RS0	=	0x00d3
                    00D4    225 _RS1	=	0x00d4
                    00D5    226 _F0	=	0x00d5
                    00D6    227 _AC	=	0x00d6
                    00D7    228 _CY	=	0x00d7
                            229 ;--------------------------------------------------------
                            230 ; overlayable register banks
                            231 ;--------------------------------------------------------
                            232 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     233 	.ds 8
                            234 ;--------------------------------------------------------
                            235 ; internal ram data
                            236 ;--------------------------------------------------------
                            237 	.area DSEG    (DATA)
   0008                     238 _SSD_CODE::
   0008                     239 	.ds 16
   0018                     240 _data_buf::
   0018                     241 	.ds 2
   001A                     242 _i::
   001A                     243 	.ds 1
   001B                     244 _M1::
   001B                     245 	.ds 8
   0023                     246 _M2::
   0023                     247 	.ds 8
   002B                     248 _N::
   002B                     249 	.ds 8
   0033                     250 _ms::
   0033                     251 	.ds 4
                            252 ;--------------------------------------------------------
                            253 ; overlayable items in internal ram 
                            254 ;--------------------------------------------------------
                            255 	.area OSEG    (OVR,DATA)
                            256 ;--------------------------------------------------------
                            257 ; Stack segment in internal ram 
                            258 ;--------------------------------------------------------
                            259 	.area	SSEG	(DATA)
   0038                     260 __start__stack:
   0038                     261 	.ds	1
                            262 
                            263 ;--------------------------------------------------------
                            264 ; indirectly addressable internal ram data
                            265 ;--------------------------------------------------------
                            266 	.area ISEG    (DATA)
                            267 ;--------------------------------------------------------
                            268 ; absolute internal ram data
                            269 ;--------------------------------------------------------
                            270 	.area IABS    (ABS,DATA)
                            271 	.area IABS    (ABS,DATA)
                            272 ;--------------------------------------------------------
                            273 ; bit data
                            274 ;--------------------------------------------------------
                            275 	.area BSEG    (BIT)
                            276 ;--------------------------------------------------------
                            277 ; paged external ram data
                            278 ;--------------------------------------------------------
                            279 	.area PSEG    (PAG,XDATA)
                            280 ;--------------------------------------------------------
                            281 ; external ram data
                            282 ;--------------------------------------------------------
                            283 	.area XSEG    (XDATA)
                            284 ;--------------------------------------------------------
                            285 ; absolute external ram data
                            286 ;--------------------------------------------------------
                            287 	.area XABS    (ABS,XDATA)
                            288 ;--------------------------------------------------------
                            289 ; external initialized ram data
                            290 ;--------------------------------------------------------
                            291 	.area XISEG   (XDATA)
                            292 	.area HOME    (CODE)
                            293 	.area GSINIT0 (CODE)
                            294 	.area GSINIT1 (CODE)
                            295 	.area GSINIT2 (CODE)
                            296 	.area GSINIT3 (CODE)
                            297 	.area GSINIT4 (CODE)
                            298 	.area GSINIT5 (CODE)
                            299 	.area GSINIT  (CODE)
                            300 	.area GSFINAL (CODE)
                            301 	.area CSEG    (CODE)
                            302 ;--------------------------------------------------------
                            303 ; interrupt vector 
                            304 ;--------------------------------------------------------
                            305 	.area HOME    (CODE)
   0000                     306 __interrupt_vect:
   0000 02 00 13            307 	ljmp	__sdcc_gsinit_startup
   0003 32                  308 	reti
   0004                     309 	.ds	7
   000B 02 04 D8            310 	ljmp	_T0_isr
                            311 ;--------------------------------------------------------
                            312 ; global & static initialisations
                            313 ;--------------------------------------------------------
                            314 	.area HOME    (CODE)
                            315 	.area GSINIT  (CODE)
                            316 	.area GSFINAL (CODE)
                            317 	.area GSINIT  (CODE)
                            318 	.globl __sdcc_gsinit_startup
                            319 	.globl __sdcc_program_startup
                            320 	.globl __start__stack
                            321 	.globl __mcs51_genXINIT
                            322 	.globl __mcs51_genXRAMCLEAR
                            323 	.globl __mcs51_genRAMCLEAR
                            324 ;	E:\GitHub\8051final\/MAX7219.h:21: UC SSD_CODE[] = {
   006C 75 08 7E            325 	mov	_SSD_CODE,#0x7E
   006F 75 09 30            326 	mov	(_SSD_CODE + 0x0001),#0x30
   0072 75 0A 6D            327 	mov	(_SSD_CODE + 0x0002),#0x6D
   0075 75 0B 79            328 	mov	(_SSD_CODE + 0x0003),#0x79
   0078 75 0C 33            329 	mov	(_SSD_CODE + 0x0004),#0x33
   007B 75 0D 5B            330 	mov	(_SSD_CODE + 0x0005),#0x5B
   007E 75 0E 5F            331 	mov	(_SSD_CODE + 0x0006),#0x5F
   0081 75 0F 70            332 	mov	(_SSD_CODE + 0x0007),#0x70
   0084 75 10 7F            333 	mov	(_SSD_CODE + 0x0008),#0x7F
   0087 75 11 7B            334 	mov	(_SSD_CODE + 0x0009),#0x7B
   008A 75 12 77            335 	mov	(_SSD_CODE + 0x000a),#0x77
   008D 75 13 1F            336 	mov	(_SSD_CODE + 0x000b),#0x1F
   0090 75 14 4E            337 	mov	(_SSD_CODE + 0x000c),#0x4E
   0093 75 15 3D            338 	mov	(_SSD_CODE + 0x000d),#0x3D
   0096 75 16 4F            339 	mov	(_SSD_CODE + 0x000e),#0x4F
   0099 75 17 47            340 	mov	(_SSD_CODE + 0x000f),#0x47
                            341 ;	E:\GitHub\8051final\main.c:10: char i = 0;
   009C 75 1A 00            342 	mov	_i,#0x00
                            343 ;	E:\GitHub\8051final\main.c:12: UC M1[8] = {
   009F 75 1B 07            344 	mov	_M1,#0x07
   00A2 75 1C 13            345 	mov	(_M1 + 0x0001),#0x13
   00A5 75 1D D3            346 	mov	(_M1 + 0x0002),#0xD3
   00A8 75 1E 83            347 	mov	(_M1 + 0x0003),#0x83
   00AB 75 1F 83            348 	mov	(_M1 + 0x0004),#0x83
   00AE 75 20 D3            349 	mov	(_M1 + 0x0005),#0xD3
   00B1 75 21 13            350 	mov	(_M1 + 0x0006),#0x13
   00B4 75 22 07            351 	mov	(_M1 + 0x0007),#0x07
                            352 ;	E:\GitHub\8051final\main.c:21: }, M2[8] = {
   00B7 75 23 00            353 	mov	_M2,#0x00
   00BA 75 24 0C            354 	mov	(_M2 + 0x0001),#0x0C
   00BD 75 25 EC            355 	mov	(_M2 + 0x0002),#0xEC
   00C0 75 26 70            356 	mov	(_M2 + 0x0003),#0x70
   00C3 75 27 70            357 	mov	(_M2 + 0x0004),#0x70
   00C6 75 28 EC            358 	mov	(_M2 + 0x0005),#0xEC
   00C9 75 29 0C            359 	mov	(_M2 + 0x0006),#0x0C
   00CC 75 2A 00            360 	mov	(_M2 + 0x0007),#0x00
                            361 ;	E:\GitHub\8051final\main.c:30: }, N[8] = {1, 2, 3, 4, 5, 6, 7, 8};
   00CF 75 2B 01            362 	mov	_N,#0x01
   00D2 75 2C 02            363 	mov	(_N + 0x0001),#0x02
   00D5 75 2D 03            364 	mov	(_N + 0x0002),#0x03
   00D8 75 2E 04            365 	mov	(_N + 0x0003),#0x04
   00DB 75 2F 05            366 	mov	(_N + 0x0004),#0x05
   00DE 75 30 06            367 	mov	(_N + 0x0005),#0x06
   00E1 75 31 07            368 	mov	(_N + 0x0006),#0x07
   00E4 75 32 08            369 	mov	(_N + 0x0007),#0x08
                            370 ;	E:\GitHub\8051final\main.c:33: long ms = 0;
   00E7 E4                  371 	clr	a
   00E8 F5 33               372 	mov	_ms,a
   00EA F5 34               373 	mov	(_ms + 1),a
   00EC F5 35               374 	mov	(_ms + 2),a
   00EE F5 36               375 	mov	(_ms + 3),a
                            376 	.area GSFINAL (CODE)
   00F0 02 00 0E            377 	ljmp	__sdcc_program_startup
                            378 ;--------------------------------------------------------
                            379 ; Home
                            380 ;--------------------------------------------------------
                            381 	.area HOME    (CODE)
                            382 	.area HOME    (CODE)
   000E                     383 __sdcc_program_startup:
   000E 12 04 FC            384 	lcall	_main
                            385 ;	return from main will lock up
   0011 80 FE               386 	sjmp .
                            387 ;--------------------------------------------------------
                            388 ; code
                            389 ;--------------------------------------------------------
                            390 	.area CSEG    (CODE)
                            391 ;------------------------------------------------------------
                            392 ;Allocation info for local variables in function 'BitExtract'
                            393 ;------------------------------------------------------------
                            394 ;bits                      Allocated to registers r2 
                            395 ;i                         Allocated to registers r3 
                            396 ;------------------------------------------------------------
                            397 ;	E:\GitHub\8051final\/MAX7219.h:49: void BitExtract(UC bits)
                            398 ;	-----------------------------------------
                            399 ;	 function BitExtract
                            400 ;	-----------------------------------------
   00F3                     401 _BitExtract:
                    0002    402 	ar2 = 0x02
                    0003    403 	ar3 = 0x03
                    0004    404 	ar4 = 0x04
                    0005    405 	ar5 = 0x05
                    0006    406 	ar6 = 0x06
                    0007    407 	ar7 = 0x07
                    0000    408 	ar0 = 0x00
                    0001    409 	ar1 = 0x01
   00F3 AA 82               410 	mov	r2,dpl
                            411 ;	E:\GitHub\8051final\/MAX7219.h:53: for (i = 0; i < 8; i++) {
   00F5 7B 00               412 	mov	r3,#0x00
   00F7                     413 00101$:
   00F7 BB 08 00            414 	cjne	r3,#0x08,00110$
   00FA                     415 00110$:
   00FA 50 0C               416 	jnc	00105$
                            417 ;	E:\GitHub\8051final\/MAX7219.h:54: CLK = 0;
   00FC C2 A2               418 	clr	_P2_2
                            419 ;	E:\GitHub\8051final\/MAX7219.h:55: DIN = (bits & 0x80);
                            420 ;	E:\GitHub\8051final\/MAX7219.h:56: bits <<= 1;
   00FE EA                  421 	mov	a,r2
   00FF 2A                  422 	add	a,r2
   0100 92 A4               423 	mov	_P2_4,c
   0102 FA                  424 	mov	r2,a
                            425 ;	E:\GitHub\8051final\/MAX7219.h:57: CLK = 1;
   0103 D2 A2               426 	setb	_P2_2
                            427 ;	E:\GitHub\8051final\/MAX7219.h:53: for (i = 0; i < 8; i++) {
   0105 0B                  428 	inc	r3
   0106 80 EF               429 	sjmp	00101$
   0108                     430 00105$:
   0108 22                  431 	ret
                            432 ;------------------------------------------------------------
                            433 ;Allocation info for local variables in function 'SerialDIN'
                            434 ;------------------------------------------------------------
                            435 ;dat                       Allocated to stack - offset -3
                            436 ;address                   Allocated to registers r2 
                            437 ;------------------------------------------------------------
                            438 ;	E:\GitHub\8051final\/MAX7219.h:61: void SerialDIN(UC address, UC dat)
                            439 ;	-----------------------------------------
                            440 ;	 function SerialDIN
                            441 ;	-----------------------------------------
   0109                     442 _SerialDIN:
   0109 C0 37               443 	push	_bp
   010B 85 81 37            444 	mov	_bp,sp
                            445 ;	E:\GitHub\8051final\/MAX7219.h:63: BitExtract(address);
   010E 12 00 F3            446 	lcall	_BitExtract
                            447 ;	E:\GitHub\8051final\/MAX7219.h:64: BitExtract(dat);
   0111 E5 37               448 	mov	a,_bp
   0113 24 FD               449 	add	a,#0xfd
   0115 F8                  450 	mov	r0,a
   0116 86 82               451 	mov	dpl,@r0
   0118 12 00 F3            452 	lcall	_BitExtract
   011B D0 37               453 	pop	_bp
   011D 22                  454 	ret
                            455 ;------------------------------------------------------------
                            456 ;Allocation info for local variables in function 'MAT_SSD_Show'
                            457 ;------------------------------------------------------------
                            458 ;mat2                      Allocated to stack - offset -5
                            459 ;num                       Allocated to stack - offset -8
                            460 ;mat1                      Allocated to stack - offset 1
                            461 ;i                         Allocated to registers r5 r6 
                            462 ;------------------------------------------------------------
                            463 ;	E:\GitHub\8051final\/MAX7219.h:67: void MAT_SSD_Show(UC* mat1, UC* mat2, UC* num)
                            464 ;	-----------------------------------------
                            465 ;	 function MAT_SSD_Show
                            466 ;	-----------------------------------------
   011E                     467 _MAT_SSD_Show:
   011E C0 37               468 	push	_bp
   0120 85 81 37            469 	mov	_bp,sp
   0123 C0 82               470 	push	dpl
   0125 C0 83               471 	push	dph
   0127 C0 F0               472 	push	b
                            473 ;	E:\GitHub\8051final\/MAX7219.h:70: for (i = 0 ; i < 8; i++) {
   0129 7D 00               474 	mov	r5,#0x00
   012B 7E 00               475 	mov	r6,#0x00
   012D                     476 00101$:
   012D C3                  477 	clr	c
   012E ED                  478 	mov	a,r5
   012F 94 08               479 	subb	a,#0x08
   0131 EE                  480 	mov	a,r6
   0132 94 00               481 	subb	a,#0x00
   0134 40 03               482 	jc	00110$
   0136 02 01 D0            483 	ljmp	00105$
   0139                     484 00110$:
                            485 ;	E:\GitHub\8051final\/MAX7219.h:71: LOAD = 0;
   0139 C2 A3               486 	clr	_P2_3
                            487 ;	E:\GitHub\8051final\/MAX7219.h:72: SerialDIN(i + 1, SSD_CODE[num[i]]);
   013B E5 37               488 	mov	a,_bp
   013D 24 F8               489 	add	a,#0xf8
   013F F8                  490 	mov	r0,a
   0140 ED                  491 	mov	a,r5
   0141 26                  492 	add	a,@r0
   0142 FF                  493 	mov	r7,a
   0143 EE                  494 	mov	a,r6
   0144 08                  495 	inc	r0
   0145 36                  496 	addc	a,@r0
   0146 FA                  497 	mov	r2,a
   0147 08                  498 	inc	r0
   0148 86 03               499 	mov	ar3,@r0
   014A 8F 82               500 	mov	dpl,r7
   014C 8A 83               501 	mov	dph,r2
   014E 8B F0               502 	mov	b,r3
   0150 12 05 6D            503 	lcall	__gptrget
   0153 24 08               504 	add	a,#_SSD_CODE
   0155 F8                  505 	mov	r0,a
   0156 86 02               506 	mov	ar2,@r0
   0158 8D 03               507 	mov	ar3,r5
   015A 0B                  508 	inc	r3
   015B C0 03               509 	push	ar3
   015D C0 05               510 	push	ar5
   015F C0 06               511 	push	ar6
   0161 C0 02               512 	push	ar2
   0163 8B 82               513 	mov	dpl,r3
   0165 12 01 09            514 	lcall	_SerialDIN
   0168 15 81               515 	dec	sp
   016A D0 06               516 	pop	ar6
   016C D0 05               517 	pop	ar5
   016E D0 03               518 	pop	ar3
                            519 ;	E:\GitHub\8051final\/MAX7219.h:73: SerialDIN(i + 1, mat1[i]);
   0170 A8 37               520 	mov	r0,_bp
   0172 08                  521 	inc	r0
   0173 ED                  522 	mov	a,r5
   0174 26                  523 	add	a,@r0
   0175 FA                  524 	mov	r2,a
   0176 EE                  525 	mov	a,r6
   0177 08                  526 	inc	r0
   0178 36                  527 	addc	a,@r0
   0179 FC                  528 	mov	r4,a
   017A 08                  529 	inc	r0
   017B 86 07               530 	mov	ar7,@r0
   017D 8A 82               531 	mov	dpl,r2
   017F 8C 83               532 	mov	dph,r4
   0181 8F F0               533 	mov	b,r7
   0183 12 05 6D            534 	lcall	__gptrget
   0186 FA                  535 	mov	r2,a
   0187 C0 03               536 	push	ar3
   0189 C0 05               537 	push	ar5
   018B C0 06               538 	push	ar6
   018D C0 02               539 	push	ar2
   018F 8B 82               540 	mov	dpl,r3
   0191 12 01 09            541 	lcall	_SerialDIN
   0194 15 81               542 	dec	sp
   0196 D0 06               543 	pop	ar6
   0198 D0 05               544 	pop	ar5
   019A D0 03               545 	pop	ar3
                            546 ;	E:\GitHub\8051final\/MAX7219.h:74: SerialDIN(i + 1, mat2[i]);
   019C E5 37               547 	mov	a,_bp
   019E 24 FB               548 	add	a,#0xfb
   01A0 F8                  549 	mov	r0,a
   01A1 ED                  550 	mov	a,r5
   01A2 26                  551 	add	a,@r0
   01A3 FA                  552 	mov	r2,a
   01A4 EE                  553 	mov	a,r6
   01A5 08                  554 	inc	r0
   01A6 36                  555 	addc	a,@r0
   01A7 FC                  556 	mov	r4,a
   01A8 08                  557 	inc	r0
   01A9 86 07               558 	mov	ar7,@r0
   01AB 8A 82               559 	mov	dpl,r2
   01AD 8C 83               560 	mov	dph,r4
   01AF 8F F0               561 	mov	b,r7
   01B1 12 05 6D            562 	lcall	__gptrget
   01B4 FA                  563 	mov	r2,a
   01B5 C0 05               564 	push	ar5
   01B7 C0 06               565 	push	ar6
   01B9 C0 02               566 	push	ar2
   01BB 8B 82               567 	mov	dpl,r3
   01BD 12 01 09            568 	lcall	_SerialDIN
   01C0 15 81               569 	dec	sp
   01C2 D0 06               570 	pop	ar6
   01C4 D0 05               571 	pop	ar5
                            572 ;	E:\GitHub\8051final\/MAX7219.h:75: LOAD = 1;
   01C6 D2 A3               573 	setb	_P2_3
                            574 ;	E:\GitHub\8051final\/MAX7219.h:70: for (i = 0 ; i < 8; i++) {
   01C8 0D                  575 	inc	r5
   01C9 BD 00 01            576 	cjne	r5,#0x00,00111$
   01CC 0E                  577 	inc	r6
   01CD                     578 00111$:
   01CD 02 01 2D            579 	ljmp	00101$
   01D0                     580 00105$:
   01D0 85 37 81            581 	mov	sp,_bp
   01D3 D0 37               582 	pop	_bp
   01D5 22                  583 	ret
                            584 ;------------------------------------------------------------
                            585 ;Allocation info for local variables in function 'MAT_SSDnum_Show'
                            586 ;------------------------------------------------------------
                            587 ;mat2                      Allocated to stack - offset -5
                            588 ;num                       Allocated to stack - offset -9
                            589 ;mat1                      Allocated to stack - offset 1
                            590 ;i                         Allocated to registers r2 r3 
                            591 ;n                         Allocated to stack - offset 4
                            592 ;------------------------------------------------------------
                            593 ;	E:\GitHub\8051final\/MAX7219.h:79: void MAT_SSDnum_Show(UC* mat1, UC* mat2, long num)
                            594 ;	-----------------------------------------
                            595 ;	 function MAT_SSDnum_Show
                            596 ;	-----------------------------------------
   01D6                     597 _MAT_SSDnum_Show:
   01D6 C0 37               598 	push	_bp
   01D8 85 81 37            599 	mov	_bp,sp
   01DB C0 82               600 	push	dpl
   01DD C0 83               601 	push	dph
   01DF C0 F0               602 	push	b
   01E1 05 81               603 	inc	sp
   01E3 05 81               604 	inc	sp
                            605 ;	E:\GitHub\8051final\/MAX7219.h:82: n = num > 0 ? num : -num;
   01E5 E5 37               606 	mov	a,_bp
   01E7 24 F7               607 	add	a,#0xf7
   01E9 F8                  608 	mov	r0,a
   01EA C3                  609 	clr	c
   01EB E4                  610 	clr	a
   01EC 96                  611 	subb	a,@r0
   01ED E4                  612 	clr	a
   01EE 08                  613 	inc	r0
   01EF 96                  614 	subb	a,@r0
   01F0 E4                  615 	clr	a
   01F1 08                  616 	inc	r0
   01F2 96                  617 	subb	a,@r0
   01F3 74 80               618 	mov	a,#(0x00 ^ 0x80)
   01F5 08                  619 	inc	r0
   01F6 86 F0               620 	mov	b,@r0
   01F8 63 F0 80            621 	xrl	b,#0x80
   01FB 95 F0               622 	subb	a,b
   01FD 50 12               623 	jnc	00107$
   01FF E5 37               624 	mov	a,_bp
   0201 24 F7               625 	add	a,#0xf7
   0203 F8                  626 	mov	r0,a
   0204 86 05               627 	mov	ar5,@r0
   0206 08                  628 	inc	r0
   0207 86 06               629 	mov	ar6,@r0
   0209 08                  630 	inc	r0
   020A 86 07               631 	mov	ar7,@r0
   020C 08                  632 	inc	r0
   020D 86 02               633 	mov	ar2,@r0
   020F 80 15               634 	sjmp	00108$
   0211                     635 00107$:
   0211 E5 37               636 	mov	a,_bp
   0213 24 F7               637 	add	a,#0xf7
   0215 F8                  638 	mov	r0,a
   0216 C3                  639 	clr	c
   0217 E4                  640 	clr	a
   0218 96                  641 	subb	a,@r0
   0219 FD                  642 	mov	r5,a
   021A 08                  643 	inc	r0
   021B E4                  644 	clr	a
   021C 96                  645 	subb	a,@r0
   021D FE                  646 	mov	r6,a
   021E 08                  647 	inc	r0
   021F E4                  648 	clr	a
   0220 96                  649 	subb	a,@r0
   0221 FF                  650 	mov	r7,a
   0222 08                  651 	inc	r0
   0223 E4                  652 	clr	a
   0224 96                  653 	subb	a,@r0
   0225 FA                  654 	mov	r2,a
   0226                     655 00108$:
   0226 E5 37               656 	mov	a,_bp
   0228 24 04               657 	add	a,#0x04
   022A F8                  658 	mov	r0,a
   022B A6 05               659 	mov	@r0,ar5
   022D 08                  660 	inc	r0
   022E A6 06               661 	mov	@r0,ar6
                            662 ;	E:\GitHub\8051final\/MAX7219.h:83: for (i = 0 ; i < 8; i++) {
   0230 7A 00               663 	mov	r2,#0x00
   0232 7B 00               664 	mov	r3,#0x00
   0234                     665 00101$:
   0234 C3                  666 	clr	c
   0235 EA                  667 	mov	a,r2
   0236 94 08               668 	subb	a,#0x08
   0238 EB                  669 	mov	a,r3
   0239 94 00               670 	subb	a,#0x00
   023B 40 03               671 	jc	00114$
   023D 02 03 08            672 	ljmp	00105$
   0240                     673 00114$:
                            674 ;	E:\GitHub\8051final\/MAX7219.h:84: LOAD = 0;
   0240 C2 A3               675 	clr	_P2_3
                            676 ;	E:\GitHub\8051final\/MAX7219.h:85: SerialDIN(i + 1, SSD_CODE[n % 10]);
   0242 C0 02               677 	push	ar2
   0244 C0 03               678 	push	ar3
   0246 74 0A               679 	mov	a,#0x0A
   0248 C0 E0               680 	push	acc
   024A E4                  681 	clr	a
   024B C0 E0               682 	push	acc
   024D E5 37               683 	mov	a,_bp
   024F 24 04               684 	add	a,#0x04
   0251 F8                  685 	mov	r0,a
   0252 86 82               686 	mov	dpl,@r0
   0254 08                  687 	inc	r0
   0255 86 83               688 	mov	dph,@r0
   0257 12 05 89            689 	lcall	__moduint
   025A AC 82               690 	mov	r4,dpl
   025C 15 81               691 	dec	sp
   025E 15 81               692 	dec	sp
   0260 D0 03               693 	pop	ar3
   0262 D0 02               694 	pop	ar2
   0264 EC                  695 	mov	a,r4
   0265 24 08               696 	add	a,#_SSD_CODE
   0267 F8                  697 	mov	r0,a
   0268 86 04               698 	mov	ar4,@r0
   026A 8A 07               699 	mov	ar7,r2
   026C 0F                  700 	inc	r7
   026D C0 02               701 	push	ar2
   026F C0 03               702 	push	ar3
   0271 C0 07               703 	push	ar7
   0273 C0 04               704 	push	ar4
   0275 8F 82               705 	mov	dpl,r7
   0277 12 01 09            706 	lcall	_SerialDIN
   027A 15 81               707 	dec	sp
   027C D0 07               708 	pop	ar7
   027E D0 03               709 	pop	ar3
   0280 D0 02               710 	pop	ar2
                            711 ;	E:\GitHub\8051final\/MAX7219.h:86: SerialDIN(i + 1, mat1[i]);
   0282 A8 37               712 	mov	r0,_bp
   0284 08                  713 	inc	r0
   0285 EA                  714 	mov	a,r2
   0286 26                  715 	add	a,@r0
   0287 FC                  716 	mov	r4,a
   0288 EB                  717 	mov	a,r3
   0289 08                  718 	inc	r0
   028A 36                  719 	addc	a,@r0
   028B FD                  720 	mov	r5,a
   028C 08                  721 	inc	r0
   028D 86 06               722 	mov	ar6,@r0
   028F 8C 82               723 	mov	dpl,r4
   0291 8D 83               724 	mov	dph,r5
   0293 8E F0               725 	mov	b,r6
   0295 12 05 6D            726 	lcall	__gptrget
   0298 FC                  727 	mov	r4,a
   0299 C0 02               728 	push	ar2
   029B C0 03               729 	push	ar3
   029D C0 07               730 	push	ar7
   029F C0 04               731 	push	ar4
   02A1 8F 82               732 	mov	dpl,r7
   02A3 12 01 09            733 	lcall	_SerialDIN
   02A6 15 81               734 	dec	sp
   02A8 D0 07               735 	pop	ar7
   02AA D0 03               736 	pop	ar3
   02AC D0 02               737 	pop	ar2
                            738 ;	E:\GitHub\8051final\/MAX7219.h:87: SerialDIN(i + 1, mat2[i]);
   02AE E5 37               739 	mov	a,_bp
   02B0 24 FB               740 	add	a,#0xfb
   02B2 F8                  741 	mov	r0,a
   02B3 EA                  742 	mov	a,r2
   02B4 26                  743 	add	a,@r0
   02B5 FC                  744 	mov	r4,a
   02B6 EB                  745 	mov	a,r3
   02B7 08                  746 	inc	r0
   02B8 36                  747 	addc	a,@r0
   02B9 FD                  748 	mov	r5,a
   02BA 08                  749 	inc	r0
   02BB 86 06               750 	mov	ar6,@r0
   02BD 8C 82               751 	mov	dpl,r4
   02BF 8D 83               752 	mov	dph,r5
   02C1 8E F0               753 	mov	b,r6
   02C3 12 05 6D            754 	lcall	__gptrget
   02C6 FC                  755 	mov	r4,a
   02C7 C0 02               756 	push	ar2
   02C9 C0 03               757 	push	ar3
   02CB C0 04               758 	push	ar4
   02CD 8F 82               759 	mov	dpl,r7
   02CF 12 01 09            760 	lcall	_SerialDIN
   02D2 15 81               761 	dec	sp
                            762 ;	E:\GitHub\8051final\/MAX7219.h:88: n /= 10;
   02D4 74 0A               763 	mov	a,#0x0A
   02D6 C0 E0               764 	push	acc
   02D8 E4                  765 	clr	a
   02D9 C0 E0               766 	push	acc
   02DB E5 37               767 	mov	a,_bp
   02DD 24 04               768 	add	a,#0x04
   02DF F8                  769 	mov	r0,a
   02E0 86 82               770 	mov	dpl,@r0
   02E2 08                  771 	inc	r0
   02E3 86 83               772 	mov	dph,@r0
   02E5 12 05 3C            773 	lcall	__divuint
   02E8 AC 82               774 	mov	r4,dpl
   02EA AD 83               775 	mov	r5,dph
   02EC 15 81               776 	dec	sp
   02EE 15 81               777 	dec	sp
   02F0 D0 03               778 	pop	ar3
   02F2 D0 02               779 	pop	ar2
   02F4 E5 37               780 	mov	a,_bp
   02F6 24 04               781 	add	a,#0x04
   02F8 F8                  782 	mov	r0,a
   02F9 A6 04               783 	mov	@r0,ar4
   02FB 08                  784 	inc	r0
   02FC A6 05               785 	mov	@r0,ar5
                            786 ;	E:\GitHub\8051final\/MAX7219.h:89: LOAD = 1;
   02FE D2 A3               787 	setb	_P2_3
                            788 ;	E:\GitHub\8051final\/MAX7219.h:83: for (i = 0 ; i < 8; i++) {
   0300 0A                  789 	inc	r2
   0301 BA 00 01            790 	cjne	r2,#0x00,00115$
   0304 0B                  791 	inc	r3
   0305                     792 00115$:
   0305 02 02 34            793 	ljmp	00101$
   0308                     794 00105$:
   0308 85 37 81            795 	mov	sp,_bp
   030B D0 37               796 	pop	_bp
   030D 22                  797 	ret
                            798 ;------------------------------------------------------------
                            799 ;Allocation info for local variables in function 'SSD_Number'
                            800 ;------------------------------------------------------------
                            801 ;num                       Allocated to stack - offset 1
                            802 ;i                         Allocated to registers r4 r5 
                            803 ;n                         Allocated to registers r6 r7 
                            804 ;------------------------------------------------------------
                            805 ;	E:\GitHub\8051final\/MAX7219.h:93: void SSD_Number(long num)
                            806 ;	-----------------------------------------
                            807 ;	 function SSD_Number
                            808 ;	-----------------------------------------
   030E                     809 _SSD_Number:
   030E C0 37               810 	push	_bp
   0310 85 81 37            811 	mov	_bp,sp
   0313 C0 82               812 	push	dpl
   0315 C0 83               813 	push	dph
   0317 C0 F0               814 	push	b
   0319 C0 E0               815 	push	acc
                            816 ;	E:\GitHub\8051final\/MAX7219.h:97: n = num > 0 ? num : num * -1;
   031B A8 37               817 	mov	r0,_bp
   031D 08                  818 	inc	r0
   031E C3                  819 	clr	c
   031F E4                  820 	clr	a
   0320 96                  821 	subb	a,@r0
   0321 E4                  822 	clr	a
   0322 08                  823 	inc	r0
   0323 96                  824 	subb	a,@r0
   0324 E4                  825 	clr	a
   0325 08                  826 	inc	r0
   0326 96                  827 	subb	a,@r0
   0327 74 80               828 	mov	a,#(0x00 ^ 0x80)
   0329 08                  829 	inc	r0
   032A 86 F0               830 	mov	b,@r0
   032C 63 F0 80            831 	xrl	b,#0x80
   032F 95 F0               832 	subb	a,b
   0331 50 10               833 	jnc	00115$
   0333 A8 37               834 	mov	r0,_bp
   0335 08                  835 	inc	r0
   0336 86 06               836 	mov	ar6,@r0
   0338 08                  837 	inc	r0
   0339 86 07               838 	mov	ar7,@r0
   033B 08                  839 	inc	r0
   033C 86 02               840 	mov	ar2,@r0
   033E 08                  841 	inc	r0
   033F 86 03               842 	mov	ar3,@r0
   0341 80 13               843 	sjmp	00116$
   0343                     844 00115$:
   0343 A8 37               845 	mov	r0,_bp
   0345 08                  846 	inc	r0
   0346 C3                  847 	clr	c
   0347 E4                  848 	clr	a
   0348 96                  849 	subb	a,@r0
   0349 FE                  850 	mov	r6,a
   034A 08                  851 	inc	r0
   034B E4                  852 	clr	a
   034C 96                  853 	subb	a,@r0
   034D FF                  854 	mov	r7,a
   034E 08                  855 	inc	r0
   034F E4                  856 	clr	a
   0350 96                  857 	subb	a,@r0
   0351 FA                  858 	mov	r2,a
   0352 08                  859 	inc	r0
   0353 E4                  860 	clr	a
   0354 96                  861 	subb	a,@r0
   0355 FB                  862 	mov	r3,a
   0356                     863 00116$:
                            864 ;	E:\GitHub\8051final\/MAX7219.h:99: for (i = 1; i <= 8 && n; i++) {
   0356 7A 01               865 	mov	r2,#0x01
   0358 7B 00               866 	mov	r3,#0x00
   035A                     867 00105$:
   035A C3                  868 	clr	c
   035B 74 08               869 	mov	a,#0x08
   035D 9A                  870 	subb	a,r2
   035E E4                  871 	clr	a
   035F 9B                  872 	subb	a,r3
   0360 40 6A               873 	jc	00125$
   0362 EE                  874 	mov	a,r6
   0363 4F                  875 	orl	a,r7
   0364 60 66               876 	jz	00125$
                            877 ;	E:\GitHub\8051final\/MAX7219.h:100: SerialDIN(i, SSD_CODE[n % 10]);
   0366 C0 02               878 	push	ar2
   0368 C0 03               879 	push	ar3
   036A C0 06               880 	push	ar6
   036C C0 07               881 	push	ar7
   036E 74 0A               882 	mov	a,#0x0A
   0370 C0 E0               883 	push	acc
   0372 E4                  884 	clr	a
   0373 C0 E0               885 	push	acc
   0375 8E 82               886 	mov	dpl,r6
   0377 8F 83               887 	mov	dph,r7
   0379 12 05 89            888 	lcall	__moduint
   037C AC 82               889 	mov	r4,dpl
   037E 15 81               890 	dec	sp
   0380 15 81               891 	dec	sp
   0382 D0 07               892 	pop	ar7
   0384 D0 06               893 	pop	ar6
   0386 D0 03               894 	pop	ar3
   0388 D0 02               895 	pop	ar2
   038A EC                  896 	mov	a,r4
   038B 24 08               897 	add	a,#_SSD_CODE
   038D F8                  898 	mov	r0,a
   038E 86 04               899 	mov	ar4,@r0
   0390 8A 05               900 	mov	ar5,r2
   0392 C0 02               901 	push	ar2
   0394 C0 03               902 	push	ar3
   0396 C0 06               903 	push	ar6
   0398 C0 07               904 	push	ar7
   039A C0 04               905 	push	ar4
   039C 8D 82               906 	mov	dpl,r5
   039E 12 01 09            907 	lcall	_SerialDIN
   03A1 15 81               908 	dec	sp
   03A3 D0 07               909 	pop	ar7
   03A5 D0 06               910 	pop	ar6
                            911 ;	E:\GitHub\8051final\/MAX7219.h:101: n /= 10;
   03A7 74 0A               912 	mov	a,#0x0A
   03A9 C0 E0               913 	push	acc
   03AB E4                  914 	clr	a
   03AC C0 E0               915 	push	acc
   03AE 8E 82               916 	mov	dpl,r6
   03B0 8F 83               917 	mov	dph,r7
   03B2 12 05 3C            918 	lcall	__divuint
   03B5 AC 82               919 	mov	r4,dpl
   03B7 AD 83               920 	mov	r5,dph
   03B9 15 81               921 	dec	sp
   03BB 15 81               922 	dec	sp
   03BD D0 03               923 	pop	ar3
   03BF D0 02               924 	pop	ar2
   03C1 8C 06               925 	mov	ar6,r4
   03C3 8D 07               926 	mov	ar7,r5
                            927 ;	E:\GitHub\8051final\/MAX7219.h:99: for (i = 1; i <= 8 && n; i++) {
   03C5 0A                  928 	inc	r2
   03C6 BA 00 91            929 	cjne	r2,#0x00,00105$
   03C9 0B                  930 	inc	r3
   03CA 80 8E               931 	sjmp	00105$
   03CC                     932 00125$:
   03CC 8A 04               933 	mov	ar4,r2
   03CE 8B 05               934 	mov	ar5,r3
                            935 ;	E:\GitHub\8051final\/MAX7219.h:103: if (num < 10 && i <= 8) {
   03D0 A8 37               936 	mov	r0,_bp
   03D2 08                  937 	inc	r0
   03D3 C3                  938 	clr	c
   03D4 E6                  939 	mov	a,@r0
   03D5 94 0A               940 	subb	a,#0x0A
   03D7 08                  941 	inc	r0
   03D8 E6                  942 	mov	a,@r0
   03D9 94 00               943 	subb	a,#0x00
   03DB 08                  944 	inc	r0
   03DC E6                  945 	mov	a,@r0
   03DD 94 00               946 	subb	a,#0x00
   03DF 08                  947 	inc	r0
   03E0 E6                  948 	mov	a,@r0
   03E1 64 80               949 	xrl	a,#0x80
   03E3 94 80               950 	subb	a,#0x80
   03E5 50 22               951 	jnc	00102$
   03E7 C3                  952 	clr	c
   03E8 74 08               953 	mov	a,#0x08
   03EA 9A                  954 	subb	a,r2
   03EB E4                  955 	clr	a
   03EC 9B                  956 	subb	a,r3
   03ED 40 1A               957 	jc	00102$
                            958 ;	E:\GitHub\8051final\/MAX7219.h:104: SerialDIN(i++, 0x01);
   03EF 74 01               959 	mov	a,#0x01
   03F1 2A                  960 	add	a,r2
   03F2 FC                  961 	mov	r4,a
   03F3 E4                  962 	clr	a
   03F4 3B                  963 	addc	a,r3
   03F5 FD                  964 	mov	r5,a
   03F6 C0 04               965 	push	ar4
   03F8 C0 05               966 	push	ar5
   03FA 74 01               967 	mov	a,#0x01
   03FC C0 E0               968 	push	acc
   03FE 8A 82               969 	mov	dpl,r2
   0400 12 01 09            970 	lcall	_SerialDIN
   0403 15 81               971 	dec	sp
   0405 D0 05               972 	pop	ar5
   0407 D0 04               973 	pop	ar4
   0409                     974 00102$:
                            975 ;	E:\GitHub\8051final\/MAX7219.h:106: for (i++; i <= 8; i++)
   0409 0C                  976 	inc	r4
   040A BC 00 01            977 	cjne	r4,#0x00,00133$
   040D 0D                  978 	inc	r5
   040E                     979 00133$:
   040E 8C 02               980 	mov	ar2,r4
   0410 8D 03               981 	mov	ar3,r5
   0412                     982 00109$:
   0412 C3                  983 	clr	c
   0413 74 08               984 	mov	a,#0x08
   0415 9A                  985 	subb	a,r2
   0416 E4                  986 	clr	a
   0417 9B                  987 	subb	a,r3
   0418 40 1B               988 	jc	00113$
                            989 ;	E:\GitHub\8051final\/MAX7219.h:107: SerialDIN(i, 0);
   041A 8A 04               990 	mov	ar4,r2
   041C C0 02               991 	push	ar2
   041E C0 03               992 	push	ar3
   0420 E4                  993 	clr	a
   0421 C0 E0               994 	push	acc
   0423 8C 82               995 	mov	dpl,r4
   0425 12 01 09            996 	lcall	_SerialDIN
   0428 15 81               997 	dec	sp
   042A D0 03               998 	pop	ar3
   042C D0 02               999 	pop	ar2
                           1000 ;	E:\GitHub\8051final\/MAX7219.h:106: for (i++; i <= 8; i++)
   042E 0A                 1001 	inc	r2
   042F BA 00 E0           1002 	cjne	r2,#0x00,00109$
   0432 0B                 1003 	inc	r3
   0433 80 DD              1004 	sjmp	00109$
   0435                    1005 00113$:
   0435 85 37 81           1006 	mov	sp,_bp
   0438 D0 37              1007 	pop	_bp
   043A 22                 1008 	ret
                           1009 ;------------------------------------------------------------
                           1010 ;Allocation info for local variables in function 'MAT_SSD_INIT'
                           1011 ;------------------------------------------------------------
                           1012 ;i                         Allocated to registers r2 
                           1013 ;j                         Allocated to registers r3 
                           1014 ;------------------------------------------------------------
                           1015 ;	E:\GitHub\8051final\/MAX7219.h:118: void MAT_SSD_INIT()
                           1016 ;	-----------------------------------------
                           1017 ;	 function MAT_SSD_INIT
                           1018 ;	-----------------------------------------
   043B                    1019 _MAT_SSD_INIT:
                           1020 ;	E:\GitHub\8051final\/MAX7219.h:121: LOAD = 0;
   043B C2 A3              1021 	clr	_P2_3
                           1022 ;	E:\GitHub\8051final\/MAX7219.h:122: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SHUTDOWN,     0x01);   // Normal mode (0xX1)
   043D 7A 03              1023 	mov	r2,#0x03
   043F                    1024 00103$:
   043F C0 02              1025 	push	ar2
   0441 74 01              1026 	mov	a,#0x01
   0443 C0 E0              1027 	push	acc
   0445 75 82 0C           1028 	mov	dpl,#0x0C
   0448 12 01 09           1029 	lcall	_SerialDIN
   044B 15 81              1030 	dec	sp
   044D D0 02              1031 	pop	ar2
   044F DA EE              1032 	djnz	r2,00103$
                           1033 ;	E:\GitHub\8051final\/MAX7219.h:123: LOAD = 1;
   0451 D2 A3              1034 	setb	_P2_3
                           1035 ;	E:\GitHub\8051final\/MAX7219.h:124: LOAD = 0;
   0453 C2 A3              1036 	clr	_P2_3
                           1037 ;	E:\GitHub\8051final\/MAX7219.h:125: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DISPLAY_TEST, 0x00);  // Overwrite SHUTDOWN
   0455 7A 03              1038 	mov	r2,#0x03
   0457                    1039 00106$:
   0457 C0 02              1040 	push	ar2
   0459 E4                 1041 	clr	a
   045A C0 E0              1042 	push	acc
   045C 75 82 0F           1043 	mov	dpl,#0x0F
   045F 12 01 09           1044 	lcall	_SerialDIN
   0462 15 81              1045 	dec	sp
   0464 D0 02              1046 	pop	ar2
   0466 DA EF              1047 	djnz	r2,00106$
                           1048 ;	E:\GitHub\8051final\/MAX7219.h:126: LOAD = 1;
   0468 D2 A3              1049 	setb	_P2_3
                           1050 ;	E:\GitHub\8051final\/MAX7219.h:127: LOAD = 0;
   046A C2 A3              1051 	clr	_P2_3
                           1052 ;	E:\GitHub\8051final\/MAX7219.h:128: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DECODE_MODE,  0x00);  // no decoding
   046C 7A 03              1053 	mov	r2,#0x03
   046E                    1054 00109$:
   046E C0 02              1055 	push	ar2
   0470 E4                 1056 	clr	a
   0471 C0 E0              1057 	push	acc
   0473 75 82 09           1058 	mov	dpl,#0x09
   0476 12 01 09           1059 	lcall	_SerialDIN
   0479 15 81              1060 	dec	sp
   047B D0 02              1061 	pop	ar2
   047D DA EF              1062 	djnz	r2,00109$
                           1063 ;	E:\GitHub\8051final\/MAX7219.h:129: LOAD = 1;
   047F D2 A3              1064 	setb	_P2_3
                           1065 ;	E:\GitHub\8051final\/MAX7219.h:130: LOAD = 0;
   0481 C2 A3              1066 	clr	_P2_3
                           1067 ;	E:\GitHub\8051final\/MAX7219.h:131: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SCAN_LIMIT,   0x07);  // use all 8 digits
   0483 7A 03              1068 	mov	r2,#0x03
   0485                    1069 00112$:
   0485 C0 02              1070 	push	ar2
   0487 74 07              1071 	mov	a,#0x07
   0489 C0 E0              1072 	push	acc
   048B 75 82 0B           1073 	mov	dpl,#0x0B
   048E 12 01 09           1074 	lcall	_SerialDIN
   0491 15 81              1075 	dec	sp
   0493 D0 02              1076 	pop	ar2
   0495 DA EE              1077 	djnz	r2,00112$
                           1078 ;	E:\GitHub\8051final\/MAX7219.h:132: LOAD = 1;
   0497 D2 A3              1079 	setb	_P2_3
                           1080 ;	E:\GitHub\8051final\/MAX7219.h:133: LOAD = 0;
   0499 C2 A3              1081 	clr	_P2_3
                           1082 ;	E:\GitHub\8051final\/MAX7219.h:134: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(INTENSITY,    0x0E);  // brightness
   049B 7A 03              1083 	mov	r2,#0x03
   049D                    1084 00115$:
   049D C0 02              1085 	push	ar2
   049F 74 0E              1086 	mov	a,#0x0E
   04A1 C0 E0              1087 	push	acc
   04A3 75 82 0A           1088 	mov	dpl,#0x0A
   04A6 12 01 09           1089 	lcall	_SerialDIN
   04A9 15 81              1090 	dec	sp
   04AB D0 02              1091 	pop	ar2
   04AD DA EE              1092 	djnz	r2,00115$
                           1093 ;	E:\GitHub\8051final\/MAX7219.h:135: LOAD = 1;
   04AF D2 A3              1094 	setb	_P2_3
                           1095 ;	E:\GitHub\8051final\/MAX7219.h:137: for (i = 1; i <= 8; i++) {
   04B1 7A 01              1096 	mov	r2,#0x01
   04B3                    1097 00119$:
   04B3 74 08              1098 	mov	a,#0x08
   04B5 B5 02 00           1099 	cjne	a,ar2,00146$
   04B8                    1100 00146$:
   04B8 40 1D              1101 	jc	00123$
                           1102 ;	E:\GitHub\8051final\/MAX7219.h:138: LOAD = 0;
   04BA C2 A3              1103 	clr	_P2_3
                           1104 ;	E:\GitHub\8051final\/MAX7219.h:139: for (j = 0; j < 3; j++)
   04BC 7B 03              1105 	mov	r3,#0x03
   04BE                    1106 00118$:
                           1107 ;	E:\GitHub\8051final\/MAX7219.h:140: SerialDIN(i, 0x00);
   04BE C0 02              1108 	push	ar2
   04C0 C0 03              1109 	push	ar3
   04C2 E4                 1110 	clr	a
   04C3 C0 E0              1111 	push	acc
   04C5 8A 82              1112 	mov	dpl,r2
   04C7 12 01 09           1113 	lcall	_SerialDIN
   04CA 15 81              1114 	dec	sp
   04CC D0 03              1115 	pop	ar3
   04CE D0 02              1116 	pop	ar2
   04D0 DB EC              1117 	djnz	r3,00118$
                           1118 ;	E:\GitHub\8051final\/MAX7219.h:139: for (j = 0; j < 3; j++)
                           1119 ;	E:\GitHub\8051final\/MAX7219.h:141: LOAD = 1;
   04D2 D2 A3              1120 	setb	_P2_3
                           1121 ;	E:\GitHub\8051final\/MAX7219.h:137: for (i = 1; i <= 8; i++) {
   04D4 0A                 1122 	inc	r2
   04D5 80 DC              1123 	sjmp	00119$
   04D7                    1124 00123$:
   04D7 22                 1125 	ret
                           1126 ;------------------------------------------------------------
                           1127 ;Allocation info for local variables in function 'T0_isr'
                           1128 ;------------------------------------------------------------
                           1129 ;------------------------------------------------------------
                           1130 ;	E:\GitHub\8051final\main.c:35: void T0_isr(void) __interrupt 1						// Interrupt routine w/ priority 1
                           1131 ;	-----------------------------------------
                           1132 ;	 function T0_isr
                           1133 ;	-----------------------------------------
   04D8                    1134 _T0_isr:
   04D8 C0 E0              1135 	push	acc
   04DA C0 D0              1136 	push	psw
   04DC 75 D0 00           1137 	mov	psw,#0x00
                           1138 ;	E:\GitHub\8051final\main.c:38: TH0 = (65536-1000) / 256;						// Reset initial higher 8 bits into Timer 0
   04DF 75 8C FC           1139 	mov	_TH0,#0xFC
                           1140 ;	E:\GitHub\8051final\main.c:39: TL0 = (65536-1000) % 256;						// Reset initial lower 8 bits into Timer 0
   04E2 75 8A 18           1141 	mov	_TL0,#0x18
                           1142 ;	E:\GitHub\8051final\main.c:41: ms++;
   04E5 05 33              1143 	inc	_ms
   04E7 E4                 1144 	clr	a
   04E8 B5 33 0C           1145 	cjne	a,_ms,00103$
   04EB 05 34              1146 	inc	(_ms + 1)
   04ED B5 34 07           1147 	cjne	a,(_ms + 1),00103$
   04F0 05 35              1148 	inc	(_ms + 2)
   04F2 B5 35 02           1149 	cjne	a,(_ms + 2),00103$
   04F5 05 36              1150 	inc	(_ms + 3)
   04F7                    1151 00103$:
   04F7 D0 D0              1152 	pop	psw
   04F9 D0 E0              1153 	pop	acc
   04FB 32                 1154 	reti
                           1155 ;	eliminated unneeded push/pop dpl
                           1156 ;	eliminated unneeded push/pop dph
                           1157 ;	eliminated unneeded push/pop b
                           1158 ;------------------------------------------------------------
                           1159 ;Allocation info for local variables in function 'main'
                           1160 ;------------------------------------------------------------
                           1161 ;------------------------------------------------------------
                           1162 ;	E:\GitHub\8051final\main.c:44: int main() {
                           1163 ;	-----------------------------------------
                           1164 ;	 function main
                           1165 ;	-----------------------------------------
   04FC                    1166 _main:
                           1167 ;	E:\GitHub\8051final\main.c:45: TMOD = 0x01;									// Set Timer 1 to  mode 0 & T imer 0 mode 1. (16-bit timer)
   04FC 75 89 01           1168 	mov	_TMOD,#0x01
                           1169 ;	E:\GitHub\8051final\main.c:46: TH0 = (65536-1000) / 256;						// Load initial higher 8 bits into Timer 0
   04FF 75 8C FC           1170 	mov	_TH0,#0xFC
                           1171 ;	E:\GitHub\8051final\main.c:47: TL0 = (65536-1000) % 256;						// Load initial lower 8 bits into Timer 0
   0502 75 8A 18           1172 	mov	_TL0,#0x18
                           1173 ;	E:\GitHub\8051final\main.c:48: ET0 = 1;										// Enable Timer 0 interrupt
   0505 D2 A9              1174 	setb	_ET0
                           1175 ;	E:\GitHub\8051final\main.c:49: EA = 1;											// Enable all interrupt
   0507 D2 AF              1176 	setb	_EA
                           1177 ;	E:\GitHub\8051final\main.c:50: TR0 = 1;										// Start Timer 0
   0509 D2 8C              1178 	setb	_TR0
                           1179 ;	E:\GitHub\8051final\main.c:52: P1 = 0x8f;
   050B 75 90 8F           1180 	mov	_P1,#0x8F
                           1181 ;	E:\GitHub\8051final\main.c:53: MAT_SSD_INIT();
   050E 12 04 3B           1182 	lcall	_MAT_SSD_INIT
                           1183 ;	E:\GitHub\8051final\main.c:54: P1 = 0x00;
   0511 75 90 00           1184 	mov	_P1,#0x00
                           1185 ;	E:\GitHub\8051final\main.c:55: while(1) {
   0514                    1186 00102$:
                           1187 ;	E:\GitHub\8051final\main.c:56: P1 = 0x81;
   0514 75 90 81           1188 	mov	_P1,#0x81
                           1189 ;	E:\GitHub\8051final\main.c:58: MAT_SSDnum_Show(M1, M2, ms);
   0517 C0 33              1190 	push	_ms
   0519 C0 34              1191 	push	(_ms + 1)
   051B C0 35              1192 	push	(_ms + 2)
   051D C0 36              1193 	push	(_ms + 3)
   051F 74 23              1194 	mov	a,#_M2
   0521 C0 E0              1195 	push	acc
   0523 74 00              1196 	mov	a,#(_M2 >> 8)
   0525 C0 E0              1197 	push	acc
   0527 74 40              1198 	mov	a,#0x40
   0529 C0 E0              1199 	push	acc
   052B 90 00 1B           1200 	mov	dptr,#_M1
   052E 75 F0 40           1201 	mov	b,#0x40
   0531 12 01 D6           1202 	lcall	_MAT_SSDnum_Show
   0534 E5 81              1203 	mov	a,sp
   0536 24 F9              1204 	add	a,#0xf9
   0538 F5 81              1205 	mov	sp,a
   053A 80 D8              1206 	sjmp	00102$
                           1207 	.area CSEG    (CODE)
                           1208 	.area CONST   (CODE)
                           1209 	.area XINIT   (CODE)
                           1210 	.area CABS    (ABS,CODE)
