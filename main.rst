                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.1 #6083 (Dec 17 2010) (MINGW32)
                              4 ; This file was generated Fri Jan 21 19:14:08 2022
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _T0_isr
                             14 	.globl _InitGame
                             15 	.globl _delay_ms
                             16 	.globl _Single_ReadI2C
                             17 	.globl _Single_WriteI2C
                             18 	.globl _I2C_RecvByte
                             19 	.globl _I2C_SendByte
                             20 	.globl _I2C_RecvACK
                             21 	.globl _I2C_SendACK
                             22 	.globl _TF2
                             23 	.globl _EXF2
                             24 	.globl _RCLK
                             25 	.globl _TCLK
                             26 	.globl _EXEN2
                             27 	.globl _TR2
                             28 	.globl _C_T2
                             29 	.globl _CP_RL2
                             30 	.globl _T2CON_7
                             31 	.globl _T2CON_6
                             32 	.globl _T2CON_5
                             33 	.globl _T2CON_4
                             34 	.globl _T2CON_3
                             35 	.globl _T2CON_2
                             36 	.globl _T2CON_1
                             37 	.globl _T2CON_0
                             38 	.globl _PT2
                             39 	.globl _ET2
                             40 	.globl _CY
                             41 	.globl _AC
                             42 	.globl _F0
                             43 	.globl _RS1
                             44 	.globl _RS0
                             45 	.globl _OV
                             46 	.globl _F1
                             47 	.globl _P
                             48 	.globl _PS
                             49 	.globl _PT1
                             50 	.globl _PX1
                             51 	.globl _PT0
                             52 	.globl _PX0
                             53 	.globl _RD
                             54 	.globl _WR
                             55 	.globl _T1
                             56 	.globl _T0
                             57 	.globl _INT1
                             58 	.globl _INT0
                             59 	.globl _TXD
                             60 	.globl _RXD
                             61 	.globl _P3_7
                             62 	.globl _P3_6
                             63 	.globl _P3_5
                             64 	.globl _P3_4
                             65 	.globl _P3_3
                             66 	.globl _P3_2
                             67 	.globl _P3_1
                             68 	.globl _P3_0
                             69 	.globl _EA
                             70 	.globl _ES
                             71 	.globl _ET1
                             72 	.globl _EX1
                             73 	.globl _ET0
                             74 	.globl _EX0
                             75 	.globl _P2_7
                             76 	.globl _P2_6
                             77 	.globl _P2_5
                             78 	.globl _P2_4
                             79 	.globl _P2_3
                             80 	.globl _P2_2
                             81 	.globl _P2_1
                             82 	.globl _P2_0
                             83 	.globl _SM0
                             84 	.globl _SM1
                             85 	.globl _SM2
                             86 	.globl _REN
                             87 	.globl _TB8
                             88 	.globl _RB8
                             89 	.globl _TI
                             90 	.globl _RI
                             91 	.globl _P1_7
                             92 	.globl _P1_6
                             93 	.globl _P1_5
                             94 	.globl _P1_4
                             95 	.globl _P1_3
                             96 	.globl _P1_2
                             97 	.globl _P1_1
                             98 	.globl _P1_0
                             99 	.globl _TF1
                            100 	.globl _TR1
                            101 	.globl _TF0
                            102 	.globl _TR0
                            103 	.globl _IE1
                            104 	.globl _IT1
                            105 	.globl _IE0
                            106 	.globl _IT0
                            107 	.globl _P0_7
                            108 	.globl _P0_6
                            109 	.globl _P0_5
                            110 	.globl _P0_4
                            111 	.globl _P0_3
                            112 	.globl _P0_2
                            113 	.globl _P0_1
                            114 	.globl _P0_0
                            115 	.globl _TH2
                            116 	.globl _TL2
                            117 	.globl _RCAP2H
                            118 	.globl _RCAP2L
                            119 	.globl _T2CON
                            120 	.globl _B
                            121 	.globl _ACC
                            122 	.globl _PSW
                            123 	.globl _IP
                            124 	.globl _P3
                            125 	.globl _IE
                            126 	.globl _P2
                            127 	.globl _SBUF
                            128 	.globl _SCON
                            129 	.globl _P1
                            130 	.globl _TH1
                            131 	.globl _TH0
                            132 	.globl _TL1
                            133 	.globl _TL0
                            134 	.globl _TMOD
                            135 	.globl _TCON
                            136 	.globl _PCON
                            137 	.globl _DPH
                            138 	.globl _DPL
                            139 	.globl _SP
                            140 	.globl _P0
                            141 	.globl _s
                            142 	.globl _ms
                            143 	.globl _M2
                            144 	.globl _M1
                            145 	.globl _CUR_M
                            146 	.globl _ENTER
                            147 	.globl _PASSWORD
                            148 	.globl _Hall_Hold
                            149 	.globl _Hall_Pre
                            150 	.globl _preState
                            151 	.globl _State
                            152 	.globl _pb1cnt
                            153 	.globl _depb1
                            154 	.globl _update
                            155 	.globl _flash
                            156 	.globl _ball_y
                            157 	.globl _ball_x
                            158 	.globl _ball_m
                            159 	.globl _SSD_CODE
                            160 	.globl _i2c_package
                            161 	.globl _gyro_data
                            162 	.globl _accel_data
                            163 	.globl _Mmode
                            164 	.globl _Gscale
                            165 	.globl _Ascale
                            166 	.globl _I2C_Start
                            167 	.globl _I2C_Stop
                            168 	.globl _delay_i2c
                            169 	.globl _MPU6050_INIT
                            170 	.globl _writeByte
                            171 	.globl _readByte
                            172 	.globl _readMPU6050_AccelData
                            173 	.globl _readMPU6050_GyroData
                            174 	.globl _resetMPU6050
                            175 	.globl _BitExtract
                            176 	.globl _SerialDIN
                            177 	.globl _MAT_SSD_Show
                            178 	.globl _MAT_SSDnum_Show
                            179 	.globl _MAT_SSD_INIT
                            180 ;--------------------------------------------------------
                            181 ; special function registers
                            182 ;--------------------------------------------------------
                            183 	.area RSEG    (ABS,DATA)
   0000                     184 	.org 0x0000
                    0080    185 _P0	=	0x0080
                    0081    186 _SP	=	0x0081
                    0082    187 _DPL	=	0x0082
                    0083    188 _DPH	=	0x0083
                    0087    189 _PCON	=	0x0087
                    0088    190 _TCON	=	0x0088
                    0089    191 _TMOD	=	0x0089
                    008A    192 _TL0	=	0x008a
                    008B    193 _TL1	=	0x008b
                    008C    194 _TH0	=	0x008c
                    008D    195 _TH1	=	0x008d
                    0090    196 _P1	=	0x0090
                    0098    197 _SCON	=	0x0098
                    0099    198 _SBUF	=	0x0099
                    00A0    199 _P2	=	0x00a0
                    00A8    200 _IE	=	0x00a8
                    00B0    201 _P3	=	0x00b0
                    00B8    202 _IP	=	0x00b8
                    00D0    203 _PSW	=	0x00d0
                    00E0    204 _ACC	=	0x00e0
                    00F0    205 _B	=	0x00f0
                    00C8    206 _T2CON	=	0x00c8
                    00CA    207 _RCAP2L	=	0x00ca
                    00CB    208 _RCAP2H	=	0x00cb
                    00CC    209 _TL2	=	0x00cc
                    00CD    210 _TH2	=	0x00cd
                            211 ;--------------------------------------------------------
                            212 ; special function bits
                            213 ;--------------------------------------------------------
                            214 	.area RSEG    (ABS,DATA)
   0000                     215 	.org 0x0000
                    0080    216 _P0_0	=	0x0080
                    0081    217 _P0_1	=	0x0081
                    0082    218 _P0_2	=	0x0082
                    0083    219 _P0_3	=	0x0083
                    0084    220 _P0_4	=	0x0084
                    0085    221 _P0_5	=	0x0085
                    0086    222 _P0_6	=	0x0086
                    0087    223 _P0_7	=	0x0087
                    0088    224 _IT0	=	0x0088
                    0089    225 _IE0	=	0x0089
                    008A    226 _IT1	=	0x008a
                    008B    227 _IE1	=	0x008b
                    008C    228 _TR0	=	0x008c
                    008D    229 _TF0	=	0x008d
                    008E    230 _TR1	=	0x008e
                    008F    231 _TF1	=	0x008f
                    0090    232 _P1_0	=	0x0090
                    0091    233 _P1_1	=	0x0091
                    0092    234 _P1_2	=	0x0092
                    0093    235 _P1_3	=	0x0093
                    0094    236 _P1_4	=	0x0094
                    0095    237 _P1_5	=	0x0095
                    0096    238 _P1_6	=	0x0096
                    0097    239 _P1_7	=	0x0097
                    0098    240 _RI	=	0x0098
                    0099    241 _TI	=	0x0099
                    009A    242 _RB8	=	0x009a
                    009B    243 _TB8	=	0x009b
                    009C    244 _REN	=	0x009c
                    009D    245 _SM2	=	0x009d
                    009E    246 _SM1	=	0x009e
                    009F    247 _SM0	=	0x009f
                    00A0    248 _P2_0	=	0x00a0
                    00A1    249 _P2_1	=	0x00a1
                    00A2    250 _P2_2	=	0x00a2
                    00A3    251 _P2_3	=	0x00a3
                    00A4    252 _P2_4	=	0x00a4
                    00A5    253 _P2_5	=	0x00a5
                    00A6    254 _P2_6	=	0x00a6
                    00A7    255 _P2_7	=	0x00a7
                    00A8    256 _EX0	=	0x00a8
                    00A9    257 _ET0	=	0x00a9
                    00AA    258 _EX1	=	0x00aa
                    00AB    259 _ET1	=	0x00ab
                    00AC    260 _ES	=	0x00ac
                    00AF    261 _EA	=	0x00af
                    00B0    262 _P3_0	=	0x00b0
                    00B1    263 _P3_1	=	0x00b1
                    00B2    264 _P3_2	=	0x00b2
                    00B3    265 _P3_3	=	0x00b3
                    00B4    266 _P3_4	=	0x00b4
                    00B5    267 _P3_5	=	0x00b5
                    00B6    268 _P3_6	=	0x00b6
                    00B7    269 _P3_7	=	0x00b7
                    00B0    270 _RXD	=	0x00b0
                    00B1    271 _TXD	=	0x00b1
                    00B2    272 _INT0	=	0x00b2
                    00B3    273 _INT1	=	0x00b3
                    00B4    274 _T0	=	0x00b4
                    00B5    275 _T1	=	0x00b5
                    00B6    276 _WR	=	0x00b6
                    00B7    277 _RD	=	0x00b7
                    00B8    278 _PX0	=	0x00b8
                    00B9    279 _PT0	=	0x00b9
                    00BA    280 _PX1	=	0x00ba
                    00BB    281 _PT1	=	0x00bb
                    00BC    282 _PS	=	0x00bc
                    00D0    283 _P	=	0x00d0
                    00D1    284 _F1	=	0x00d1
                    00D2    285 _OV	=	0x00d2
                    00D3    286 _RS0	=	0x00d3
                    00D4    287 _RS1	=	0x00d4
                    00D5    288 _F0	=	0x00d5
                    00D6    289 _AC	=	0x00d6
                    00D7    290 _CY	=	0x00d7
                    00AD    291 _ET2	=	0x00ad
                    00BD    292 _PT2	=	0x00bd
                    00C8    293 _T2CON_0	=	0x00c8
                    00C9    294 _T2CON_1	=	0x00c9
                    00CA    295 _T2CON_2	=	0x00ca
                    00CB    296 _T2CON_3	=	0x00cb
                    00CC    297 _T2CON_4	=	0x00cc
                    00CD    298 _T2CON_5	=	0x00cd
                    00CE    299 _T2CON_6	=	0x00ce
                    00CF    300 _T2CON_7	=	0x00cf
                    00C8    301 _CP_RL2	=	0x00c8
                    00C9    302 _C_T2	=	0x00c9
                    00CA    303 _TR2	=	0x00ca
                    00CB    304 _EXEN2	=	0x00cb
                    00CC    305 _TCLK	=	0x00cc
                    00CD    306 _RCLK	=	0x00cd
                    00CE    307 _EXF2	=	0x00ce
                    00CF    308 _TF2	=	0x00cf
                            309 ;--------------------------------------------------------
                            310 ; overlayable register banks
                            311 ;--------------------------------------------------------
                            312 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     313 	.ds 8
                            314 ;--------------------------------------------------------
                            315 ; overlayable bit register bank
                            316 ;--------------------------------------------------------
                            317 	.area BIT_BANK	(REL,OVR,DATA)
   0020                     318 bits:
   0020                     319 	.ds 1
                    8000    320 	b0 = bits[0]
                    8100    321 	b1 = bits[1]
                    8200    322 	b2 = bits[2]
                    8300    323 	b3 = bits[3]
                    8400    324 	b4 = bits[4]
                    8500    325 	b5 = bits[5]
                    8600    326 	b6 = bits[6]
                    8700    327 	b7 = bits[7]
                            328 ;--------------------------------------------------------
                            329 ; internal ram data
                            330 ;--------------------------------------------------------
                            331 	.area DSEG    (DATA)
   0021                     332 _Ascale::
   0021                     333 	.ds 1
   0022                     334 _Gscale::
   0022                     335 	.ds 1
   0023                     336 _Mmode::
   0023                     337 	.ds 1
   0024                     338 _accel_data::
   0024                     339 	.ds 6
   002A                     340 _gyro_data::
   002A                     341 	.ds 6
   0030                     342 _i2c_package::
   0030                     343 	.ds 6
   0036                     344 _SSD_CODE::
   0036                     345 	.ds 16
   0046                     346 _ball_m::
   0046                     347 	.ds 2
   0048                     348 _ball_x::
   0048                     349 	.ds 2
   004A                     350 _ball_y::
   004A                     351 	.ds 2
   004C                     352 _flash::
   004C                     353 	.ds 1
   004D                     354 _update::
   004D                     355 	.ds 1
   004E                     356 _depb1::
   004E                     357 	.ds 1
   004F                     358 _pb1cnt::
   004F                     359 	.ds 1
   0050                     360 _State::
   0050                     361 	.ds 1
   0051                     362 _preState::
   0051                     363 	.ds 1
   0052                     364 _Hall_Pre::
   0052                     365 	.ds 1
   0053                     366 _Hall_Hold::
   0053                     367 	.ds 1
   0054                     368 _PASSWORD::
   0054                     369 	.ds 4
   0058                     370 _ENTER::
   0058                     371 	.ds 4
   005C                     372 _CUR_M::
   005C                     373 	.ds 8
   0064                     374 _M1::
   0064                     375 	.ds 8
   006C                     376 _M2::
   006C                     377 	.ds 8
   0074                     378 _ms::
   0074                     379 	.ds 4
   0078                     380 _s::
   0078                     381 	.ds 4
                            382 ;--------------------------------------------------------
                            383 ; overlayable items in internal ram 
                            384 ;--------------------------------------------------------
                            385 	.area OSEG    (OVR,DATA)
                            386 ;--------------------------------------------------------
                            387 ; Stack segment in internal ram 
                            388 ;--------------------------------------------------------
                            389 	.area	SSEG	(DATA)
   007C                     390 __start__stack:
   007C                     391 	.ds	1
                            392 
                            393 ;--------------------------------------------------------
                            394 ; indirectly addressable internal ram data
                            395 ;--------------------------------------------------------
                            396 	.area ISEG    (DATA)
                            397 ;--------------------------------------------------------
                            398 ; absolute internal ram data
                            399 ;--------------------------------------------------------
                            400 	.area IABS    (ABS,DATA)
                            401 	.area IABS    (ABS,DATA)
                            402 ;--------------------------------------------------------
                            403 ; bit data
                            404 ;--------------------------------------------------------
                            405 	.area BSEG    (BIT)
                            406 ;--------------------------------------------------------
                            407 ; paged external ram data
                            408 ;--------------------------------------------------------
                            409 	.area PSEG    (PAG,XDATA)
                            410 ;--------------------------------------------------------
                            411 ; external ram data
                            412 ;--------------------------------------------------------
                            413 	.area XSEG    (XDATA)
                            414 ;--------------------------------------------------------
                            415 ; absolute external ram data
                            416 ;--------------------------------------------------------
                            417 	.area XABS    (ABS,XDATA)
                            418 ;--------------------------------------------------------
                            419 ; external initialized ram data
                            420 ;--------------------------------------------------------
                            421 	.area XISEG   (XDATA)
                            422 	.area HOME    (CODE)
                            423 	.area GSINIT0 (CODE)
                            424 	.area GSINIT1 (CODE)
                            425 	.area GSINIT2 (CODE)
                            426 	.area GSINIT3 (CODE)
                            427 	.area GSINIT4 (CODE)
                            428 	.area GSINIT5 (CODE)
                            429 	.area GSINIT  (CODE)
                            430 	.area GSFINAL (CODE)
                            431 	.area CSEG    (CODE)
                            432 ;--------------------------------------------------------
                            433 ; interrupt vector 
                            434 ;--------------------------------------------------------
                            435 	.area HOME    (CODE)
   0000                     436 __interrupt_vect:
   0000 02 00 13            437 	ljmp	__sdcc_gsinit_startup
   0003 32                  438 	reti
   0004                     439 	.ds	7
   000B 02 08 80            440 	ljmp	_T0_isr
                            441 ;--------------------------------------------------------
                            442 ; global & static initialisations
                            443 ;--------------------------------------------------------
                            444 	.area HOME    (CODE)
                            445 	.area GSINIT  (CODE)
                            446 	.area GSFINAL (CODE)
                            447 	.area GSINIT  (CODE)
                            448 	.globl __sdcc_gsinit_startup
                            449 	.globl __sdcc_program_startup
                            450 	.globl __start__stack
                            451 	.globl __mcs51_genXINIT
                            452 	.globl __mcs51_genXRAMCLEAR
                            453 	.globl __mcs51_genRAMCLEAR
                            454 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:169: uint8_t Ascale = AFS_2G;     // AFS_2G, AFS_4G, AFS_8G, AFS_16G
   006C 75 21 00            455 	mov	_Ascale,#0x00
                            456 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:170: uint8_t Gscale = GFS_500DPS; // GFS_250DPS, GFS_500DPS, GFS_1000DPS, GFS_2000DPS
   006F 75 22 01            457 	mov	_Gscale,#0x01
                            458 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:171: uint8_t Mmode = 0x06;        // Either 8 Hz 0x02) or 100 Hz (0x06) magnetometer data ODR  
   0072 75 23 06            459 	mov	_Mmode,#0x06
                            460 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:173: int accel_data[3] = {0, 0, 0};  // Stores the 16-bit signed accelerometer sensor output
   0075 E4                  461 	clr	a
   0076 F5 24               462 	mov	(_accel_data + 0),a
   0078 F5 25               463 	mov	(_accel_data + 1),a
   007A E4                  464 	clr	a
   007B F5 26               465 	mov	((_accel_data + 0x0002) + 0),a
   007D F5 27               466 	mov	((_accel_data + 0x0002) + 1),a
   007F E4                  467 	clr	a
   0080 F5 28               468 	mov	((_accel_data + 0x0004) + 0),a
   0082 F5 29               469 	mov	((_accel_data + 0x0004) + 1),a
                            470 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:174: int gyro_data[3] = {0, 0, 0};   // Stores the 16-bit signed gyro sensor output
   0084 E4                  471 	clr	a
   0085 F5 2A               472 	mov	(_gyro_data + 0),a
   0087 F5 2B               473 	mov	(_gyro_data + 1),a
   0089 E4                  474 	clr	a
   008A F5 2C               475 	mov	((_gyro_data + 0x0002) + 0),a
   008C F5 2D               476 	mov	((_gyro_data + 0x0002) + 1),a
   008E E4                  477 	clr	a
   008F F5 2E               478 	mov	((_gyro_data + 0x0004) + 0),a
   0091 F5 2F               479 	mov	((_gyro_data + 0x0004) + 1),a
                            480 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:176: uint8_t i2c_package[6] = {0};
   0093 75 30 00            481 	mov	_i2c_package,#0x00
                            482 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:21: UC SSD_CODE[] = {
   0096 75 36 7E            483 	mov	_SSD_CODE,#0x7E
   0099 75 37 30            484 	mov	(_SSD_CODE + 0x0001),#0x30
   009C 75 38 6D            485 	mov	(_SSD_CODE + 0x0002),#0x6D
   009F 75 39 79            486 	mov	(_SSD_CODE + 0x0003),#0x79
   00A2 75 3A 33            487 	mov	(_SSD_CODE + 0x0004),#0x33
   00A5 75 3B 5B            488 	mov	(_SSD_CODE + 0x0005),#0x5B
   00A8 75 3C 5F            489 	mov	(_SSD_CODE + 0x0006),#0x5F
   00AB 75 3D 70            490 	mov	(_SSD_CODE + 0x0007),#0x70
   00AE 75 3E 7F            491 	mov	(_SSD_CODE + 0x0008),#0x7F
   00B1 75 3F 7B            492 	mov	(_SSD_CODE + 0x0009),#0x7B
   00B4 75 40 77            493 	mov	(_SSD_CODE + 0x000a),#0x77
   00B7 75 41 1F            494 	mov	(_SSD_CODE + 0x000b),#0x1F
   00BA 75 42 4E            495 	mov	(_SSD_CODE + 0x000c),#0x4E
   00BD 75 43 3D            496 	mov	(_SSD_CODE + 0x000d),#0x3D
   00C0 75 44 4F            497 	mov	(_SSD_CODE + 0x000e),#0x4F
   00C3 75 45 47            498 	mov	(_SSD_CODE + 0x000f),#0x47
                            499 ;	E:\GitHub\8051finalMIDE\main.c:14: UC flash = 0, update = 0, depb1 = 0, pb1cnt = 0, State = 0, preState = 0, Hall_Pre = 0, Hall_Hold = 0;
   00C6 75 4C 00            500 	mov	_flash,#0x00
                            501 ;	E:\GitHub\8051finalMIDE\main.c:14: UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
   00C9 75 4D 00            502 	mov	_update,#0x00
                            503 ;	E:\GitHub\8051finalMIDE\main.c:14: UC flash = 0, update = 0, depb1 = 0, pb1cnt = 0, State = 0, preState = 0, Hall_Pre = 0, Hall_Hold = 0;
   00CC 75 4E 00            504 	mov	_depb1,#0x00
                            505 ;	E:\GitHub\8051finalMIDE\main.c:14: UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
   00CF 75 4F 00            506 	mov	_pb1cnt,#0x00
                            507 ;	E:\GitHub\8051finalMIDE\main.c:14: UC flash = 0, update = 0, depb1 = 0, pb1cnt = 0, State = 0, preState = 0, Hall_Pre = 0, Hall_Hold = 0;
   00D2 75 50 00            508 	mov	_State,#0x00
                            509 ;	E:\GitHub\8051finalMIDE\main.c:14: UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
   00D5 75 51 00            510 	mov	_preState,#0x00
                            511 ;	E:\GitHub\8051finalMIDE\main.c:14: UC flash = 0, update = 0, depb1 = 0, pb1cnt = 0, State = 0, preState = 0, Hall_Pre = 0, Hall_Hold = 0;
   00D8 75 52 00            512 	mov	_Hall_Pre,#0x00
                            513 ;	E:\GitHub\8051finalMIDE\main.c:14: UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
   00DB 75 53 00            514 	mov	_Hall_Hold,#0x00
                            515 ;	E:\GitHub\8051finalMIDE\main.c:15: // UC BottomLeft = 0, preBottomLeft = 0, BottomRight = 0, preBottomRight = 0;
   00DE 75 54 00            516 	mov	_PASSWORD,#0x00
   00E1 75 55 00            517 	mov	(_PASSWORD + 0x0001),#0x00
   00E4 75 56 00            518 	mov	(_PASSWORD + 0x0002),#0x00
   00E7 75 57 00            519 	mov	(_PASSWORD + 0x0003),#0x00
                            520 ;	E:\GitHub\8051finalMIDE\main.c:15: UC PASSWORD[4] = {0, 0, 0, 0}, ENTER[4] = {0, 0, 0, 0};
   00EA 75 58 00            521 	mov	_ENTER,#0x00
   00ED 75 59 00            522 	mov	(_ENTER + 0x0001),#0x00
   00F0 75 5A 00            523 	mov	(_ENTER + 0x0002),#0x00
   00F3 75 5B 00            524 	mov	(_ENTER + 0x0003),#0x00
                            525 ;	E:\GitHub\8051finalMIDE\main.c:19: UC CUR_M[8] = {0}, M1[8] = {
   00F6 75 5C 00            526 	mov	_CUR_M,#0x00
                            527 ;	E:\GitHub\8051finalMIDE\main.c:19: 0x4a,
   00F9 75 64 4A            528 	mov	_M1,#0x4A
   00FC 75 65 6A            529 	mov	(_M1 + 0x0001),#0x6A
   00FF 75 66 08            530 	mov	(_M1 + 0x0002),#0x08
   0102 75 67 DA            531 	mov	(_M1 + 0x0003),#0xDA
   0105 75 68 0A            532 	mov	(_M1 + 0x0004),#0x0A
   0108 75 69 BA            533 	mov	(_M1 + 0x0005),#0xBA
   010B 75 6A 0A            534 	mov	(_M1 + 0x0006),#0x0A
   010E 75 6B 22            535 	mov	(_M1 + 0x0007),#0x22
                            536 ;	E:\GitHub\8051finalMIDE\main.c:28: }, M2[8] = {
   0111 75 6C 14            537 	mov	_M2,#0x14
   0114 75 6D D4            538 	mov	(_M2 + 0x0001),#0xD4
   0117 75 6E 14            539 	mov	(_M2 + 0x0002),#0x14
   011A 75 6F 70            540 	mov	(_M2 + 0x0003),#0x70
   011D 75 70 15            541 	mov	(_M2 + 0x0004),#0x15
   0120 75 71 D4            542 	mov	(_M2 + 0x0005),#0xD4
   0123 75 72 06            543 	mov	(_M2 + 0x0006),#0x06
   0126 75 73 14            544 	mov	(_M2 + 0x0007),#0x14
                            545 ;	E:\GitHub\8051finalMIDE\main.c:42: long ms = 0, s = 0;
   0129 E4                  546 	clr	a
   012A F5 74               547 	mov	_ms,a
   012C F5 75               548 	mov	(_ms + 1),a
   012E F5 76               549 	mov	(_ms + 2),a
   0130 F5 77               550 	mov	(_ms + 3),a
                            551 ;	E:\GitHub\8051finalMIDE\main.c:42: 
   0132 E4                  552 	clr	a
   0133 F5 78               553 	mov	_s,a
   0135 F5 79               554 	mov	(_s + 1),a
   0137 F5 7A               555 	mov	(_s + 2),a
   0139 F5 7B               556 	mov	(_s + 3),a
                            557 	.area GSFINAL (CODE)
   013B 02 00 0E            558 	ljmp	__sdcc_program_startup
                            559 ;--------------------------------------------------------
                            560 ; Home
                            561 ;--------------------------------------------------------
                            562 	.area HOME    (CODE)
                            563 	.area HOME    (CODE)
   000E                     564 __sdcc_program_startup:
   000E 12 09 90            565 	lcall	_main
                            566 ;	return from main will lock up
   0011 80 FE               567 	sjmp .
                            568 ;--------------------------------------------------------
                            569 ; code
                            570 ;--------------------------------------------------------
                            571 	.area CSEG    (CODE)
                            572 ;------------------------------------------------------------
                            573 ;Allocation info for local variables in function 'I2C_Start'
                            574 ;------------------------------------------------------------
                            575 ;------------------------------------------------------------
                            576 ;	E:\GitHub\8051finalMIDE\/i2c.h:13: void I2C_Start(void)
                            577 ;	-----------------------------------------
                            578 ;	 function I2C_Start
                            579 ;	-----------------------------------------
   013E                     580 _I2C_Start:
                    0002    581 	ar2 = 0x02
                    0003    582 	ar3 = 0x03
                    0004    583 	ar4 = 0x04
                    0005    584 	ar5 = 0x05
                    0006    585 	ar6 = 0x06
                    0007    586 	ar7 = 0x07
                    0000    587 	ar0 = 0x00
                    0001    588 	ar1 = 0x01
                            589 ;	E:\GitHub\8051finalMIDE\/i2c.h:15: SDA = 0;                    
   013E C2 81               590 	clr	_P0_1
                            591 ;	E:\GitHub\8051finalMIDE\/i2c.h:16: delay_i2c();                  
   0140 12 02 59            592 	lcall	_delay_i2c
                            593 ;	E:\GitHub\8051finalMIDE\/i2c.h:17: SCL = 0;                    
   0143 C2 80               594 	clr	_P0_0
                            595 ;	E:\GitHub\8051finalMIDE\/i2c.h:18: delay_i2c();                  
   0145 02 02 59            596 	ljmp	_delay_i2c
                            597 ;------------------------------------------------------------
                            598 ;Allocation info for local variables in function 'I2C_Stop'
                            599 ;------------------------------------------------------------
                            600 ;------------------------------------------------------------
                            601 ;	E:\GitHub\8051finalMIDE\/i2c.h:23: void I2C_Stop(void)
                            602 ;	-----------------------------------------
                            603 ;	 function I2C_Stop
                            604 ;	-----------------------------------------
   0148                     605 _I2C_Stop:
                            606 ;	E:\GitHub\8051finalMIDE\/i2c.h:25: SDA = 0;                    
   0148 C2 81               607 	clr	_P0_1
                            608 ;	E:\GitHub\8051finalMIDE\/i2c.h:26: delay_i2c();                  
   014A 12 02 59            609 	lcall	_delay_i2c
                            610 ;	E:\GitHub\8051finalMIDE\/i2c.h:27: SCL = 1;                    
   014D D2 80               611 	setb	_P0_0
                            612 ;	E:\GitHub\8051finalMIDE\/i2c.h:28: delay_i2c();                  
   014F 12 02 59            613 	lcall	_delay_i2c
                            614 ;	E:\GitHub\8051finalMIDE\/i2c.h:29: SDA = 1;                    
   0152 D2 81               615 	setb	_P0_1
                            616 ;	E:\GitHub\8051finalMIDE\/i2c.h:30: delay_i2c();                  
   0154 02 02 59            617 	ljmp	_delay_i2c
                            618 ;------------------------------------------------------------
                            619 ;Allocation info for local variables in function 'I2C_SendACK'
                            620 ;------------------------------------------------------------
                            621 ;ack                       Allocated to registers 
                            622 ;------------------------------------------------------------
                            623 ;	E:\GitHub\8051finalMIDE\/i2c.h:35: void I2C_SendACK(__bit ack)
                            624 ;	-----------------------------------------
                            625 ;	 function I2C_SendACK
                            626 ;	-----------------------------------------
   0157                     627 _I2C_SendACK:
   0157 A2 00               628 	mov	c,b0
   0159 92 81               629 	mov	_P0_1,c
                            630 ;	E:\GitHub\8051finalMIDE\/i2c.h:38: delay_i2c();                  
   015B 12 02 59            631 	lcall	_delay_i2c
                            632 ;	E:\GitHub\8051finalMIDE\/i2c.h:39: SCL = 1;                    
   015E D2 80               633 	setb	_P0_0
                            634 ;	E:\GitHub\8051finalMIDE\/i2c.h:40: delay_i2c();                  
   0160 12 02 59            635 	lcall	_delay_i2c
                            636 ;	E:\GitHub\8051finalMIDE\/i2c.h:41: SCL = 0;                    
   0163 C2 80               637 	clr	_P0_0
                            638 ;	E:\GitHub\8051finalMIDE\/i2c.h:42: delay_i2c();                  
   0165 02 02 59            639 	ljmp	_delay_i2c
                            640 ;------------------------------------------------------------
                            641 ;Allocation info for local variables in function 'I2C_RecvACK'
                            642 ;------------------------------------------------------------
                            643 ;------------------------------------------------------------
                            644 ;	E:\GitHub\8051finalMIDE\/i2c.h:47: __sbit I2C_RecvACK()
                            645 ;	-----------------------------------------
                            646 ;	 function I2C_RecvACK
                            647 ;	-----------------------------------------
   0168                     648 _I2C_RecvACK:
                            649 ;	E:\GitHub\8051finalMIDE\/i2c.h:49: SCL = 1;                    
   0168 D2 80               650 	setb	_P0_0
                            651 ;	E:\GitHub\8051finalMIDE\/i2c.h:50: delay_i2c();                  
   016A 12 02 59            652 	lcall	_delay_i2c
                            653 ;	E:\GitHub\8051finalMIDE\/i2c.h:51: CY = SDA;                   
   016D A2 81               654 	mov	c,_P0_1
   016F 92 D7               655 	mov	_CY,c
                            656 ;	E:\GitHub\8051finalMIDE\/i2c.h:52: delay_i2c();                  
   0171 12 02 59            657 	lcall	_delay_i2c
                            658 ;	E:\GitHub\8051finalMIDE\/i2c.h:53: SCL = 0;                    
   0174 C2 80               659 	clr	_P0_0
                            660 ;	E:\GitHub\8051finalMIDE\/i2c.h:54: delay_i2c();                  
   0176 12 02 59            661 	lcall	_delay_i2c
                            662 ;	E:\GitHub\8051finalMIDE\/i2c.h:55: return CY;
   0179 A2 D7               663 	mov	c,_CY
   017B 22                  664 	ret
                            665 ;------------------------------------------------------------
                            666 ;Allocation info for local variables in function 'I2C_SendByte'
                            667 ;------------------------------------------------------------
                            668 ;dat                       Allocated to registers r2 
                            669 ;i                         Allocated to registers r3 
                            670 ;------------------------------------------------------------
                            671 ;	E:\GitHub\8051finalMIDE\/i2c.h:61: void I2C_SendByte(unsigned char dat)
                            672 ;	-----------------------------------------
                            673 ;	 function I2C_SendByte
                            674 ;	-----------------------------------------
   017C                     675 _I2C_SendByte:
   017C AA 82               676 	mov	r2,dpl
                            677 ;	E:\GitHub\8051finalMIDE\/i2c.h:64: for (i=0; i<8; i++)         
   017E 7B 00               678 	mov	r3,#0x00
   0180                     679 00104$:
   0180 BB 08 00            680 	cjne	r3,#0x08,00114$
   0183                     681 00114$:
   0183 50 25               682 	jnc	00107$
                            683 ;	E:\GitHub\8051finalMIDE\/i2c.h:66: if(dat & 0x80)
   0185 EA                  684 	mov	a,r2
   0186 30 E7 04            685 	jnb	acc.7,00102$
                            686 ;	E:\GitHub\8051finalMIDE\/i2c.h:67: SDA = 1;               
   0189 D2 81               687 	setb	_P0_1
   018B 80 02               688 	sjmp	00103$
   018D                     689 00102$:
                            690 ;	E:\GitHub\8051finalMIDE\/i2c.h:69: SDA = 0;               
   018D C2 81               691 	clr	_P0_1
   018F                     692 00103$:
                            693 ;	E:\GitHub\8051finalMIDE\/i2c.h:70: delay_i2c();                  
   018F C0 02               694 	push	ar2
   0191 C0 03               695 	push	ar3
   0193 12 02 59            696 	lcall	_delay_i2c
                            697 ;	E:\GitHub\8051finalMIDE\/i2c.h:71: SCL = 1;                
   0196 D2 80               698 	setb	_P0_0
                            699 ;	E:\GitHub\8051finalMIDE\/i2c.h:72: delay_i2c();                  
   0198 12 02 59            700 	lcall	_delay_i2c
                            701 ;	E:\GitHub\8051finalMIDE\/i2c.h:73: SCL = 0;                
   019B C2 80               702 	clr	_P0_0
                            703 ;	E:\GitHub\8051finalMIDE\/i2c.h:74: delay_i2c();                  
   019D 12 02 59            704 	lcall	_delay_i2c
   01A0 D0 03               705 	pop	ar3
   01A2 D0 02               706 	pop	ar2
                            707 ;	E:\GitHub\8051finalMIDE\/i2c.h:75: dat <<= 1;              
   01A4 EA                  708 	mov	a,r2
   01A5 2A                  709 	add	a,r2
   01A6 FA                  710 	mov	r2,a
                            711 ;	E:\GitHub\8051finalMIDE\/i2c.h:64: for (i=0; i<8; i++)         
   01A7 0B                  712 	inc	r3
   01A8 80 D6               713 	sjmp	00104$
   01AA                     714 00107$:
                            715 ;	E:\GitHub\8051finalMIDE\/i2c.h:77: I2C_RecvACK();
   01AA 02 01 68            716 	ljmp	_I2C_RecvACK
                            717 ;------------------------------------------------------------
                            718 ;Allocation info for local variables in function 'I2C_RecvByte'
                            719 ;------------------------------------------------------------
                            720 ;i                         Allocated to registers r3 
                            721 ;dat                       Allocated to registers r2 
                            722 ;------------------------------------------------------------
                            723 ;	E:\GitHub\8051finalMIDE\/i2c.h:82: unsigned char I2C_RecvByte()
                            724 ;	-----------------------------------------
                            725 ;	 function I2C_RecvByte
                            726 ;	-----------------------------------------
   01AD                     727 _I2C_RecvByte:
                            728 ;	E:\GitHub\8051finalMIDE\/i2c.h:85: unsigned char dat = 0;
   01AD 7A 00               729 	mov	r2,#0x00
                            730 ;	E:\GitHub\8051finalMIDE\/i2c.h:86: SDA = 1;                    
   01AF D2 81               731 	setb	_P0_1
                            732 ;	E:\GitHub\8051finalMIDE\/i2c.h:87: for (i=0; i<8; i++)         
   01B1 7B 00               733 	mov	r3,#0x00
   01B3                     734 00101$:
   01B3 BB 08 00            735 	cjne	r3,#0x08,00110$
   01B6                     736 00110$:
   01B6 50 29               737 	jnc	00104$
                            738 ;	E:\GitHub\8051finalMIDE\/i2c.h:89: dat <<= 1;
   01B8 EA                  739 	mov	a,r2
   01B9 2A                  740 	add	a,r2
   01BA FA                  741 	mov	r2,a
                            742 ;	E:\GitHub\8051finalMIDE\/i2c.h:90: SCL = 1;                
   01BB D2 80               743 	setb	_P0_0
                            744 ;	E:\GitHub\8051finalMIDE\/i2c.h:91: delay_i2c();                  
   01BD C0 02               745 	push	ar2
   01BF C0 03               746 	push	ar3
   01C1 12 02 59            747 	lcall	_delay_i2c
   01C4 D0 03               748 	pop	ar3
   01C6 D0 02               749 	pop	ar2
                            750 ;	E:\GitHub\8051finalMIDE\/i2c.h:92: dat |= SDA;             
   01C8 A2 81               751 	mov	c,_P0_1
   01CA E4                  752 	clr	a
   01CB 33                  753 	rlc	a
   01CC 42 02               754 	orl	ar2,a
                            755 ;	E:\GitHub\8051finalMIDE\/i2c.h:93: delay_i2c();                                
   01CE C0 02               756 	push	ar2
   01D0 C0 03               757 	push	ar3
   01D2 12 02 59            758 	lcall	_delay_i2c
                            759 ;	E:\GitHub\8051finalMIDE\/i2c.h:94: SCL = 0;                
   01D5 C2 80               760 	clr	_P0_0
                            761 ;	E:\GitHub\8051finalMIDE\/i2c.h:95: delay_i2c();                  
   01D7 12 02 59            762 	lcall	_delay_i2c
   01DA D0 03               763 	pop	ar3
   01DC D0 02               764 	pop	ar2
                            765 ;	E:\GitHub\8051finalMIDE\/i2c.h:87: for (i=0; i<8; i++)         
   01DE 0B                  766 	inc	r3
   01DF 80 D2               767 	sjmp	00101$
   01E1                     768 00104$:
                            769 ;	E:\GitHub\8051finalMIDE\/i2c.h:97: return dat;
   01E1 8A 82               770 	mov	dpl,r2
   01E3 22                  771 	ret
                            772 ;------------------------------------------------------------
                            773 ;Allocation info for local variables in function 'Single_WriteI2C'
                            774 ;------------------------------------------------------------
                            775 ;REG_Address               Allocated to stack - offset -3
                            776 ;REG_data                  Allocated to stack - offset -4
                            777 ;SlaveAddress              Allocated to registers r2 
                            778 ;------------------------------------------------------------
                            779 ;	E:\GitHub\8051finalMIDE\/i2c.h:102: void Single_WriteI2C(unsigned char SlaveAddress, unsigned char REG_Address,unsigned char REG_data)
                            780 ;	-----------------------------------------
                            781 ;	 function Single_WriteI2C
                            782 ;	-----------------------------------------
   01E4                     783 _Single_WriteI2C:
   01E4 C0 08               784 	push	_bp
   01E6 85 81 08            785 	mov	_bp,sp
   01E9 AA 82               786 	mov	r2,dpl
                            787 ;	E:\GitHub\8051finalMIDE\/i2c.h:104: I2C_Start();                  
   01EB C0 02               788 	push	ar2
   01ED 12 01 3E            789 	lcall	_I2C_Start
   01F0 D0 02               790 	pop	ar2
                            791 ;	E:\GitHub\8051finalMIDE\/i2c.h:105: I2C_SendByte(SlaveAddress);   
   01F2 8A 82               792 	mov	dpl,r2
   01F4 12 01 7C            793 	lcall	_I2C_SendByte
                            794 ;	E:\GitHub\8051finalMIDE\/i2c.h:106: I2C_SendByte(REG_Address);    
   01F7 E5 08               795 	mov	a,_bp
   01F9 24 FD               796 	add	a,#0xfd
   01FB F8                  797 	mov	r0,a
   01FC 86 82               798 	mov	dpl,@r0
   01FE 12 01 7C            799 	lcall	_I2C_SendByte
                            800 ;	E:\GitHub\8051finalMIDE\/i2c.h:107: I2C_SendByte(REG_data);       
   0201 E5 08               801 	mov	a,_bp
   0203 24 FC               802 	add	a,#0xfc
   0205 F8                  803 	mov	r0,a
   0206 86 82               804 	mov	dpl,@r0
   0208 12 01 7C            805 	lcall	_I2C_SendByte
                            806 ;	E:\GitHub\8051finalMIDE\/i2c.h:108: I2C_Stop();                   
   020B 12 01 48            807 	lcall	_I2C_Stop
   020E D0 08               808 	pop	_bp
   0210 22                  809 	ret
                            810 ;------------------------------------------------------------
                            811 ;Allocation info for local variables in function 'Single_ReadI2C'
                            812 ;------------------------------------------------------------
                            813 ;REG_Address               Allocated to stack - offset -3
                            814 ;SlaveAddress              Allocated to registers r2 
                            815 ;REG_data                  Allocated to registers r2 
                            816 ;------------------------------------------------------------
                            817 ;	E:\GitHub\8051finalMIDE\/i2c.h:113: unsigned char Single_ReadI2C(unsigned char SlaveAddress, unsigned char REG_Address)
                            818 ;	-----------------------------------------
                            819 ;	 function Single_ReadI2C
                            820 ;	-----------------------------------------
   0211                     821 _Single_ReadI2C:
   0211 C0 08               822 	push	_bp
   0213 85 81 08            823 	mov	_bp,sp
   0216 AA 82               824 	mov	r2,dpl
                            825 ;	E:\GitHub\8051finalMIDE\/i2c.h:116: I2C_Start();                   
   0218 C0 02               826 	push	ar2
   021A 12 01 3E            827 	lcall	_I2C_Start
   021D D0 02               828 	pop	ar2
                            829 ;	E:\GitHub\8051finalMIDE\/i2c.h:117: I2C_SendByte(SlaveAddress);    
   021F 8A 82               830 	mov	dpl,r2
   0221 C0 02               831 	push	ar2
   0223 12 01 7C            832 	lcall	_I2C_SendByte
                            833 ;	E:\GitHub\8051finalMIDE\/i2c.h:118: I2C_SendByte(REG_Address);       
   0226 E5 08               834 	mov	a,_bp
   0228 24 FD               835 	add	a,#0xfd
   022A F8                  836 	mov	r0,a
   022B 86 82               837 	mov	dpl,@r0
   022D 12 01 7C            838 	lcall	_I2C_SendByte
                            839 ;	E:\GitHub\8051finalMIDE\/i2c.h:119: I2C_Stop();                    
   0230 12 01 48            840 	lcall	_I2C_Stop
                            841 ;	E:\GitHub\8051finalMIDE\/i2c.h:121: I2C_Start();                   
   0233 12 01 3E            842 	lcall	_I2C_Start
   0236 D0 02               843 	pop	ar2
                            844 ;	E:\GitHub\8051finalMIDE\/i2c.h:122: I2C_SendByte(SlaveAddress|0x01);  
   0238 74 01               845 	mov	a,#0x01
   023A 4A                  846 	orl	a,r2
   023B F5 82               847 	mov	dpl,a
   023D 12 01 7C            848 	lcall	_I2C_SendByte
                            849 ;	E:\GitHub\8051finalMIDE\/i2c.h:123: REG_data=I2C_RecvByte();       
   0240 12 01 AD            850 	lcall	_I2C_RecvByte
   0243 AA 82               851 	mov	r2,dpl
                            852 ;	E:\GitHub\8051finalMIDE\/i2c.h:124: I2C_SendACK(1);                
   0245 D2 F0               853 	setb	b[0]
   0247 C0 02               854 	push	ar2
   0249 85 F0 20            855 	mov	bits,b
   024C 12 01 57            856 	lcall	_I2C_SendACK
                            857 ;	E:\GitHub\8051finalMIDE\/i2c.h:125: I2C_Stop();                    
   024F 12 01 48            858 	lcall	_I2C_Stop
   0252 D0 02               859 	pop	ar2
                            860 ;	E:\GitHub\8051finalMIDE\/i2c.h:126: return REG_data;
   0254 8A 82               861 	mov	dpl,r2
   0256 D0 08               862 	pop	_bp
   0258 22                  863 	ret
                            864 ;------------------------------------------------------------
                            865 ;Allocation info for local variables in function 'delay_i2c'
                            866 ;------------------------------------------------------------
                            867 ;i                         Allocated to registers r2 
                            868 ;------------------------------------------------------------
                            869 ;	E:\GitHub\8051finalMIDE\/i2c.h:131: void delay_i2c(void)
                            870 ;	-----------------------------------------
                            871 ;	 function delay_i2c
                            872 ;	-----------------------------------------
   0259                     873 _delay_i2c:
                            874 ;	E:\GitHub\8051finalMIDE\/i2c.h:134: for(i = 0; i < 5; i ++);    
   0259 7A 05               875 	mov	r2,#0x05
   025B                     876 00103$:
   025B DA FE               877 	djnz	r2,00103$
   025D 22                  878 	ret
                            879 ;------------------------------------------------------------
                            880 ;Allocation info for local variables in function 'delay_ms'
                            881 ;------------------------------------------------------------
                            882 ;input_ms                  Allocated to registers r2 r3 
                            883 ;cnt1                      Allocated to registers r5 r6 
                            884 ;cnt2                      Allocated to registers r4 
                            885 ;------------------------------------------------------------
                            886 ;	E:\GitHub\8051finalMIDE\/delay.h:8: void delay_ms(unsigned int input_ms)
                            887 ;	-----------------------------------------
                            888 ;	 function delay_ms
                            889 ;	-----------------------------------------
   025E                     890 _delay_ms:
   025E AA 82               891 	mov	r2,dpl
   0260 AB 83               892 	mov	r3,dph
                            893 ;	E:\GitHub\8051finalMIDE\/delay.h:11: unsigned char cnt2 = 0;
   0262 7C 00               894 	mov	r4,#0x00
                            895 ;	E:\GitHub\8051finalMIDE\/delay.h:13: for(cnt1 = 0; cnt1 < input_ms; cnt1 ++) {	
   0264 7D 00               896 	mov	r5,#0x00
   0266 7E 00               897 	mov	r6,#0x00
   0268                     898 00104$:
   0268 C3                  899 	clr	c
   0269 ED                  900 	mov	a,r5
   026A 9A                  901 	subb	a,r2
   026B EE                  902 	mov	a,r6
   026C 9B                  903 	subb	a,r3
   026D 50 13               904 	jnc	00108$
                            905 ;	E:\GitHub\8051finalMIDE\/delay.h:14: while(cnt2 < 90) {
   026F 8C 07               906 	mov	ar7,r4
   0271                     907 00101$:
   0271 BF 5A 00            908 	cjne	r7,#0x5A,00116$
   0274                     909 00116$:
   0274 50 03               910 	jnc	00113$
                            911 ;	E:\GitHub\8051finalMIDE\/delay.h:15: cnt2 ++;
   0276 0F                  912 	inc	r7
   0277 80 F8               913 	sjmp	00101$
   0279                     914 00113$:
   0279 8F 04               915 	mov	ar4,r7
                            916 ;	E:\GitHub\8051finalMIDE\/delay.h:13: for(cnt1 = 0; cnt1 < input_ms; cnt1 ++) {	
   027B 0D                  917 	inc	r5
   027C BD 00 E9            918 	cjne	r5,#0x00,00104$
   027F 0E                  919 	inc	r6
   0280 80 E6               920 	sjmp	00104$
   0282                     921 00108$:
   0282 22                  922 	ret
                            923 ;------------------------------------------------------------
                            924 ;Allocation info for local variables in function 'MPU6050_INIT'
                            925 ;------------------------------------------------------------
                            926 ;accel_fchoice_b           Allocated to registers 
                            927 ;A_DLPFCFG                 Allocated to registers 
                            928 ;mpu6050_i                 Allocated to registers r2 
                            929 ;------------------------------------------------------------
                            930 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:178: void MPU6050_INIT(void)
                            931 ;	-----------------------------------------
                            932 ;	 function MPU6050_INIT
                            933 ;	-----------------------------------------
   0283                     934 _MPU6050_INIT:
                            935 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:184: delay_ms(100);                                          // Delay 100 ms
   0283 90 00 64            936 	mov	dptr,#0x0064
   0286 12 02 5E            937 	lcall	_delay_ms
                            938 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:185: writeByte(MPU6050_ADDRESS, PWR_MGMT_1, 0x00);           // Clear sleep mode bit (6), enable all sensors 
   0289 E4                  939 	clr	a
   028A C0 E0               940 	push	acc
   028C 74 6B               941 	mov	a,#0x6B
   028E C0 E0               942 	push	acc
   0290 75 82 D0            943 	mov	dpl,#0xD0
   0293 12 03 4B            944 	lcall	_writeByte
   0296 15 81               945 	dec	sp
   0298 15 81               946 	dec	sp
                            947 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:186: delay_ms(100);                                          // Delay 100 ms for PLL to get established on x-axis gyro; should check for PLL ready interrupt  
   029A 90 00 64            948 	mov	dptr,#0x0064
   029D 12 02 5E            949 	lcall	_delay_ms
                            950 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:187: writeByte(MPU6050_ADDRESS , SIGNAL_PATH_RESET , 0x07);
   02A0 74 07               951 	mov	a,#0x07
   02A2 C0 E0               952 	push	acc
   02A4 74 68               953 	mov	a,#0x68
   02A6 C0 E0               954 	push	acc
   02A8 75 82 D0            955 	mov	dpl,#0xD0
   02AB 12 03 4B            956 	lcall	_writeByte
   02AE 15 81               957 	dec	sp
   02B0 15 81               958 	dec	sp
                            959 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:188: writeByte(MPU6050_ADDRESS, PWR_MGMT_1, 0x01);           // Set clock source to be PLL with x-axis gyroscope reference, bits 2:0 = 001
   02B2 74 01               960 	mov	a,#0x01
   02B4 C0 E0               961 	push	acc
   02B6 74 6B               962 	mov	a,#0x6B
   02B8 C0 E0               963 	push	acc
   02BA 75 82 D0            964 	mov	dpl,#0xD0
   02BD 12 03 4B            965 	lcall	_writeByte
   02C0 15 81               966 	dec	sp
   02C2 15 81               967 	dec	sp
                            968 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:189: writeByte(MPU6050_ADDRESS, CONFIG, 0x03);  
   02C4 74 03               969 	mov	a,#0x03
   02C6 C0 E0               970 	push	acc
   02C8 74 1A               971 	mov	a,#0x1A
   02CA C0 E0               972 	push	acc
   02CC 75 82 D0            973 	mov	dpl,#0xD0
   02CF 12 03 4B            974 	lcall	_writeByte
   02D2 15 81               975 	dec	sp
   02D4 15 81               976 	dec	sp
                            977 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:190: writeByte(MPU6050_ADDRESS, SMPLRT_DIV, 0);              // Use a 1000 Hz rate; the same rate set in CONFIG above     
   02D6 E4                  978 	clr	a
   02D7 C0 E0               979 	push	acc
   02D9 74 19               980 	mov	a,#0x19
   02DB C0 E0               981 	push	acc
   02DD 75 82 D0            982 	mov	dpl,#0xD0
   02E0 12 03 4B            983 	lcall	_writeByte
   02E3 15 81               984 	dec	sp
   02E5 15 81               985 	dec	sp
                            986 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:191: mpu6050_i = (Gscale << 3) | 0x00;
   02E7 E5 22               987 	mov	a,_Gscale
   02E9 C4                  988 	swap	a
   02EA 03                  989 	rr	a
   02EB 54 F8               990 	anl	a,#0xf8
   02ED FA                  991 	mov	r2,a
                            992 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:192: writeByte(MPU6050_ADDRESS, GYRO_CONFIG, mpu6050_i);     // Write new GYRO_CONFIG value to register     
   02EE C0 02               993 	push	ar2
   02F0 74 1B               994 	mov	a,#0x1B
   02F2 C0 E0               995 	push	acc
   02F4 75 82 D0            996 	mov	dpl,#0xD0
   02F7 12 03 4B            997 	lcall	_writeByte
   02FA 15 81               998 	dec	sp
   02FC 15 81               999 	dec	sp
                           1000 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:193: mpu6050_i = (Ascale << 3);
   02FE E5 21              1001 	mov	a,_Ascale
   0300 C4                 1002 	swap	a
   0301 03                 1003 	rr	a
   0302 54 F8              1004 	anl	a,#0xf8
   0304 FA                 1005 	mov	r2,a
                           1006 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:194: writeByte(MPU6050_ADDRESS, ACCEL_CONFIG, mpu6050_i);    // Write new ACCEL_CONFIG register value
   0305 C0 02              1007 	push	ar2
   0307 74 1C              1008 	mov	a,#0x1C
   0309 C0 E0              1009 	push	acc
   030B 75 82 D0           1010 	mov	dpl,#0xD0
   030E 12 03 4B           1011 	lcall	_writeByte
   0311 15 81              1012 	dec	sp
   0313 15 81              1013 	dec	sp
                           1014 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:196: writeByte(MPU6050_ADDRESS, ACCEL_CONFIG2, mpu6050_i);   // Write new ACCEL_CONFIG2 register value	
   0315 74 03              1015 	mov	a,#0x03
   0317 C0 E0              1016 	push	acc
   0319 74 1D              1017 	mov	a,#0x1D
   031B C0 E0              1018 	push	acc
   031D 75 82 D0           1019 	mov	dpl,#0xD0
   0320 12 03 4B           1020 	lcall	_writeByte
   0323 15 81              1021 	dec	sp
   0325 15 81              1022 	dec	sp
                           1023 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:197: writeByte(MPU6050_ADDRESS, INT_PIN_CFG, 0x22);    
   0327 74 22              1024 	mov	a,#0x22
   0329 C0 E0              1025 	push	acc
   032B 74 37              1026 	mov	a,#0x37
   032D C0 E0              1027 	push	acc
   032F 75 82 D0           1028 	mov	dpl,#0xD0
   0332 12 03 4B           1029 	lcall	_writeByte
   0335 15 81              1030 	dec	sp
   0337 15 81              1031 	dec	sp
                           1032 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:198: writeByte(MPU6050_ADDRESS, INT_ENABLE, 0x00);           // disable data ready (bit 0) interrupt
   0339 E4                 1033 	clr	a
   033A C0 E0              1034 	push	acc
   033C 74 38              1035 	mov	a,#0x38
   033E C0 E0              1036 	push	acc
   0340 75 82 D0           1037 	mov	dpl,#0xD0
   0343 12 03 4B           1038 	lcall	_writeByte
   0346 15 81              1039 	dec	sp
   0348 15 81              1040 	dec	sp
   034A 22                 1041 	ret
                           1042 ;------------------------------------------------------------
                           1043 ;Allocation info for local variables in function 'writeByte'
                           1044 ;------------------------------------------------------------
                           1045 ;subAddress                Allocated to stack - offset -3
                           1046 ;REG_data                  Allocated to stack - offset -4
                           1047 ;address                   Allocated to registers r2 
                           1048 ;------------------------------------------------------------
                           1049 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:202: void writeByte(uint8_t address, uint8_t subAddress, uint8_t REG_data)
                           1050 ;	-----------------------------------------
                           1051 ;	 function writeByte
                           1052 ;	-----------------------------------------
   034B                    1053 _writeByte:
   034B C0 08              1054 	push	_bp
   034D 85 81 08           1055 	mov	_bp,sp
   0350 AA 82              1056 	mov	r2,dpl
                           1057 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:204: Single_WriteI2C(address, subAddress, REG_data);
   0352 E5 08              1058 	mov	a,_bp
   0354 24 FC              1059 	add	a,#0xfc
   0356 F8                 1060 	mov	r0,a
   0357 E6                 1061 	mov	a,@r0
   0358 C0 E0              1062 	push	acc
   035A E5 08              1063 	mov	a,_bp
   035C 24 FD              1064 	add	a,#0xfd
   035E F8                 1065 	mov	r0,a
   035F E6                 1066 	mov	a,@r0
   0360 C0 E0              1067 	push	acc
   0362 8A 82              1068 	mov	dpl,r2
   0364 12 01 E4           1069 	lcall	_Single_WriteI2C
   0367 15 81              1070 	dec	sp
   0369 15 81              1071 	dec	sp
   036B D0 08              1072 	pop	_bp
   036D 22                 1073 	ret
                           1074 ;------------------------------------------------------------
                           1075 ;Allocation info for local variables in function 'readByte'
                           1076 ;------------------------------------------------------------
                           1077 ;subAddress                Allocated to stack - offset -3
                           1078 ;address                   Allocated to registers r2 
                           1079 ;------------------------------------------------------------
                           1080 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:208: uint8_t readByte(uint8_t address, uint8_t subAddress)
                           1081 ;	-----------------------------------------
                           1082 ;	 function readByte
                           1083 ;	-----------------------------------------
   036E                    1084 _readByte:
   036E C0 08              1085 	push	_bp
   0370 85 81 08           1086 	mov	_bp,sp
   0373 AA 82              1087 	mov	r2,dpl
                           1088 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:210: return Single_ReadI2C(address, subAddress); 
   0375 E5 08              1089 	mov	a,_bp
   0377 24 FD              1090 	add	a,#0xfd
   0379 F8                 1091 	mov	r0,a
   037A E6                 1092 	mov	a,@r0
   037B C0 E0              1093 	push	acc
   037D 8A 82              1094 	mov	dpl,r2
   037F 12 02 11           1095 	lcall	_Single_ReadI2C
   0382 15 81              1096 	dec	sp
   0384 D0 08              1097 	pop	_bp
   0386 22                 1098 	ret
                           1099 ;------------------------------------------------------------
                           1100 ;Allocation info for local variables in function 'readMPU6050_AccelData'
                           1101 ;------------------------------------------------------------
                           1102 ;buffer                    Allocated to stack - offset 1
                           1103 ;sloc0                     Allocated to stack - offset 4
                           1104 ;------------------------------------------------------------
                           1105 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:213: void readMPU6050_AccelData(int * buffer)
                           1106 ;	-----------------------------------------
                           1107 ;	 function readMPU6050_AccelData
                           1108 ;	-----------------------------------------
   0387                    1109 _readMPU6050_AccelData:
   0387 C0 08              1110 	push	_bp
   0389 85 81 08           1111 	mov	_bp,sp
   038C C0 82              1112 	push	dpl
   038E C0 83              1113 	push	dph
   0390 C0 F0              1114 	push	b
   0392 05 81              1115 	inc	sp
   0394 05 81              1116 	inc	sp
                           1117 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:216: i2c_package[0] = readByte(MPU6050_ADDRESS, ACCEL_XOUT_H);
   0396 74 3B              1118 	mov	a,#0x3B
   0398 C0 E0              1119 	push	acc
   039A 75 82 D0           1120 	mov	dpl,#0xD0
   039D 12 03 6E           1121 	lcall	_readByte
   03A0 AD 82              1122 	mov	r5,dpl
   03A2 15 81              1123 	dec	sp
   03A4 8D 30              1124 	mov	_i2c_package,r5
                           1125 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:217: i2c_package[1] = readByte(MPU6050_ADDRESS, ACCEL_XOUT_L);
   03A6 74 3C              1126 	mov	a,#0x3C
   03A8 C0 E0              1127 	push	acc
   03AA 75 82 D0           1128 	mov	dpl,#0xD0
   03AD 12 03 6E           1129 	lcall	_readByte
   03B0 AD 82              1130 	mov	r5,dpl
   03B2 15 81              1131 	dec	sp
   03B4 8D 31              1132 	mov	(_i2c_package + 0x0001),r5
                           1133 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:218: i2c_package[2] = readByte(MPU6050_ADDRESS, ACCEL_YOUT_H);
   03B6 74 3D              1134 	mov	a,#0x3D
   03B8 C0 E0              1135 	push	acc
   03BA 75 82 D0           1136 	mov	dpl,#0xD0
   03BD 12 03 6E           1137 	lcall	_readByte
   03C0 AD 82              1138 	mov	r5,dpl
   03C2 15 81              1139 	dec	sp
   03C4 8D 32              1140 	mov	(_i2c_package + 0x0002),r5
                           1141 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:219: i2c_package[3] = readByte(MPU6050_ADDRESS, ACCEL_YOUT_L);
   03C6 74 3E              1142 	mov	a,#0x3E
   03C8 C0 E0              1143 	push	acc
   03CA 75 82 D0           1144 	mov	dpl,#0xD0
   03CD 12 03 6E           1145 	lcall	_readByte
   03D0 AD 82              1146 	mov	r5,dpl
   03D2 15 81              1147 	dec	sp
   03D4 8D 33              1148 	mov	(_i2c_package + 0x0003),r5
                           1149 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:220: i2c_package[4] = readByte(MPU6050_ADDRESS, ACCEL_ZOUT_H);
   03D6 74 3F              1150 	mov	a,#0x3F
   03D8 C0 E0              1151 	push	acc
   03DA 75 82 D0           1152 	mov	dpl,#0xD0
   03DD 12 03 6E           1153 	lcall	_readByte
   03E0 AD 82              1154 	mov	r5,dpl
   03E2 15 81              1155 	dec	sp
   03E4 8D 34              1156 	mov	(_i2c_package + 0x0004),r5
                           1157 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:221: i2c_package[5] = readByte(MPU6050_ADDRESS, ACCEL_ZOUT_L);
   03E6 74 40              1158 	mov	a,#0x40
   03E8 C0 E0              1159 	push	acc
   03EA 75 82 D0           1160 	mov	dpl,#0xD0
   03ED 12 03 6E           1161 	lcall	_readByte
   03F0 AD 82              1162 	mov	r5,dpl
   03F2 15 81              1163 	dec	sp
   03F4 8D 35              1164 	mov	(_i2c_package + 0x0005),r5
                           1165 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:223: buffer[0] = (int)(((int)i2c_package[0] << 8) | i2c_package[1]) ;  // Turn the MSB and LSB into a signed 16-bit value
   03F6 AE 30              1166 	mov	r6,_i2c_package
   03F8 7D 00              1167 	mov	r5,#0x00
   03FA AF 31              1168 	mov	r7,(_i2c_package + 0x0001)
   03FC 7A 00              1169 	mov	r2,#0x00
   03FE EF                 1170 	mov	a,r7
   03FF 42 05              1171 	orl	ar5,a
   0401 EA                 1172 	mov	a,r2
   0402 42 06              1173 	orl	ar6,a
   0404 A8 08              1174 	mov	r0,_bp
   0406 08                 1175 	inc	r0
   0407 86 82              1176 	mov	dpl,@r0
   0409 08                 1177 	inc	r0
   040A 86 83              1178 	mov	dph,@r0
   040C 08                 1179 	inc	r0
   040D 86 F0              1180 	mov	b,@r0
   040F ED                 1181 	mov	a,r5
   0410 12 0D C1           1182 	lcall	__gptrput
   0413 A3                 1183 	inc	dptr
   0414 EE                 1184 	mov	a,r6
   0415 12 0D C1           1185 	lcall	__gptrput
                           1186 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:224: buffer[1] = (int)(((int)i2c_package[2] << 8) | i2c_package[3]) ;  
   0418 A8 08              1187 	mov	r0,_bp
   041A 08                 1188 	inc	r0
   041B 74 02              1189 	mov	a,#0x02
   041D 26                 1190 	add	a,@r0
   041E FA                 1191 	mov	r2,a
   041F E4                 1192 	clr	a
   0420 08                 1193 	inc	r0
   0421 36                 1194 	addc	a,@r0
   0422 FB                 1195 	mov	r3,a
   0423 08                 1196 	inc	r0
   0424 86 04              1197 	mov	ar4,@r0
   0426 AD 32              1198 	mov	r5,(_i2c_package + 0x0002)
   0428 E5 08              1199 	mov	a,_bp
   042A 24 04              1200 	add	a,#0x04
   042C F8                 1201 	mov	r0,a
   042D 08                 1202 	inc	r0
   042E A6 05              1203 	mov	@r0,ar5
   0430 18                 1204 	dec	r0
   0431 76 00              1205 	mov	@r0,#0x00
   0433 AF 33              1206 	mov	r7,(_i2c_package + 0x0003)
   0435 7D 00              1207 	mov	r5,#0x00
   0437 E5 08              1208 	mov	a,_bp
   0439 24 04              1209 	add	a,#0x04
   043B F8                 1210 	mov	r0,a
   043C E6                 1211 	mov	a,@r0
   043D 42 07              1212 	orl	ar7,a
   043F 08                 1213 	inc	r0
   0440 E6                 1214 	mov	a,@r0
   0441 42 05              1215 	orl	ar5,a
   0443 8A 82              1216 	mov	dpl,r2
   0445 8B 83              1217 	mov	dph,r3
   0447 8C F0              1218 	mov	b,r4
   0449 EF                 1219 	mov	a,r7
   044A 12 0D C1           1220 	lcall	__gptrput
   044D A3                 1221 	inc	dptr
   044E ED                 1222 	mov	a,r5
   044F 12 0D C1           1223 	lcall	__gptrput
                           1224 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:225: buffer[2] = (int)(((int)i2c_package[4] << 8) | i2c_package[5]) ; 
   0452 A8 08              1225 	mov	r0,_bp
   0454 08                 1226 	inc	r0
   0455 74 04              1227 	mov	a,#0x04
   0457 26                 1228 	add	a,@r0
   0458 FA                 1229 	mov	r2,a
   0459 E4                 1230 	clr	a
   045A 08                 1231 	inc	r0
   045B 36                 1232 	addc	a,@r0
   045C FB                 1233 	mov	r3,a
   045D 08                 1234 	inc	r0
   045E 86 04              1235 	mov	ar4,@r0
   0460 AD 34              1236 	mov	r5,(_i2c_package + 0x0004)
   0462 E5 08              1237 	mov	a,_bp
   0464 24 04              1238 	add	a,#0x04
   0466 F8                 1239 	mov	r0,a
   0467 08                 1240 	inc	r0
   0468 A6 05              1241 	mov	@r0,ar5
   046A 18                 1242 	dec	r0
   046B 76 00              1243 	mov	@r0,#0x00
   046D AF 35              1244 	mov	r7,(_i2c_package + 0x0005)
   046F 7D 00              1245 	mov	r5,#0x00
   0471 E5 08              1246 	mov	a,_bp
   0473 24 04              1247 	add	a,#0x04
   0475 F8                 1248 	mov	r0,a
   0476 E6                 1249 	mov	a,@r0
   0477 42 07              1250 	orl	ar7,a
   0479 08                 1251 	inc	r0
   047A E6                 1252 	mov	a,@r0
   047B 42 05              1253 	orl	ar5,a
   047D 8A 82              1254 	mov	dpl,r2
   047F 8B 83              1255 	mov	dph,r3
   0481 8C F0              1256 	mov	b,r4
   0483 EF                 1257 	mov	a,r7
   0484 12 0D C1           1258 	lcall	__gptrput
   0487 A3                 1259 	inc	dptr
   0488 ED                 1260 	mov	a,r5
   0489 12 0D C1           1261 	lcall	__gptrput
   048C 85 08 81           1262 	mov	sp,_bp
   048F D0 08              1263 	pop	_bp
   0491 22                 1264 	ret
                           1265 ;------------------------------------------------------------
                           1266 ;Allocation info for local variables in function 'readMPU6050_GyroData'
                           1267 ;------------------------------------------------------------
                           1268 ;buffer                    Allocated to stack - offset 1
                           1269 ;sloc0                     Allocated to stack - offset 4
                           1270 ;------------------------------------------------------------
                           1271 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:228: void readMPU6050_GyroData(int * buffer)
                           1272 ;	-----------------------------------------
                           1273 ;	 function readMPU6050_GyroData
                           1274 ;	-----------------------------------------
   0492                    1275 _readMPU6050_GyroData:
   0492 C0 08              1276 	push	_bp
   0494 85 81 08           1277 	mov	_bp,sp
   0497 C0 82              1278 	push	dpl
   0499 C0 83              1279 	push	dph
   049B C0 F0              1280 	push	b
   049D 05 81              1281 	inc	sp
   049F 05 81              1282 	inc	sp
                           1283 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:230: i2c_package[5] = readByte(MPU6050_ADDRESS, GYRO_ZOUT_L);
   04A1 74 48              1284 	mov	a,#0x48
   04A3 C0 E0              1285 	push	acc
   04A5 75 82 D0           1286 	mov	dpl,#0xD0
   04A8 12 03 6E           1287 	lcall	_readByte
   04AB AD 82              1288 	mov	r5,dpl
   04AD 15 81              1289 	dec	sp
   04AF 8D 35              1290 	mov	(_i2c_package + 0x0005),r5
                           1291 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:231: i2c_package[4] = readByte(MPU6050_ADDRESS, GYRO_ZOUT_H);
   04B1 74 47              1292 	mov	a,#0x47
   04B3 C0 E0              1293 	push	acc
   04B5 75 82 D0           1294 	mov	dpl,#0xD0
   04B8 12 03 6E           1295 	lcall	_readByte
   04BB AD 82              1296 	mov	r5,dpl
   04BD 15 81              1297 	dec	sp
   04BF 8D 34              1298 	mov	(_i2c_package + 0x0004),r5
                           1299 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:232: i2c_package[3] = readByte(MPU6050_ADDRESS, GYRO_YOUT_L);
   04C1 74 46              1300 	mov	a,#0x46
   04C3 C0 E0              1301 	push	acc
   04C5 75 82 D0           1302 	mov	dpl,#0xD0
   04C8 12 03 6E           1303 	lcall	_readByte
   04CB AD 82              1304 	mov	r5,dpl
   04CD 15 81              1305 	dec	sp
   04CF 8D 33              1306 	mov	(_i2c_package + 0x0003),r5
                           1307 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:233: i2c_package[2] = readByte(MPU6050_ADDRESS, GYRO_YOUT_H);
   04D1 74 45              1308 	mov	a,#0x45
   04D3 C0 E0              1309 	push	acc
   04D5 75 82 D0           1310 	mov	dpl,#0xD0
   04D8 12 03 6E           1311 	lcall	_readByte
   04DB AD 82              1312 	mov	r5,dpl
   04DD 15 81              1313 	dec	sp
   04DF 8D 32              1314 	mov	(_i2c_package + 0x0002),r5
                           1315 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:234: i2c_package[1] = readByte(MPU6050_ADDRESS, GYRO_XOUT_L);
   04E1 74 44              1316 	mov	a,#0x44
   04E3 C0 E0              1317 	push	acc
   04E5 75 82 D0           1318 	mov	dpl,#0xD0
   04E8 12 03 6E           1319 	lcall	_readByte
   04EB AD 82              1320 	mov	r5,dpl
   04ED 15 81              1321 	dec	sp
   04EF 8D 31              1322 	mov	(_i2c_package + 0x0001),r5
                           1323 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:235: i2c_package[0] = readByte(MPU6050_ADDRESS, GYRO_XOUT_H);
   04F1 74 43              1324 	mov	a,#0x43
   04F3 C0 E0              1325 	push	acc
   04F5 75 82 D0           1326 	mov	dpl,#0xD0
   04F8 12 03 6E           1327 	lcall	_readByte
   04FB AD 82              1328 	mov	r5,dpl
   04FD 15 81              1329 	dec	sp
                           1330 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:236: buffer[0] = (int)(((int)i2c_package[0] << 8) | i2c_package[1]) ;  // Turn the MSB and LSB into a signed 16-bit value
   04FF 8D 30              1331 	mov  _i2c_package,r5
   0501 8D 06              1332 	mov	ar6,r5
   0503 7D 00              1333 	mov	r5,#0x00
   0505 AF 31              1334 	mov	r7,(_i2c_package + 0x0001)
   0507 7A 00              1335 	mov	r2,#0x00
   0509 EF                 1336 	mov	a,r7
   050A 42 05              1337 	orl	ar5,a
   050C EA                 1338 	mov	a,r2
   050D 42 06              1339 	orl	ar6,a
   050F A8 08              1340 	mov	r0,_bp
   0511 08                 1341 	inc	r0
   0512 86 82              1342 	mov	dpl,@r0
   0514 08                 1343 	inc	r0
   0515 86 83              1344 	mov	dph,@r0
   0517 08                 1345 	inc	r0
   0518 86 F0              1346 	mov	b,@r0
   051A ED                 1347 	mov	a,r5
   051B 12 0D C1           1348 	lcall	__gptrput
   051E A3                 1349 	inc	dptr
   051F EE                 1350 	mov	a,r6
   0520 12 0D C1           1351 	lcall	__gptrput
                           1352 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:237: buffer[1] = (int)(((int)i2c_package[2] << 8) | i2c_package[3]) ;  
   0523 A8 08              1353 	mov	r0,_bp
   0525 08                 1354 	inc	r0
   0526 74 02              1355 	mov	a,#0x02
   0528 26                 1356 	add	a,@r0
   0529 FA                 1357 	mov	r2,a
   052A E4                 1358 	clr	a
   052B 08                 1359 	inc	r0
   052C 36                 1360 	addc	a,@r0
   052D FB                 1361 	mov	r3,a
   052E 08                 1362 	inc	r0
   052F 86 04              1363 	mov	ar4,@r0
   0531 AD 32              1364 	mov	r5,(_i2c_package + 0x0002)
   0533 E5 08              1365 	mov	a,_bp
   0535 24 04              1366 	add	a,#0x04
   0537 F8                 1367 	mov	r0,a
   0538 08                 1368 	inc	r0
   0539 A6 05              1369 	mov	@r0,ar5
   053B 18                 1370 	dec	r0
   053C 76 00              1371 	mov	@r0,#0x00
   053E AF 33              1372 	mov	r7,(_i2c_package + 0x0003)
   0540 7D 00              1373 	mov	r5,#0x00
   0542 E5 08              1374 	mov	a,_bp
   0544 24 04              1375 	add	a,#0x04
   0546 F8                 1376 	mov	r0,a
   0547 E6                 1377 	mov	a,@r0
   0548 42 07              1378 	orl	ar7,a
   054A 08                 1379 	inc	r0
   054B E6                 1380 	mov	a,@r0
   054C 42 05              1381 	orl	ar5,a
   054E 8A 82              1382 	mov	dpl,r2
   0550 8B 83              1383 	mov	dph,r3
   0552 8C F0              1384 	mov	b,r4
   0554 EF                 1385 	mov	a,r7
   0555 12 0D C1           1386 	lcall	__gptrput
   0558 A3                 1387 	inc	dptr
   0559 ED                 1388 	mov	a,r5
   055A 12 0D C1           1389 	lcall	__gptrput
                           1390 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:238: buffer[2] = (int)(((int)i2c_package[4] << 8) | i2c_package[5]) ; 
   055D A8 08              1391 	mov	r0,_bp
   055F 08                 1392 	inc	r0
   0560 74 04              1393 	mov	a,#0x04
   0562 26                 1394 	add	a,@r0
   0563 FA                 1395 	mov	r2,a
   0564 E4                 1396 	clr	a
   0565 08                 1397 	inc	r0
   0566 36                 1398 	addc	a,@r0
   0567 FB                 1399 	mov	r3,a
   0568 08                 1400 	inc	r0
   0569 86 04              1401 	mov	ar4,@r0
   056B AD 34              1402 	mov	r5,(_i2c_package + 0x0004)
   056D E5 08              1403 	mov	a,_bp
   056F 24 04              1404 	add	a,#0x04
   0571 F8                 1405 	mov	r0,a
   0572 08                 1406 	inc	r0
   0573 A6 05              1407 	mov	@r0,ar5
   0575 18                 1408 	dec	r0
   0576 76 00              1409 	mov	@r0,#0x00
   0578 AF 35              1410 	mov	r7,(_i2c_package + 0x0005)
   057A 7D 00              1411 	mov	r5,#0x00
   057C E5 08              1412 	mov	a,_bp
   057E 24 04              1413 	add	a,#0x04
   0580 F8                 1414 	mov	r0,a
   0581 E6                 1415 	mov	a,@r0
   0582 42 07              1416 	orl	ar7,a
   0584 08                 1417 	inc	r0
   0585 E6                 1418 	mov	a,@r0
   0586 42 05              1419 	orl	ar5,a
   0588 8A 82              1420 	mov	dpl,r2
   058A 8B 83              1421 	mov	dph,r3
   058C 8C F0              1422 	mov	b,r4
   058E EF                 1423 	mov	a,r7
   058F 12 0D C1           1424 	lcall	__gptrput
   0592 A3                 1425 	inc	dptr
   0593 ED                 1426 	mov	a,r5
   0594 12 0D C1           1427 	lcall	__gptrput
   0597 85 08 81           1428 	mov	sp,_bp
   059A D0 08              1429 	pop	_bp
   059C 22                 1430 	ret
                           1431 ;------------------------------------------------------------
                           1432 ;Allocation info for local variables in function 'resetMPU6050'
                           1433 ;------------------------------------------------------------
                           1434 ;------------------------------------------------------------
                           1435 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:241: void resetMPU6050(void) 
                           1436 ;	-----------------------------------------
                           1437 ;	 function resetMPU6050
                           1438 ;	-----------------------------------------
   059D                    1439 _resetMPU6050:
                           1440 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:244: writeByte(MPU6050_ADDRESS, PWR_MGMT_1, 0x80); // Write a one to bit 7 reset bit; toggle reset device
   059D 74 80              1441 	mov	a,#0x80
   059F C0 E0              1442 	push	acc
   05A1 74 6B              1443 	mov	a,#0x6B
   05A3 C0 E0              1444 	push	acc
   05A5 75 82 D0           1445 	mov	dpl,#0xD0
   05A8 12 03 4B           1446 	lcall	_writeByte
   05AB 15 81              1447 	dec	sp
   05AD 15 81              1448 	dec	sp
                           1449 ;	E:\GitHub\8051finalMIDE\/MPU6050.h:245: delay_ms(100);
   05AF 90 00 64           1450 	mov	dptr,#0x0064
   05B2 02 02 5E           1451 	ljmp	_delay_ms
                           1452 ;------------------------------------------------------------
                           1453 ;Allocation info for local variables in function 'BitExtract'
                           1454 ;------------------------------------------------------------
                           1455 ;bits                      Allocated to registers r2 
                           1456 ;i                         Allocated to registers r3 
                           1457 ;------------------------------------------------------------
                           1458 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:49: void BitExtract(UC bits)
                           1459 ;	-----------------------------------------
                           1460 ;	 function BitExtract
                           1461 ;	-----------------------------------------
   05B5                    1462 _BitExtract:
   05B5 AA 82              1463 	mov	r2,dpl
                           1464 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:53: for (i = 0; i < 8; i++) {
   05B7 7B 00              1465 	mov	r3,#0x00
   05B9                    1466 00101$:
   05B9 BB 08 00           1467 	cjne	r3,#0x08,00110$
   05BC                    1468 00110$:
   05BC 50 0C              1469 	jnc	00105$
                           1470 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:54: CLK = 0;
   05BE C2 A2              1471 	clr	_P2_2
                           1472 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:55: DIN = (bits & 0x80);
                           1473 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:56: bits <<= 1;
   05C0 EA                 1474 	mov	a,r2
   05C1 2A                 1475 	add	a,r2
   05C2 92 A4              1476 	mov	_P2_4,c
   05C4 FA                 1477 	mov	r2,a
                           1478 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:57: CLK = 1;
   05C5 D2 A2              1479 	setb	_P2_2
                           1480 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:53: for (i = 0; i < 8; i++) {
   05C7 0B                 1481 	inc	r3
   05C8 80 EF              1482 	sjmp	00101$
   05CA                    1483 00105$:
   05CA 22                 1484 	ret
                           1485 ;------------------------------------------------------------
                           1486 ;Allocation info for local variables in function 'SerialDIN'
                           1487 ;------------------------------------------------------------
                           1488 ;dat_7219                  Allocated to stack - offset -3
                           1489 ;address_7219              Allocated to registers r2 
                           1490 ;------------------------------------------------------------
                           1491 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:61: void SerialDIN(UC address_7219, UC dat_7219)
                           1492 ;	-----------------------------------------
                           1493 ;	 function SerialDIN
                           1494 ;	-----------------------------------------
   05CB                    1495 _SerialDIN:
   05CB C0 08              1496 	push	_bp
   05CD 85 81 08           1497 	mov	_bp,sp
                           1498 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:63: BitExtract(address_7219);
   05D0 12 05 B5           1499 	lcall	_BitExtract
                           1500 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:64: BitExtract(dat_7219);
   05D3 E5 08              1501 	mov	a,_bp
   05D5 24 FD              1502 	add	a,#0xfd
   05D7 F8                 1503 	mov	r0,a
   05D8 86 82              1504 	mov	dpl,@r0
   05DA 12 05 B5           1505 	lcall	_BitExtract
   05DD D0 08              1506 	pop	_bp
   05DF 22                 1507 	ret
                           1508 ;------------------------------------------------------------
                           1509 ;Allocation info for local variables in function 'MAT_SSD_Show'
                           1510 ;------------------------------------------------------------
                           1511 ;mat2                      Allocated to stack - offset -5
                           1512 ;num                       Allocated to stack - offset -8
                           1513 ;mat1                      Allocated to stack - offset 1
                           1514 ;i                         Allocated to registers r5 r6 
                           1515 ;------------------------------------------------------------
                           1516 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:67: void MAT_SSD_Show(UC* mat1, UC* mat2, UC* num)
                           1517 ;	-----------------------------------------
                           1518 ;	 function MAT_SSD_Show
                           1519 ;	-----------------------------------------
   05E0                    1520 _MAT_SSD_Show:
   05E0 C0 08              1521 	push	_bp
   05E2 85 81 08           1522 	mov	_bp,sp
   05E5 C0 82              1523 	push	dpl
   05E7 C0 83              1524 	push	dph
   05E9 C0 F0              1525 	push	b
                           1526 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:70: for (i = 0 ; i < 8; i++) {
   05EB 7D 00              1527 	mov	r5,#0x00
   05ED 7E 00              1528 	mov	r6,#0x00
   05EF                    1529 00101$:
   05EF C3                 1530 	clr	c
   05F0 ED                 1531 	mov	a,r5
   05F1 94 08              1532 	subb	a,#0x08
   05F3 EE                 1533 	mov	a,r6
   05F4 94 00              1534 	subb	a,#0x00
   05F6 40 03              1535 	jc	00110$
   05F8 02 06 92           1536 	ljmp	00105$
   05FB                    1537 00110$:
                           1538 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:71: LOAD = 0;
   05FB C2 A3              1539 	clr	_P2_3
                           1540 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:72: SerialDIN(i + 1, SSD_CODE[num[i]]);
   05FD E5 08              1541 	mov	a,_bp
   05FF 24 F8              1542 	add	a,#0xf8
   0601 F8                 1543 	mov	r0,a
   0602 ED                 1544 	mov	a,r5
   0603 26                 1545 	add	a,@r0
   0604 FF                 1546 	mov	r7,a
   0605 EE                 1547 	mov	a,r6
   0606 08                 1548 	inc	r0
   0607 36                 1549 	addc	a,@r0
   0608 FA                 1550 	mov	r2,a
   0609 08                 1551 	inc	r0
   060A 86 03              1552 	mov	ar3,@r0
   060C 8F 82              1553 	mov	dpl,r7
   060E 8A 83              1554 	mov	dph,r2
   0610 8B F0              1555 	mov	b,r3
   0612 12 0E A0           1556 	lcall	__gptrget
   0615 24 36              1557 	add	a,#_SSD_CODE
   0617 F8                 1558 	mov	r0,a
   0618 86 02              1559 	mov	ar2,@r0
   061A 8D 03              1560 	mov	ar3,r5
   061C 0B                 1561 	inc	r3
   061D C0 03              1562 	push	ar3
   061F C0 05              1563 	push	ar5
   0621 C0 06              1564 	push	ar6
   0623 C0 02              1565 	push	ar2
   0625 8B 82              1566 	mov	dpl,r3
   0627 12 05 CB           1567 	lcall	_SerialDIN
   062A 15 81              1568 	dec	sp
   062C D0 06              1569 	pop	ar6
   062E D0 05              1570 	pop	ar5
   0630 D0 03              1571 	pop	ar3
                           1572 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:73: SerialDIN(i + 1, mat1[i]);
   0632 A8 08              1573 	mov	r0,_bp
   0634 08                 1574 	inc	r0
   0635 ED                 1575 	mov	a,r5
   0636 26                 1576 	add	a,@r0
   0637 FA                 1577 	mov	r2,a
   0638 EE                 1578 	mov	a,r6
   0639 08                 1579 	inc	r0
   063A 36                 1580 	addc	a,@r0
   063B FC                 1581 	mov	r4,a
   063C 08                 1582 	inc	r0
   063D 86 07              1583 	mov	ar7,@r0
   063F 8A 82              1584 	mov	dpl,r2
   0641 8C 83              1585 	mov	dph,r4
   0643 8F F0              1586 	mov	b,r7
   0645 12 0E A0           1587 	lcall	__gptrget
   0648 FA                 1588 	mov	r2,a
   0649 C0 03              1589 	push	ar3
   064B C0 05              1590 	push	ar5
   064D C0 06              1591 	push	ar6
   064F C0 02              1592 	push	ar2
   0651 8B 82              1593 	mov	dpl,r3
   0653 12 05 CB           1594 	lcall	_SerialDIN
   0656 15 81              1595 	dec	sp
   0658 D0 06              1596 	pop	ar6
   065A D0 05              1597 	pop	ar5
   065C D0 03              1598 	pop	ar3
                           1599 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:74: SerialDIN(i + 1, mat2[i]);
   065E E5 08              1600 	mov	a,_bp
   0660 24 FB              1601 	add	a,#0xfb
   0662 F8                 1602 	mov	r0,a
   0663 ED                 1603 	mov	a,r5
   0664 26                 1604 	add	a,@r0
   0665 FA                 1605 	mov	r2,a
   0666 EE                 1606 	mov	a,r6
   0667 08                 1607 	inc	r0
   0668 36                 1608 	addc	a,@r0
   0669 FC                 1609 	mov	r4,a
   066A 08                 1610 	inc	r0
   066B 86 07              1611 	mov	ar7,@r0
   066D 8A 82              1612 	mov	dpl,r2
   066F 8C 83              1613 	mov	dph,r4
   0671 8F F0              1614 	mov	b,r7
   0673 12 0E A0           1615 	lcall	__gptrget
   0676 FA                 1616 	mov	r2,a
   0677 C0 05              1617 	push	ar5
   0679 C0 06              1618 	push	ar6
   067B C0 02              1619 	push	ar2
   067D 8B 82              1620 	mov	dpl,r3
   067F 12 05 CB           1621 	lcall	_SerialDIN
   0682 15 81              1622 	dec	sp
   0684 D0 06              1623 	pop	ar6
   0686 D0 05              1624 	pop	ar5
                           1625 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:75: LOAD = 1;
   0688 D2 A3              1626 	setb	_P2_3
                           1627 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:70: for (i = 0 ; i < 8; i++) {
   068A 0D                 1628 	inc	r5
   068B BD 00 01           1629 	cjne	r5,#0x00,00111$
   068E 0E                 1630 	inc	r6
   068F                    1631 00111$:
   068F 02 05 EF           1632 	ljmp	00101$
   0692                    1633 00105$:
   0692 85 08 81           1634 	mov	sp,_bp
   0695 D0 08              1635 	pop	_bp
   0697 22                 1636 	ret
                           1637 ;------------------------------------------------------------
                           1638 ;Allocation info for local variables in function 'MAT_SSDnum_Show'
                           1639 ;------------------------------------------------------------
                           1640 ;mat2                      Allocated to stack - offset -5
                           1641 ;num                       Allocated to stack - offset -9
                           1642 ;mat1                      Allocated to stack - offset 1
                           1643 ;i                         Allocated to registers r2 r3 
                           1644 ;n                         Allocated to stack - offset 4
                           1645 ;------------------------------------------------------------
                           1646 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:79: void MAT_SSDnum_Show(UC* mat1, UC* mat2, long num)
                           1647 ;	-----------------------------------------
                           1648 ;	 function MAT_SSDnum_Show
                           1649 ;	-----------------------------------------
   0698                    1650 _MAT_SSDnum_Show:
   0698 C0 08              1651 	push	_bp
   069A 85 81 08           1652 	mov	_bp,sp
   069D C0 82              1653 	push	dpl
   069F C0 83              1654 	push	dph
   06A1 C0 F0              1655 	push	b
   06A3 05 81              1656 	inc	sp
   06A5 05 81              1657 	inc	sp
                           1658 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:82: n = num > 0 ? num : -num;
   06A7 E5 08              1659 	mov	a,_bp
   06A9 24 F7              1660 	add	a,#0xf7
   06AB F8                 1661 	mov	r0,a
   06AC C3                 1662 	clr	c
   06AD E4                 1663 	clr	a
   06AE 96                 1664 	subb	a,@r0
   06AF E4                 1665 	clr	a
   06B0 08                 1666 	inc	r0
   06B1 96                 1667 	subb	a,@r0
   06B2 E4                 1668 	clr	a
   06B3 08                 1669 	inc	r0
   06B4 96                 1670 	subb	a,@r0
   06B5 74 80              1671 	mov	a,#(0x00 ^ 0x80)
   06B7 08                 1672 	inc	r0
   06B8 86 F0              1673 	mov	b,@r0
   06BA 63 F0 80           1674 	xrl	b,#0x80
   06BD 95 F0              1675 	subb	a,b
   06BF 50 12              1676 	jnc	00107$
   06C1 E5 08              1677 	mov	a,_bp
   06C3 24 F7              1678 	add	a,#0xf7
   06C5 F8                 1679 	mov	r0,a
   06C6 86 05              1680 	mov	ar5,@r0
   06C8 08                 1681 	inc	r0
   06C9 86 06              1682 	mov	ar6,@r0
   06CB 08                 1683 	inc	r0
   06CC 86 07              1684 	mov	ar7,@r0
   06CE 08                 1685 	inc	r0
   06CF 86 02              1686 	mov	ar2,@r0
   06D1 80 15              1687 	sjmp	00108$
   06D3                    1688 00107$:
   06D3 E5 08              1689 	mov	a,_bp
   06D5 24 F7              1690 	add	a,#0xf7
   06D7 F8                 1691 	mov	r0,a
   06D8 C3                 1692 	clr	c
   06D9 E4                 1693 	clr	a
   06DA 96                 1694 	subb	a,@r0
   06DB FD                 1695 	mov	r5,a
   06DC 08                 1696 	inc	r0
   06DD E4                 1697 	clr	a
   06DE 96                 1698 	subb	a,@r0
   06DF FE                 1699 	mov	r6,a
   06E0 08                 1700 	inc	r0
   06E1 E4                 1701 	clr	a
   06E2 96                 1702 	subb	a,@r0
   06E3 FF                 1703 	mov	r7,a
   06E4 08                 1704 	inc	r0
   06E5 E4                 1705 	clr	a
   06E6 96                 1706 	subb	a,@r0
   06E7 FA                 1707 	mov	r2,a
   06E8                    1708 00108$:
   06E8 E5 08              1709 	mov	a,_bp
   06EA 24 04              1710 	add	a,#0x04
   06EC F8                 1711 	mov	r0,a
   06ED A6 05              1712 	mov	@r0,ar5
   06EF 08                 1713 	inc	r0
   06F0 A6 06              1714 	mov	@r0,ar6
                           1715 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:83: for (i = 0 ; i < 8; i++) {
   06F2 7A 00              1716 	mov	r2,#0x00
   06F4 7B 00              1717 	mov	r3,#0x00
   06F6                    1718 00101$:
   06F6 C3                 1719 	clr	c
   06F7 EA                 1720 	mov	a,r2
   06F8 94 08              1721 	subb	a,#0x08
   06FA EB                 1722 	mov	a,r3
   06FB 94 00              1723 	subb	a,#0x00
   06FD 40 03              1724 	jc	00114$
   06FF 02 07 CA           1725 	ljmp	00105$
   0702                    1726 00114$:
                           1727 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:84: LOAD = 0;
   0702 C2 A3              1728 	clr	_P2_3
                           1729 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:85: SerialDIN(i + 1, SSD_CODE[n % 10]);
   0704 C0 02              1730 	push	ar2
   0706 C0 03              1731 	push	ar3
   0708 74 0A              1732 	mov	a,#0x0A
   070A C0 E0              1733 	push	acc
   070C E4                 1734 	clr	a
   070D C0 E0              1735 	push	acc
   070F E5 08              1736 	mov	a,_bp
   0711 24 04              1737 	add	a,#0x04
   0713 F8                 1738 	mov	r0,a
   0714 86 82              1739 	mov	dpl,@r0
   0716 08                 1740 	inc	r0
   0717 86 83              1741 	mov	dph,@r0
   0719 12 0E BC           1742 	lcall	__moduint
   071C AC 82              1743 	mov	r4,dpl
   071E 15 81              1744 	dec	sp
   0720 15 81              1745 	dec	sp
   0722 D0 03              1746 	pop	ar3
   0724 D0 02              1747 	pop	ar2
   0726 EC                 1748 	mov	a,r4
   0727 24 36              1749 	add	a,#_SSD_CODE
   0729 F8                 1750 	mov	r0,a
   072A 86 04              1751 	mov	ar4,@r0
   072C 8A 07              1752 	mov	ar7,r2
   072E 0F                 1753 	inc	r7
   072F C0 02              1754 	push	ar2
   0731 C0 03              1755 	push	ar3
   0733 C0 07              1756 	push	ar7
   0735 C0 04              1757 	push	ar4
   0737 8F 82              1758 	mov	dpl,r7
   0739 12 05 CB           1759 	lcall	_SerialDIN
   073C 15 81              1760 	dec	sp
   073E D0 07              1761 	pop	ar7
   0740 D0 03              1762 	pop	ar3
   0742 D0 02              1763 	pop	ar2
                           1764 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:86: SerialDIN(i + 1, mat2[i]);
   0744 E5 08              1765 	mov	a,_bp
   0746 24 FB              1766 	add	a,#0xfb
   0748 F8                 1767 	mov	r0,a
   0749 EA                 1768 	mov	a,r2
   074A 26                 1769 	add	a,@r0
   074B FC                 1770 	mov	r4,a
   074C EB                 1771 	mov	a,r3
   074D 08                 1772 	inc	r0
   074E 36                 1773 	addc	a,@r0
   074F FD                 1774 	mov	r5,a
   0750 08                 1775 	inc	r0
   0751 86 06              1776 	mov	ar6,@r0
   0753 8C 82              1777 	mov	dpl,r4
   0755 8D 83              1778 	mov	dph,r5
   0757 8E F0              1779 	mov	b,r6
   0759 12 0E A0           1780 	lcall	__gptrget
   075C FC                 1781 	mov	r4,a
   075D C0 02              1782 	push	ar2
   075F C0 03              1783 	push	ar3
   0761 C0 07              1784 	push	ar7
   0763 C0 04              1785 	push	ar4
   0765 8F 82              1786 	mov	dpl,r7
   0767 12 05 CB           1787 	lcall	_SerialDIN
   076A 15 81              1788 	dec	sp
   076C D0 07              1789 	pop	ar7
   076E D0 03              1790 	pop	ar3
   0770 D0 02              1791 	pop	ar2
                           1792 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:87: SerialDIN(i + 1, mat1[i]);
   0772 A8 08              1793 	mov	r0,_bp
   0774 08                 1794 	inc	r0
   0775 EA                 1795 	mov	a,r2
   0776 26                 1796 	add	a,@r0
   0777 FC                 1797 	mov	r4,a
   0778 EB                 1798 	mov	a,r3
   0779 08                 1799 	inc	r0
   077A 36                 1800 	addc	a,@r0
   077B FD                 1801 	mov	r5,a
   077C 08                 1802 	inc	r0
   077D 86 06              1803 	mov	ar6,@r0
   077F 8C 82              1804 	mov	dpl,r4
   0781 8D 83              1805 	mov	dph,r5
   0783 8E F0              1806 	mov	b,r6
   0785 12 0E A0           1807 	lcall	__gptrget
   0788 FC                 1808 	mov	r4,a
   0789 C0 02              1809 	push	ar2
   078B C0 03              1810 	push	ar3
   078D C0 04              1811 	push	ar4
   078F 8F 82              1812 	mov	dpl,r7
   0791 12 05 CB           1813 	lcall	_SerialDIN
   0794 15 81              1814 	dec	sp
                           1815 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:88: n /= 10;
   0796 74 0A              1816 	mov	a,#0x0A
   0798 C0 E0              1817 	push	acc
   079A E4                 1818 	clr	a
   079B C0 E0              1819 	push	acc
   079D E5 08              1820 	mov	a,_bp
   079F 24 04              1821 	add	a,#0x04
   07A1 F8                 1822 	mov	r0,a
   07A2 86 82              1823 	mov	dpl,@r0
   07A4 08                 1824 	inc	r0
   07A5 86 83              1825 	mov	dph,@r0
   07A7 12 0D 90           1826 	lcall	__divuint
   07AA AC 82              1827 	mov	r4,dpl
   07AC AD 83              1828 	mov	r5,dph
   07AE 15 81              1829 	dec	sp
   07B0 15 81              1830 	dec	sp
   07B2 D0 03              1831 	pop	ar3
   07B4 D0 02              1832 	pop	ar2
   07B6 E5 08              1833 	mov	a,_bp
   07B8 24 04              1834 	add	a,#0x04
   07BA F8                 1835 	mov	r0,a
   07BB A6 04              1836 	mov	@r0,ar4
   07BD 08                 1837 	inc	r0
   07BE A6 05              1838 	mov	@r0,ar5
                           1839 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:89: LOAD = 1;
   07C0 D2 A3              1840 	setb	_P2_3
                           1841 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:83: for (i = 0 ; i < 8; i++) {
   07C2 0A                 1842 	inc	r2
   07C3 BA 00 01           1843 	cjne	r2,#0x00,00115$
   07C6 0B                 1844 	inc	r3
   07C7                    1845 00115$:
   07C7 02 06 F6           1846 	ljmp	00101$
   07CA                    1847 00105$:
   07CA 85 08 81           1848 	mov	sp,_bp
   07CD D0 08              1849 	pop	_bp
   07CF 22                 1850 	ret
                           1851 ;------------------------------------------------------------
                           1852 ;Allocation info for local variables in function 'MAT_SSD_INIT'
                           1853 ;------------------------------------------------------------
                           1854 ;i                         Allocated to registers r2 
                           1855 ;j                         Allocated to registers r3 
                           1856 ;------------------------------------------------------------
                           1857 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:118: void MAT_SSD_INIT()
                           1858 ;	-----------------------------------------
                           1859 ;	 function MAT_SSD_INIT
                           1860 ;	-----------------------------------------
   07D0                    1861 _MAT_SSD_INIT:
                           1862 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:121: LOAD = 0;
   07D0 C2 A3              1863 	clr	_P2_3
                           1864 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:122: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SHUTDOWN,     0x01);   // Normal mode (0xX1)
   07D2 7A 03              1865 	mov	r2,#0x03
   07D4                    1866 00103$:
   07D4 C0 02              1867 	push	ar2
   07D6 74 01              1868 	mov	a,#0x01
   07D8 C0 E0              1869 	push	acc
   07DA 75 82 0C           1870 	mov	dpl,#0x0C
   07DD 12 05 CB           1871 	lcall	_SerialDIN
   07E0 15 81              1872 	dec	sp
   07E2 D0 02              1873 	pop	ar2
   07E4 DA EE              1874 	djnz	r2,00103$
                           1875 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:123: LOAD = 1;
   07E6 D2 A3              1876 	setb	_P2_3
                           1877 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:124: LOAD = 0;
   07E8 C2 A3              1878 	clr	_P2_3
                           1879 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:125: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DISPLAY_TEST, 0x00);  // Overwrite SHUTDOWN
   07EA 7A 03              1880 	mov	r2,#0x03
   07EC                    1881 00106$:
   07EC C0 02              1882 	push	ar2
   07EE E4                 1883 	clr	a
   07EF C0 E0              1884 	push	acc
   07F1 75 82 0F           1885 	mov	dpl,#0x0F
   07F4 12 05 CB           1886 	lcall	_SerialDIN
   07F7 15 81              1887 	dec	sp
   07F9 D0 02              1888 	pop	ar2
   07FB DA EF              1889 	djnz	r2,00106$
                           1890 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:126: LOAD = 1;
   07FD D2 A3              1891 	setb	_P2_3
                           1892 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:127: LOAD = 0;
   07FF C2 A3              1893 	clr	_P2_3
                           1894 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:128: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(DECODE_MODE,  0x00);  // no decoding
   0801 7A 03              1895 	mov	r2,#0x03
   0803                    1896 00109$:
   0803 C0 02              1897 	push	ar2
   0805 E4                 1898 	clr	a
   0806 C0 E0              1899 	push	acc
   0808 75 82 09           1900 	mov	dpl,#0x09
   080B 12 05 CB           1901 	lcall	_SerialDIN
   080E 15 81              1902 	dec	sp
   0810 D0 02              1903 	pop	ar2
   0812 DA EF              1904 	djnz	r2,00109$
                           1905 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:129: LOAD = 1;
   0814 D2 A3              1906 	setb	_P2_3
                           1907 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:130: LOAD = 0;
   0816 C2 A3              1908 	clr	_P2_3
                           1909 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:131: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(SCAN_LIMIT,   0x07);  // use all 8 digits
   0818 7A 03              1910 	mov	r2,#0x03
   081A                    1911 00112$:
   081A C0 02              1912 	push	ar2
   081C 74 07              1913 	mov	a,#0x07
   081E C0 E0              1914 	push	acc
   0820 75 82 0B           1915 	mov	dpl,#0x0B
   0823 12 05 CB           1916 	lcall	_SerialDIN
   0826 15 81              1917 	dec	sp
   0828 D0 02              1918 	pop	ar2
   082A DA EE              1919 	djnz	r2,00112$
                           1920 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:132: LOAD = 1;
   082C D2 A3              1921 	setb	_P2_3
                           1922 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:133: LOAD = 0;
   082E C2 A3              1923 	clr	_P2_3
                           1924 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:134: for (i = 0; i < MAX7219_NUM; i++) SerialDIN(INTENSITY,    0x0E);  // brightness
   0830 7A 03              1925 	mov	r2,#0x03
   0832                    1926 00115$:
   0832 C0 02              1927 	push	ar2
   0834 74 0E              1928 	mov	a,#0x0E
   0836 C0 E0              1929 	push	acc
   0838 75 82 0A           1930 	mov	dpl,#0x0A
   083B 12 05 CB           1931 	lcall	_SerialDIN
   083E 15 81              1932 	dec	sp
   0840 D0 02              1933 	pop	ar2
   0842 DA EE              1934 	djnz	r2,00115$
                           1935 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:135: LOAD = 1;
   0844 D2 A3              1936 	setb	_P2_3
                           1937 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:137: for (i = 1; i <= 8; i++) {
   0846 7A 01              1938 	mov	r2,#0x01
   0848                    1939 00119$:
   0848 74 08              1940 	mov	a,#0x08
   084A B5 02 00           1941 	cjne	a,ar2,00146$
   084D                    1942 00146$:
   084D 40 1D              1943 	jc	00123$
                           1944 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:138: LOAD = 0;
   084F C2 A3              1945 	clr	_P2_3
                           1946 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:139: for (j = 0; j < 3; j++)
   0851 7B 03              1947 	mov	r3,#0x03
   0853                    1948 00118$:
                           1949 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:140: SerialDIN(i, 0x00);
   0853 C0 02              1950 	push	ar2
   0855 C0 03              1951 	push	ar3
   0857 E4                 1952 	clr	a
   0858 C0 E0              1953 	push	acc
   085A 8A 82              1954 	mov	dpl,r2
   085C 12 05 CB           1955 	lcall	_SerialDIN
   085F 15 81              1956 	dec	sp
   0861 D0 03              1957 	pop	ar3
   0863 D0 02              1958 	pop	ar2
   0865 DB EC              1959 	djnz	r3,00118$
                           1960 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:139: for (j = 0; j < 3; j++)
                           1961 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:141: LOAD = 1;
   0867 D2 A3              1962 	setb	_P2_3
                           1963 ;	E:\GitHub\8051finalMIDE\/MAX7219.h:137: for (i = 1; i <= 8; i++) {
   0869 0A                 1964 	inc	r2
   086A 80 DC              1965 	sjmp	00119$
   086C                    1966 00123$:
   086C 22                 1967 	ret
                           1968 ;------------------------------------------------------------
                           1969 ;Allocation info for local variables in function 'InitGame'
                           1970 ;------------------------------------------------------------
                           1971 ;------------------------------------------------------------
                           1972 ;	E:\GitHub\8051finalMIDE\main.c:44: void InitGame()
                           1973 ;	-----------------------------------------
                           1974 ;	 function InitGame
                           1975 ;	-----------------------------------------
   086D                    1976 _InitGame:
                           1977 ;	E:\GitHub\8051finalMIDE\main.c:47: State = 1;
   086D 75 50 01           1978 	mov	_State,#0x01
                           1979 ;	E:\GitHub\8051finalMIDE\main.c:48: ball_m = ball_x = ball_y = 0;
   0870 E4                 1980 	clr	a
   0871 F5 4A              1981 	mov	_ball_y,a
   0873 F5 4B              1982 	mov	(_ball_y + 1),a
   0875 E4                 1983 	clr	a
   0876 F5 48              1984 	mov	_ball_x,a
   0878 F5 49              1985 	mov	(_ball_x + 1),a
   087A E4                 1986 	clr	a
   087B F5 46              1987 	mov	_ball_m,a
   087D F5 47              1988 	mov	(_ball_m + 1),a
   087F 22                 1989 	ret
                           1990 ;------------------------------------------------------------
                           1991 ;Allocation info for local variables in function 'T0_isr'
                           1992 ;------------------------------------------------------------
                           1993 ;------------------------------------------------------------
                           1994 ;	E:\GitHub\8051finalMIDE\main.c:51: void T0_isr(void) __interrupt 1						// Interrupt routine w/ priority 1
                           1995 ;	-----------------------------------------
                           1996 ;	 function T0_isr
                           1997 ;	-----------------------------------------
   0880                    1998 _T0_isr:
   0880 C0 20              1999 	push	bits
   0882 C0 E0              2000 	push	acc
   0884 C0 F0              2001 	push	b
   0886 C0 82              2002 	push	dpl
   0888 C0 83              2003 	push	dph
   088A C0 02              2004 	push	(0+2)
   088C C0 03              2005 	push	(0+3)
   088E C0 04              2006 	push	(0+4)
   0890 C0 05              2007 	push	(0+5)
   0892 C0 06              2008 	push	(0+6)
   0894 C0 07              2009 	push	(0+7)
   0896 C0 00              2010 	push	(0+0)
   0898 C0 01              2011 	push	(0+1)
   089A C0 D0              2012 	push	psw
   089C 75 D0 00           2013 	mov	psw,#0x00
                           2014 ;	E:\GitHub\8051finalMIDE\main.c:54: TH0 = (65536-1000) / 256;						// Reset initial higher 8 bits into Timer 0
   089F 75 8C FC           2015 	mov	_TH0,#0xFC
                           2016 ;	E:\GitHub\8051finalMIDE\main.c:55: TL0 = (65536-1000) % 256;						// Reset initial lower 8 bits into Timer 0
   08A2 75 8A 18           2017 	mov	_TL0,#0x18
                           2018 ;	E:\GitHub\8051finalMIDE\main.c:57: ms++;
   08A5 05 74              2019 	inc	_ms
   08A7 E4                 2020 	clr	a
   08A8 B5 74 0C           2021 	cjne	a,_ms,00127$
   08AB 05 75              2022 	inc	(_ms + 1)
   08AD B5 75 07           2023 	cjne	a,(_ms + 1),00127$
   08B0 05 76              2024 	inc	(_ms + 2)
   08B2 B5 76 02           2025 	cjne	a,(_ms + 2),00127$
   08B5 05 77              2026 	inc	(_ms + 3)
   08B7                    2027 00127$:
                           2028 ;	E:\GitHub\8051finalMIDE\main.c:58: if (PB1 == 0) {
   08B7 20 B2 10           2029 	jb	_P3_2,00105$
                           2030 ;	E:\GitHub\8051finalMIDE\main.c:59: if (depb1 == 0 && pb1cnt++ == 10)   depb1 = 1;
   08BA E5 4E              2031 	mov	a,_depb1
   08BC 70 12              2032 	jnz	00106$
   08BE AA 4F              2033 	mov	r2,_pb1cnt
   08C0 05 4F              2034 	inc	_pb1cnt
   08C2 BA 0A 0B           2035 	cjne	r2,#0x0A,00106$
   08C5 75 4E 01           2036 	mov	_depb1,#0x01
   08C8 80 06              2037 	sjmp	00106$
   08CA                    2038 00105$:
                           2039 ;	E:\GitHub\8051finalMIDE\main.c:61: depb1 = pb1cnt = 0;
   08CA 75 4F 00           2040 	mov	_pb1cnt,#0x00
   08CD 75 4E 00           2041 	mov	_depb1,#0x00
   08D0                    2042 00106$:
                           2043 ;	E:\GitHub\8051finalMIDE\main.c:64: if (ms % 10 == 0) {
   08D0 74 0A              2044 	mov	a,#0x0A
   08D2 C0 E0              2045 	push	acc
   08D4 E4                 2046 	clr	a
   08D5 C0 E0              2047 	push	acc
   08D7 C0 E0              2048 	push	acc
   08D9 C0 E0              2049 	push	acc
   08DB 85 74 82           2050 	mov	dpl,_ms
   08DE 85 75 83           2051 	mov	dph,(_ms + 1)
   08E1 85 76 F0           2052 	mov	b,(_ms + 2)
   08E4 E5 77              2053 	mov	a,(_ms + 3)
   08E6 12 0D DA           2054 	lcall	__modslong
   08E9 AA 82              2055 	mov	r2,dpl
   08EB AB 83              2056 	mov	r3,dph
   08ED AC F0              2057 	mov	r4,b
   08EF FD                 2058 	mov	r5,a
   08F0 E5 81              2059 	mov	a,sp
   08F2 24 FC              2060 	add	a,#0xfc
   08F4 F5 81              2061 	mov	sp,a
   08F6 EA                 2062 	mov	a,r2
   08F7 4B                 2063 	orl	a,r3
   08F8 4C                 2064 	orl	a,r4
   08F9 4D                 2065 	orl	a,r5
   08FA 70 0A              2066 	jnz	00110$
                           2067 ;	E:\GitHub\8051finalMIDE\main.c:65: if (State == 1) {
   08FC 74 01              2068 	mov	a,#0x01
   08FE B5 50 05           2069 	cjne	a,_State,00110$
                           2070 ;	E:\GitHub\8051finalMIDE\main.c:66: flash = ~flash;
   0901 E5 4C              2071 	mov	a,_flash
   0903 F4                 2072 	cpl	a
   0904 F5 4C              2073 	mov	_flash,a
   0906                    2074 00110$:
                           2075 ;	E:\GitHub\8051finalMIDE\main.c:70: if (ms % 100 == 0) {
   0906 74 64              2076 	mov	a,#0x64
   0908 C0 E0              2077 	push	acc
   090A E4                 2078 	clr	a
   090B C0 E0              2079 	push	acc
   090D C0 E0              2080 	push	acc
   090F C0 E0              2081 	push	acc
   0911 85 74 82           2082 	mov	dpl,_ms
   0914 85 75 83           2083 	mov	dph,(_ms + 1)
   0917 85 76 F0           2084 	mov	b,(_ms + 2)
   091A E5 77              2085 	mov	a,(_ms + 3)
   091C 12 0D DA           2086 	lcall	__modslong
   091F AA 82              2087 	mov	r2,dpl
   0921 AB 83              2088 	mov	r3,dph
   0923 AC F0              2089 	mov	r4,b
   0925 FD                 2090 	mov	r5,a
   0926 E5 81              2091 	mov	a,sp
   0928 24 FC              2092 	add	a,#0xfc
   092A F5 81              2093 	mov	sp,a
   092C EA                 2094 	mov	a,r2
   092D 4B                 2095 	orl	a,r3
   092E 4C                 2096 	orl	a,r4
   092F 4D                 2097 	orl	a,r5
   0930 70 0A              2098 	jnz	00114$
                           2099 ;	E:\GitHub\8051finalMIDE\main.c:71: if (State == 1) {
   0932 74 01              2100 	mov	a,#0x01
   0934 B5 50 05           2101 	cjne	a,_State,00114$
                           2102 ;	E:\GitHub\8051finalMIDE\main.c:72: update = ~update;
   0937 E5 4D              2103 	mov	a,_update
   0939 F4                 2104 	cpl	a
   093A F5 4D              2105 	mov	_update,a
   093C                    2106 00114$:
                           2107 ;	E:\GitHub\8051finalMIDE\main.c:76: if (ms == 1000) {
   093C 74 E8              2108 	mov	a,#0xE8
   093E B5 74 0F           2109 	cjne	a,_ms,00138$
   0941 74 03              2110 	mov	a,#0x03
   0943 B5 75 0A           2111 	cjne	a,(_ms + 1),00138$
   0946 E4                 2112 	clr	a
   0947 B5 76 06           2113 	cjne	a,(_ms + 2),00138$
   094A E4                 2114 	clr	a
   094B B5 77 02           2115 	cjne	a,(_ms + 3),00138$
   094E 80 02              2116 	sjmp	00139$
   0950                    2117 00138$:
   0950 80 1B              2118 	sjmp	00116$
   0952                    2119 00139$:
                           2120 ;	E:\GitHub\8051finalMIDE\main.c:77: s++;
   0952 05 78              2121 	inc	_s
   0954 E4                 2122 	clr	a
   0955 B5 78 0C           2123 	cjne	a,_s,00140$
   0958 05 79              2124 	inc	(_s + 1)
   095A B5 79 07           2125 	cjne	a,(_s + 1),00140$
   095D 05 7A              2126 	inc	(_s + 2)
   095F B5 7A 02           2127 	cjne	a,(_s + 2),00140$
   0962 05 7B              2128 	inc	(_s + 3)
   0964                    2129 00140$:
                           2130 ;	E:\GitHub\8051finalMIDE\main.c:78: ms = 0;
   0964 E4                 2131 	clr	a
   0965 F5 74              2132 	mov	_ms,a
   0967 F5 75              2133 	mov	(_ms + 1),a
   0969 F5 76              2134 	mov	(_ms + 2),a
   096B F5 77              2135 	mov	(_ms + 3),a
   096D                    2136 00116$:
                           2137 ;	E:\GitHub\8051finalMIDE\main.c:81: Hall_Pre = Hall_In;
   096D A2 B6              2138 	mov	c,_P3_6
   096F E4                 2139 	clr	a
   0970 33                 2140 	rlc	a
   0971 F5 52              2141 	mov	_Hall_Pre,a
   0973 D0 D0              2142 	pop	psw
   0975 D0 01              2143 	pop	(0+1)
   0977 D0 00              2144 	pop	(0+0)
   0979 D0 07              2145 	pop	(0+7)
   097B D0 06              2146 	pop	(0+6)
   097D D0 05              2147 	pop	(0+5)
   097F D0 04              2148 	pop	(0+4)
   0981 D0 03              2149 	pop	(0+3)
   0983 D0 02              2150 	pop	(0+2)
   0985 D0 83              2151 	pop	dph
   0987 D0 82              2152 	pop	dpl
   0989 D0 F0              2153 	pop	b
   098B D0 E0              2154 	pop	acc
   098D D0 20              2155 	pop	bits
   098F 32                 2156 	reti
                           2157 ;------------------------------------------------------------
                           2158 ;Allocation info for local variables in function 'main'
                           2159 ;------------------------------------------------------------
                           2160 ;accel_x                   Allocated to registers r2 r3 
                           2161 ;accel_y                   Allocated to stack - offset 1
                           2162 ;accel_z                   Allocated to registers 
                           2163 ;i                         Allocated to registers r4 
                           2164 ;patt                      Allocated to stack - offset 3
                           2165 ;nxt_x                     Allocated to registers r5 
                           2166 ;nxt_y                     Allocated to registers r6 
                           2167 ;nxt_m                     Allocated to registers r7 
                           2168 ;sloc0                     Allocated to stack - offset 12
                           2169 ;sloc1                     Allocated to stack - offset 4
                           2170 ;------------------------------------------------------------
                           2171 ;	E:\GitHub\8051finalMIDE\main.c:85: void main()
                           2172 ;	-----------------------------------------
                           2173 ;	 function main
                           2174 ;	-----------------------------------------
   0990                    2175 _main:
   0990 C0 08              2176 	push	_bp
   0992 E5 81              2177 	mov	a,sp
   0994 F5 08              2178 	mov	_bp,a
   0996 24 04              2179 	add	a,#0x04
   0998 F5 81              2180 	mov	sp,a
                           2181 ;	E:\GitHub\8051finalMIDE\main.c:87: int accel_x = 0, accel_y = 0, accel_z = 0;
                           2182 ;	E:\GitHub\8051finalMIDE\main.c:88: UC i, patt = 0, nxt_x, nxt_y, nxt_m;
   099A E4                 2183 	clr	a
   099B FA                 2184 	mov	r2,a
   099C FB                 2185 	mov	r3,a
   099D E5 08              2186 	mov	a,_bp
   099F 24 03              2187 	add	a,#0x03
   09A1 F8                 2188 	mov	r0,a
   09A2 76 00              2189 	mov	@r0,#0x00
                           2190 ;	E:\GitHub\8051finalMIDE\main.c:89: SDA = 1;
   09A4 D2 81              2191 	setb	_P0_1
                           2192 ;	E:\GitHub\8051finalMIDE\main.c:90: SCL = 1;
   09A6 D2 80              2193 	setb	_P0_0
                           2194 ;	E:\GitHub\8051finalMIDE\main.c:91: MAT_SSD_INIT();
   09A8 C0 02              2195 	push	ar2
   09AA C0 03              2196 	push	ar3
   09AC 12 07 D0           2197 	lcall	_MAT_SSD_INIT
                           2198 ;	E:\GitHub\8051finalMIDE\main.c:92: MPU6050_INIT();
   09AF 12 02 83           2199 	lcall	_MPU6050_INIT
   09B2 D0 03              2200 	pop	ar3
   09B4 D0 02              2201 	pop	ar2
                           2202 ;	E:\GitHub\8051finalMIDE\main.c:94: TMOD = 0x01;									// Set Timer 1 to  mode 0 & T imer 0 mode 1. (16-bit timer)
   09B6 75 89 01           2203 	mov	_TMOD,#0x01
                           2204 ;	E:\GitHub\8051finalMIDE\main.c:95: TH0 = (65536-1000) / 256;						// Load initial higher 8 bits into Timer 0
   09B9 75 8C FC           2205 	mov	_TH0,#0xFC
                           2206 ;	E:\GitHub\8051finalMIDE\main.c:96: TL0 = (65536-1000) % 256;						// Load initial lower 8 bits into Timer 0
   09BC 75 8A 18           2207 	mov	_TL0,#0x18
                           2208 ;	E:\GitHub\8051finalMIDE\main.c:97: EA = 1;											// Enable all interrupt
   09BF D2 AF              2209 	setb	_EA
                           2210 ;	E:\GitHub\8051finalMIDE\main.c:98: ET0 = 1;										// Enable Timer 0 interrupt
   09C1 D2 A9              2211 	setb	_ET0
                           2212 ;	E:\GitHub\8051finalMIDE\main.c:99: TR0 = 1;										// Start Timer 0
   09C3 D2 8C              2213 	setb	_TR0
                           2214 ;	E:\GitHub\8051finalMIDE\main.c:101: State = 0;
   09C5 75 50 00           2215 	mov	_State,#0x00
                           2216 ;	E:\GitHub\8051finalMIDE\main.c:102: while(1) {
   09C8                    2217 00166$:
                           2218 ;	E:\GitHub\8051finalMIDE\main.c:104: if (State == 1) {
   09C8 74 01              2219 	mov	a,#0x01
   09CA B5 50 02           2220 	cjne	a,_State,00217$
   09CD 80 03              2221 	sjmp	00218$
   09CF                    2222 00217$:
   09CF 02 0D 6E           2223 	ljmp	00162$
   09D2                    2224 00218$:
                           2225 ;	E:\GitHub\8051finalMIDE\main.c:105: if (update) {
   09D2 E5 4D              2226 	mov	a,_update
   09D4 70 03              2227 	jnz	00219$
   09D6 02 0C 50           2228 	ljmp	00152$
   09D9                    2229 00219$:
                           2230 ;	E:\GitHub\8051finalMIDE\main.c:106: readMPU6050_AccelData(&accel_data[0]);
   09D9 90 00 24           2231 	mov	dptr,#_accel_data
   09DC 75 F0 40           2232 	mov	b,#0x40
   09DF 12 03 87           2233 	lcall	_readMPU6050_AccelData
                           2234 ;	E:\GitHub\8051finalMIDE\main.c:107: accel_x = accel_data[0];
   09E2 AA 24              2235 	mov	r2,_accel_data
   09E4 AB 25              2236 	mov	r3,(_accel_data + 1)
                           2237 ;	E:\GitHub\8051finalMIDE\main.c:108: accel_y = accel_data[1];
   09E6 A8 08              2238 	mov	r0,_bp
   09E8 08                 2239 	inc	r0
   09E9 A6 26              2240 	mov	@r0,(_accel_data + 0x0002)
   09EB 08                 2241 	inc	r0
   09EC A6 27              2242 	mov	@r0,((_accel_data + 0x0002) + 1)
                           2243 ;	E:\GitHub\8051finalMIDE\main.c:111: nxt_m = ball_m;
   09EE AF 46              2244 	mov	r7,_ball_m
                           2245 ;	E:\GitHub\8051finalMIDE\main.c:112: nxt_x = ball_x;
   09F0 AD 48              2246 	mov	r5,_ball_x
                           2247 ;	E:\GitHub\8051finalMIDE\main.c:113: nxt_y = ball_y;
   09F2 AE 4A              2248 	mov	r6,_ball_y
                           2249 ;	E:\GitHub\8051finalMIDE\main.c:114: if (accel_x > 4000 && accel_y > 4000) {
   09F4 C3                 2250 	clr	c
   09F5 74 A0              2251 	mov	a,#0xA0
   09F7 9A                 2252 	subb	a,r2
   09F8 74 8F              2253 	mov	a,#(0x0F ^ 0x80)
   09FA 8B F0              2254 	mov	b,r3
   09FC 63 F0 80           2255 	xrl	b,#0x80
   09FF 95 F0              2256 	subb	a,b
   0A01 E4                 2257 	clr	a
   0A02 33                 2258 	rlc	a
   0A03 FC                 2259 	mov	r4,a
   0A04 60 35              2260 	jz	00129$
   0A06 A8 08              2261 	mov	r0,_bp
   0A08 08                 2262 	inc	r0
   0A09 C3                 2263 	clr	c
   0A0A 74 A0              2264 	mov	a,#0xA0
   0A0C 96                 2265 	subb	a,@r0
   0A0D 74 8F              2266 	mov	a,#(0x0F ^ 0x80)
   0A0F 08                 2267 	inc	r0
   0A10 86 F0              2268 	mov	b,@r0
   0A12 63 F0 80           2269 	xrl	b,#0x80
   0A15 95 F0              2270 	subb	a,b
   0A17 50 22              2271 	jnc	00129$
                           2272 ;	E:\GitHub\8051finalMIDE\main.c:116: patt = 0x10;
   0A19 E5 08              2273 	mov	a,_bp
   0A1B 24 03              2274 	add	a,#0x03
   0A1D F8                 2275 	mov	r0,a
   0A1E 76 10              2276 	mov	@r0,#0x10
                           2277 ;	E:\GitHub\8051finalMIDE\main.c:117: if (ball_x < 7) nxt_x = ball_x + 1;
   0A20 C3                 2278 	clr	c
   0A21 E5 48              2279 	mov	a,_ball_x
   0A23 94 07              2280 	subb	a,#0x07
   0A25 E5 49              2281 	mov	a,(_ball_x + 1)
   0A27 64 80              2282 	xrl	a,#0x80
   0A29 94 80              2283 	subb	a,#0x80
   0A2B 40 03              2284 	jc	00222$
   0A2D 02 0B 36           2285 	ljmp	00130$
   0A30                    2286 00222$:
   0A30 C0 07              2287 	push	ar7
   0A32 E5 48              2288 	mov	a,_ball_x
   0A34 04                 2289 	inc	a
   0A35 FD                 2290 	mov	r5,a
   0A36 D0 07              2291 	pop	ar7
   0A38 02 0B 36           2292 	ljmp	00130$
   0A3B                    2293 00129$:
                           2294 ;	E:\GitHub\8051finalMIDE\main.c:118: } else if (accel_x < -4000 && accel_y > 4000) {
   0A3B E5 08              2295 	mov	a,_bp
   0A3D 24 04              2296 	add	a,#0x04
   0A3F F8                 2297 	mov	r0,a
   0A40 C3                 2298 	clr	c
   0A41 EA                 2299 	mov	a,r2
   0A42 94 60              2300 	subb	a,#0x60
   0A44 EB                 2301 	mov	a,r3
   0A45 64 80              2302 	xrl	a,#0x80
   0A47 94 70              2303 	subb	a,#0x70
   0A49 E4                 2304 	clr	a
   0A4A 33                 2305 	rlc	a
   0A4B F6                 2306 	mov	@r0,a
   0A4C E5 08              2307 	mov	a,_bp
   0A4E 24 04              2308 	add	a,#0x04
   0A50 F8                 2309 	mov	r0,a
   0A51 E6                 2310 	mov	a,@r0
   0A52 60 35              2311 	jz	00125$
   0A54 A8 08              2312 	mov	r0,_bp
   0A56 08                 2313 	inc	r0
   0A57 C3                 2314 	clr	c
   0A58 74 A0              2315 	mov	a,#0xA0
   0A5A 96                 2316 	subb	a,@r0
   0A5B 74 8F              2317 	mov	a,#(0x0F ^ 0x80)
   0A5D 08                 2318 	inc	r0
   0A5E 86 F0              2319 	mov	b,@r0
   0A60 63 F0 80           2320 	xrl	b,#0x80
   0A63 95 F0              2321 	subb	a,b
   0A65 50 22              2322 	jnc	00125$
                           2323 ;	E:\GitHub\8051finalMIDE\main.c:120: patt = 0x20;
   0A67 E5 08              2324 	mov	a,_bp
   0A69 24 03              2325 	add	a,#0x03
   0A6B F8                 2326 	mov	r0,a
   0A6C 76 20              2327 	mov	@r0,#0x20
                           2328 ;	E:\GitHub\8051finalMIDE\main.c:121: if (ball_y < 7) nxt_y = ball_y + 1;
   0A6E C3                 2329 	clr	c
   0A6F E5 4A              2330 	mov	a,_ball_y
   0A71 94 07              2331 	subb	a,#0x07
   0A73 E5 4B              2332 	mov	a,(_ball_y + 1)
   0A75 64 80              2333 	xrl	a,#0x80
   0A77 94 80              2334 	subb	a,#0x80
   0A79 40 03              2335 	jc	00225$
   0A7B 02 0B 36           2336 	ljmp	00130$
   0A7E                    2337 00225$:
   0A7E C0 07              2338 	push	ar7
   0A80 E5 4A              2339 	mov	a,_ball_y
   0A82 04                 2340 	inc	a
   0A83 FE                 2341 	mov	r6,a
   0A84 D0 07              2342 	pop	ar7
   0A86 02 0B 36           2343 	ljmp	00130$
   0A89                    2344 00125$:
                           2345 ;	E:\GitHub\8051finalMIDE\main.c:122: } else if (accel_x < -4000 && accel_y < -4000) {
   0A89 E5 08              2346 	mov	a,_bp
   0A8B 24 04              2347 	add	a,#0x04
   0A8D F8                 2348 	mov	r0,a
   0A8E E6                 2349 	mov	a,@r0
   0A8F 60 29              2350 	jz	00121$
   0A91 A8 08              2351 	mov	r0,_bp
   0A93 08                 2352 	inc	r0
   0A94 C3                 2353 	clr	c
   0A95 E6                 2354 	mov	a,@r0
   0A96 94 60              2355 	subb	a,#0x60
   0A98 08                 2356 	inc	r0
   0A99 E6                 2357 	mov	a,@r0
   0A9A 64 80              2358 	xrl	a,#0x80
   0A9C 94 70              2359 	subb	a,#0x70
   0A9E 50 1A              2360 	jnc	00121$
                           2361 ;	E:\GitHub\8051finalMIDE\main.c:124: patt = 0x40;
   0AA0 E5 08              2362 	mov	a,_bp
   0AA2 24 03              2363 	add	a,#0x03
   0AA4 F8                 2364 	mov	r0,a
   0AA5 76 40              2365 	mov	@r0,#0x40
                           2366 ;	E:\GitHub\8051finalMIDE\main.c:125: if (ball_x != 0)    nxt_x = ball_x - 1;
   0AA7 E5 48              2367 	mov	a,_ball_x
   0AA9 45 49              2368 	orl	a,(_ball_x + 1)
   0AAB 70 03              2369 	jnz	00228$
   0AAD 02 0B 36           2370 	ljmp	00130$
   0AB0                    2371 00228$:
   0AB0 C0 07              2372 	push	ar7
   0AB2 E5 48              2373 	mov	a,_ball_x
   0AB4 14                 2374 	dec	a
   0AB5 FD                 2375 	mov	r5,a
   0AB6 D0 07              2376 	pop	ar7
   0AB8 80 7C              2377 	sjmp	00130$
   0ABA                    2378 00121$:
                           2379 ;	E:\GitHub\8051finalMIDE\main.c:126: } else if (accel_x > 4000 && accel_y < -4000) {
   0ABA EC                 2380 	mov	a,r4
   0ABB 60 26              2381 	jz	00117$
   0ABD A8 08              2382 	mov	r0,_bp
   0ABF 08                 2383 	inc	r0
   0AC0 C3                 2384 	clr	c
   0AC1 E6                 2385 	mov	a,@r0
   0AC2 94 60              2386 	subb	a,#0x60
   0AC4 08                 2387 	inc	r0
   0AC5 E6                 2388 	mov	a,@r0
   0AC6 64 80              2389 	xrl	a,#0x80
   0AC8 94 70              2390 	subb	a,#0x70
   0ACA 50 17              2391 	jnc	00117$
                           2392 ;	E:\GitHub\8051finalMIDE\main.c:128: patt = 0x80;
   0ACC E5 08              2393 	mov	a,_bp
   0ACE 24 03              2394 	add	a,#0x03
   0AD0 F8                 2395 	mov	r0,a
   0AD1 76 80              2396 	mov	@r0,#0x80
                           2397 ;	E:\GitHub\8051finalMIDE\main.c:129: if (ball_y != 0)    nxt_y = ball_y - 1;
   0AD3 E5 4A              2398 	mov	a,_ball_y
   0AD5 45 4B              2399 	orl	a,(_ball_y + 1)
   0AD7 60 5D              2400 	jz	00130$
   0AD9 C0 07              2401 	push	ar7
   0ADB E5 4A              2402 	mov	a,_ball_y
   0ADD 14                 2403 	dec	a
   0ADE FE                 2404 	mov	r6,a
   0ADF D0 07              2405 	pop	ar7
   0AE1 80 53              2406 	sjmp	00130$
   0AE3                    2407 00117$:
                           2408 ;	E:\GitHub\8051finalMIDE\main.c:130: } else if (accel_y > 4000) {
   0AE3 A8 08              2409 	mov	r0,_bp
   0AE5 08                 2410 	inc	r0
   0AE6 C3                 2411 	clr	c
   0AE7 74 A0              2412 	mov	a,#0xA0
   0AE9 96                 2413 	subb	a,@r0
   0AEA 74 8F              2414 	mov	a,#(0x0F ^ 0x80)
   0AEC 08                 2415 	inc	r0
   0AED 86 F0              2416 	mov	b,@r0
   0AEF 63 F0 80           2417 	xrl	b,#0x80
   0AF2 95 F0              2418 	subb	a,b
   0AF4 50 39              2419 	jnc	00114$
                           2420 ;	E:\GitHub\8051finalMIDE\main.c:131: if (ball_m == 0 && ball_x == 7 && ball_y == 7) {
   0AF6 E5 46              2421 	mov	a,_ball_m
   0AF8 45 47              2422 	orl	a,(_ball_m + 1)
   0AFA 70 2A              2423 	jnz	00110$
   0AFC 74 07              2424 	mov	a,#0x07
   0AFE B5 48 06           2425 	cjne	a,_ball_x,00234$
   0B01 E4                 2426 	clr	a
   0B02 B5 49 02           2427 	cjne	a,(_ball_x + 1),00234$
   0B05 80 02              2428 	sjmp	00235$
   0B07                    2429 00234$:
   0B07 80 1D              2430 	sjmp	00110$
   0B09                    2431 00235$:
   0B09 74 07              2432 	mov	a,#0x07
   0B0B B5 4A 06           2433 	cjne	a,_ball_y,00236$
   0B0E E4                 2434 	clr	a
   0B0F B5 4B 02           2435 	cjne	a,(_ball_y + 1),00236$
   0B12 80 02              2436 	sjmp	00237$
   0B14                    2437 00236$:
   0B14 80 10              2438 	sjmp	00110$
   0B16                    2439 00237$:
                           2440 ;	E:\GitHub\8051finalMIDE\main.c:132: nxt_m = ball_m + 1;
   0B16 C0 02              2441 	push	ar2
   0B18 C0 03              2442 	push	ar3
   0B1A E5 46              2443 	mov	a,_ball_m
   0B1C 04                 2444 	inc	a
   0B1D FF                 2445 	mov	r7,a
                           2446 ;	E:\GitHub\8051finalMIDE\main.c:133: nxt_x = nxt_y = 0;
   0B1E 7E 00              2447 	mov	r6,#0x00
   0B20 7D 00              2448 	mov	r5,#0x00
                           2449 ;	E:\GitHub\8051finalMIDE\main.c:218: P1 = ~patt;
   0B22 D0 03              2450 	pop	ar3
   0B24 D0 02              2451 	pop	ar2
                           2452 ;	E:\GitHub\8051finalMIDE\main.c:133: nxt_x = nxt_y = 0;
   0B26                    2453 00110$:
                           2454 ;	E:\GitHub\8051finalMIDE\main.c:135: patt = 0x04;
   0B26 E5 08              2455 	mov	a,_bp
   0B28 24 03              2456 	add	a,#0x03
   0B2A F8                 2457 	mov	r0,a
   0B2B 76 04              2458 	mov	@r0,#0x04
   0B2D 80 07              2459 	sjmp	00130$
   0B2F                    2460 00114$:
                           2461 ;	E:\GitHub\8051finalMIDE\main.c:137: patt = 0x02;
   0B2F E5 08              2462 	mov	a,_bp
   0B31 24 03              2463 	add	a,#0x03
   0B33 F8                 2464 	mov	r0,a
   0B34 76 02              2465 	mov	@r0,#0x02
   0B36                    2466 00130$:
                           2467 ;	E:\GitHub\8051finalMIDE\main.c:139: if (nxt_m == ball_m) {
   0B36 7C 00              2468 	mov	r4,#0x00
   0B38 EF                 2469 	mov	a,r7
   0B39 B5 46 06           2470 	cjne	a,_ball_m,00238$
   0B3C EC                 2471 	mov	a,r4
   0B3D B5 47 02           2472 	cjne	a,(_ball_m + 1),00238$
   0B40 80 03              2473 	sjmp	00239$
   0B42                    2474 00238$:
   0B42 02 0C 42           2475 	ljmp	00150$
   0B45                    2476 00239$:
                           2477 ;	E:\GitHub\8051finalMIDE\main.c:140: if (ball_m == 0) {
   0B45 E5 46              2478 	mov	a,_ball_m
   0B47 45 47              2479 	orl	a,(_ball_m + 1)
   0B49 60 03              2480 	jz	00240$
   0B4B 02 0B CA           2481 	ljmp	00147$
   0B4E                    2482 00240$:
                           2483 ;	E:\GitHub\8051finalMIDE\main.c:141: if (nxt_x != ball_x && M1[nxt_x] & 0x80 >> ball_y)
   0B4E C0 07              2484 	push	ar7
   0B50 C0 04              2485 	push	ar4
   0B52 8D 04              2486 	mov	ar4,r5
   0B54 7F 00              2487 	mov	r7,#0x00
   0B56 EC                 2488 	mov	a,r4
   0B57 B5 48 0A           2489 	cjne	a,_ball_x,00241$
   0B5A EF                 2490 	mov	a,r7
   0B5B B5 49 06           2491 	cjne	a,(_ball_x + 1),00241$
   0B5E D0 04              2492 	pop	ar4
   0B60 D0 07              2493 	pop	ar7
   0B62 80 28              2494 	sjmp	00136$
   0B64                    2495 00241$:
   0B64 D0 04              2496 	pop	ar4
   0B66 D0 07              2497 	pop	ar7
   0B68 C0 07              2498 	push	ar7
   0B6A C0 04              2499 	push	ar4
   0B6C ED                 2500 	mov	a,r5
   0B6D 24 64              2501 	add	a,#_M1
   0B6F F8                 2502 	mov	r0,a
   0B70 86 04              2503 	mov	ar4,@r0
   0B72 85 4A F0           2504 	mov	b,_ball_y
   0B75 05 F0              2505 	inc	b
   0B77 74 80              2506 	mov	a,#0x80
   0B79 80 02              2507 	sjmp	00243$
   0B7B                    2508 00242$:
   0B7B C3                 2509 	clr	c
   0B7C 13                 2510 	rrc	a
   0B7D                    2511 00243$:
   0B7D D5 F0 FB           2512 	djnz	b,00242$
   0B80 5C                 2513 	anl	a,r4
   0B81 D0 04              2514 	pop	ar4
   0B83 D0 07              2515 	pop	ar7
   0B85 60 05              2516 	jz	00136$
                           2517 ;	E:\GitHub\8051finalMIDE\main.c:142: nxt_x = ball_x;
   0B87 AD 48              2518 	mov	r5,_ball_x
   0B89 02 0C 42           2519 	ljmp	00150$
   0B8C                    2520 00136$:
                           2521 ;	E:\GitHub\8051finalMIDE\main.c:143: else if (nxt_y != ball_y && M1[ball_x] & 0x80 >> nxt_y)
   0B8C C0 07              2522 	push	ar7
   0B8E C0 04              2523 	push	ar4
   0B90 8E 04              2524 	mov	ar4,r6
   0B92 7F 00              2525 	mov	r7,#0x00
   0B94 EC                 2526 	mov	a,r4
   0B95 B5 4A 0B           2527 	cjne	a,_ball_y,00245$
   0B98 EF                 2528 	mov	a,r7
   0B99 B5 4B 07           2529 	cjne	a,(_ball_y + 1),00245$
   0B9C D0 04              2530 	pop	ar4
   0B9E D0 07              2531 	pop	ar7
   0BA0 02 0C 42           2532 	ljmp	00150$
   0BA3                    2533 00245$:
   0BA3 D0 04              2534 	pop	ar4
   0BA5 D0 07              2535 	pop	ar7
   0BA7 C0 07              2536 	push	ar7
   0BA9 C0 04              2537 	push	ar4
   0BAB E5 48              2538 	mov	a,_ball_x
   0BAD 24 64              2539 	add	a,#_M1
   0BAF F8                 2540 	mov	r0,a
   0BB0 86 04              2541 	mov	ar4,@r0
   0BB2 8E F0              2542 	mov	b,r6
   0BB4 05 F0              2543 	inc	b
   0BB6 74 80              2544 	mov	a,#0x80
   0BB8 80 02              2545 	sjmp	00247$
   0BBA                    2546 00246$:
   0BBA C3                 2547 	clr	c
   0BBB 13                 2548 	rrc	a
   0BBC                    2549 00247$:
   0BBC D5 F0 FB           2550 	djnz	b,00246$
   0BBF 5C                 2551 	anl	a,r4
   0BC0 D0 04              2552 	pop	ar4
   0BC2 D0 07              2553 	pop	ar7
   0BC4 60 7C              2554 	jz	00150$
                           2555 ;	E:\GitHub\8051finalMIDE\main.c:144: nxt_y = ball_y;
   0BC6 AE 4A              2556 	mov	r6,_ball_y
   0BC8 80 78              2557 	sjmp	00150$
   0BCA                    2558 00147$:
                           2559 ;	E:\GitHub\8051finalMIDE\main.c:146: if (nxt_x != ball_x && M2[nxt_x] & 0x80 >> ball_y)
   0BCA C0 07              2560 	push	ar7
   0BCC C0 04              2561 	push	ar4
   0BCE 8D 04              2562 	mov	ar4,r5
   0BD0 7F 00              2563 	mov	r7,#0x00
   0BD2 EC                 2564 	mov	a,r4
   0BD3 B5 48 0A           2565 	cjne	a,_ball_x,00249$
   0BD6 EF                 2566 	mov	a,r7
   0BD7 B5 49 06           2567 	cjne	a,(_ball_x + 1),00249$
   0BDA D0 04              2568 	pop	ar4
   0BDC D0 07              2569 	pop	ar7
   0BDE 80 27              2570 	sjmp	00143$
   0BE0                    2571 00249$:
   0BE0 D0 04              2572 	pop	ar4
   0BE2 D0 07              2573 	pop	ar7
   0BE4 C0 07              2574 	push	ar7
   0BE6 C0 04              2575 	push	ar4
   0BE8 ED                 2576 	mov	a,r5
   0BE9 24 6C              2577 	add	a,#_M2
   0BEB F8                 2578 	mov	r0,a
   0BEC 86 04              2579 	mov	ar4,@r0
   0BEE 85 4A F0           2580 	mov	b,_ball_y
   0BF1 05 F0              2581 	inc	b
   0BF3 74 80              2582 	mov	a,#0x80
   0BF5 80 02              2583 	sjmp	00251$
   0BF7                    2584 00250$:
   0BF7 C3                 2585 	clr	c
   0BF8 13                 2586 	rrc	a
   0BF9                    2587 00251$:
   0BF9 D5 F0 FB           2588 	djnz	b,00250$
   0BFC 5C                 2589 	anl	a,r4
   0BFD D0 04              2590 	pop	ar4
   0BFF D0 07              2591 	pop	ar7
   0C01 60 04              2592 	jz	00143$
                           2593 ;	E:\GitHub\8051finalMIDE\main.c:147: nxt_x = ball_x;
   0C03 AD 48              2594 	mov	r5,_ball_x
   0C05 80 3B              2595 	sjmp	00150$
   0C07                    2596 00143$:
                           2597 ;	E:\GitHub\8051finalMIDE\main.c:148: else if (nxt_y != ball_y && M2[ball_x] & 0x80 >> nxt_y)
   0C07 C0 07              2598 	push	ar7
   0C09 C0 04              2599 	push	ar4
   0C0B 8E 04              2600 	mov	ar4,r6
   0C0D 7F 00              2601 	mov	r7,#0x00
   0C0F EC                 2602 	mov	a,r4
   0C10 B5 4A 0A           2603 	cjne	a,_ball_y,00253$
   0C13 EF                 2604 	mov	a,r7
   0C14 B5 4B 06           2605 	cjne	a,(_ball_y + 1),00253$
   0C17 D0 04              2606 	pop	ar4
   0C19 D0 07              2607 	pop	ar7
   0C1B 80 25              2608 	sjmp	00150$
   0C1D                    2609 00253$:
   0C1D D0 04              2610 	pop	ar4
   0C1F D0 07              2611 	pop	ar7
   0C21 C0 07              2612 	push	ar7
   0C23 C0 04              2613 	push	ar4
   0C25 E5 48              2614 	mov	a,_ball_x
   0C27 24 6C              2615 	add	a,#_M2
   0C29 F8                 2616 	mov	r0,a
   0C2A 86 04              2617 	mov	ar4,@r0
   0C2C 8E F0              2618 	mov	b,r6
   0C2E 05 F0              2619 	inc	b
   0C30 74 80              2620 	mov	a,#0x80
   0C32 80 02              2621 	sjmp	00255$
   0C34                    2622 00254$:
   0C34 C3                 2623 	clr	c
   0C35 13                 2624 	rrc	a
   0C36                    2625 00255$:
   0C36 D5 F0 FB           2626 	djnz	b,00254$
   0C39 5C                 2627 	anl	a,r4
   0C3A D0 04              2628 	pop	ar4
   0C3C D0 07              2629 	pop	ar7
   0C3E 60 02              2630 	jz	00150$
                           2631 ;	E:\GitHub\8051finalMIDE\main.c:149: nxt_y = ball_y;
   0C40 AE 4A              2632 	mov	r6,_ball_y
   0C42                    2633 00150$:
                           2634 ;	E:\GitHub\8051finalMIDE\main.c:152: ball_m = nxt_m;
   0C42 8F 46              2635 	mov	_ball_m,r7
   0C44 8C 47              2636 	mov	(_ball_m + 1),r4
                           2637 ;	E:\GitHub\8051finalMIDE\main.c:153: ball_x = nxt_x;
   0C46 8D 48              2638 	mov	_ball_x,r5
   0C48 75 49 00           2639 	mov	(_ball_x + 1),#0x00
                           2640 ;	E:\GitHub\8051finalMIDE\main.c:154: ball_y = nxt_y;
   0C4B 8E 4A              2641 	mov	_ball_y,r6
   0C4D 75 4B 00           2642 	mov	(_ball_y + 1),#0x00
   0C50                    2643 00152$:
                           2644 ;	E:\GitHub\8051finalMIDE\main.c:157: if (flash) {
   0C50 E5 4C              2645 	mov	a,_flash
   0C52 70 03              2646 	jnz	00257$
   0C54 02 0D 3A           2647 	ljmp	00159$
   0C57                    2648 00257$:
                           2649 ;	E:\GitHub\8051finalMIDE\main.c:158: patt |= 0x01;
   0C57 E5 08              2650 	mov	a,_bp
   0C59 24 03              2651 	add	a,#0x03
   0C5B F8                 2652 	mov	r0,a
   0C5C E6                 2653 	mov	a,@r0
   0C5D 44 01              2654 	orl	a,#0x01
   0C5F F6                 2655 	mov	@r0,a
                           2656 ;	E:\GitHub\8051finalMIDE\main.c:159: if (ball_m == 0) {
   0C60 E5 46              2657 	mov	a,_ball_m
   0C62 45 47              2658 	orl	a,(_ball_m + 1)
                           2659 ;	E:\GitHub\8051finalMIDE\main.c:160: for (i = 0; i < 8; i++) CUR_M[i] = M1[i];
   0C64 70 63              2660 	jnz	00156$
   0C66 FC                 2661 	mov	r4,a
   0C67                    2662 00168$:
   0C67 BC 08 00           2663 	cjne	r4,#0x08,00259$
   0C6A                    2664 00259$:
   0C6A 50 0F              2665 	jnc	00171$
   0C6C EC                 2666 	mov	a,r4
   0C6D 24 5C              2667 	add	a,#_CUR_M
   0C6F F8                 2668 	mov	r0,a
   0C70 EC                 2669 	mov	a,r4
   0C71 24 64              2670 	add	a,#_M1
   0C73 F9                 2671 	mov	r1,a
   0C74 87 05              2672 	mov	ar5,@r1
   0C76 A6 05              2673 	mov	@r0,ar5
   0C78 0C                 2674 	inc	r4
   0C79 80 EC              2675 	sjmp	00168$
   0C7B                    2676 00171$:
                           2677 ;	E:\GitHub\8051finalMIDE\main.c:161: CUR_M[ball_x] |= 0x80 >> ball_y;
   0C7B E5 48              2678 	mov	a,_ball_x
   0C7D 24 5C              2679 	add	a,#_CUR_M
   0C7F F8                 2680 	mov	r0,a
   0C80 86 04              2681 	mov	ar4,@r0
   0C82 85 4A F0           2682 	mov	b,_ball_y
   0C85 05 F0              2683 	inc	b
   0C87 74 80              2684 	mov	a,#0x80
   0C89 80 02              2685 	sjmp	00262$
   0C8B                    2686 00261$:
   0C8B C3                 2687 	clr	c
   0C8C 13                 2688 	rrc	a
   0C8D                    2689 00262$:
   0C8D D5 F0 FB           2690 	djnz	b,00261$
   0C90 4C                 2691 	orl	a,r4
   0C91 F6                 2692 	mov	@r0,a
                           2693 ;	E:\GitHub\8051finalMIDE\main.c:162: MAT_SSDnum_Show(CUR_M, M2, accel_x);
   0C92 8A 04              2694 	mov	ar4,r2
   0C94 EB                 2695 	mov	a,r3
   0C95 FD                 2696 	mov	r5,a
   0C96 33                 2697 	rlc	a
   0C97 95 E0              2698 	subb	a,acc
   0C99 FE                 2699 	mov	r6,a
   0C9A FF                 2700 	mov	r7,a
   0C9B C0 02              2701 	push	ar2
   0C9D C0 03              2702 	push	ar3
   0C9F C0 04              2703 	push	ar4
   0CA1 C0 05              2704 	push	ar5
   0CA3 C0 06              2705 	push	ar6
   0CA5 C0 07              2706 	push	ar7
   0CA7 74 6C              2707 	mov	a,#_M2
   0CA9 C0 E0              2708 	push	acc
   0CAB 74 00              2709 	mov	a,#(_M2 >> 8)
   0CAD C0 E0              2710 	push	acc
   0CAF 74 40              2711 	mov	a,#0x40
   0CB1 C0 E0              2712 	push	acc
   0CB3 90 00 5C           2713 	mov	dptr,#_CUR_M
   0CB6 75 F0 40           2714 	mov	b,#0x40
   0CB9 12 06 98           2715 	lcall	_MAT_SSDnum_Show
   0CBC E5 81              2716 	mov	a,sp
   0CBE 24 F9              2717 	add	a,#0xf9
   0CC0 F5 81              2718 	mov	sp,a
   0CC2 D0 03              2719 	pop	ar3
   0CC4 D0 02              2720 	pop	ar2
   0CC6 02 0D 6E           2721 	ljmp	00162$
   0CC9                    2722 00156$:
                           2723 ;	E:\GitHub\8051finalMIDE\main.c:163: } else if (ball_m == 1) {
   0CC9 74 01              2724 	mov	a,#0x01
   0CCB B5 46 06           2725 	cjne	a,_ball_m,00263$
   0CCE E4                 2726 	clr	a
   0CCF B5 47 02           2727 	cjne	a,(_ball_m + 1),00263$
   0CD2 80 03              2728 	sjmp	00264$
   0CD4                    2729 00263$:
   0CD4 02 0D 6E           2730 	ljmp	00162$
   0CD7                    2731 00264$:
                           2732 ;	E:\GitHub\8051finalMIDE\main.c:164: for (i = 0; i < 8; i++) CUR_M[i] = M2[i];
   0CD7 7C 00              2733 	mov	r4,#0x00
   0CD9                    2734 00172$:
   0CD9 BC 08 00           2735 	cjne	r4,#0x08,00265$
   0CDC                    2736 00265$:
   0CDC 50 0F              2737 	jnc	00175$
   0CDE EC                 2738 	mov	a,r4
   0CDF 24 5C              2739 	add	a,#_CUR_M
   0CE1 F8                 2740 	mov	r0,a
   0CE2 EC                 2741 	mov	a,r4
   0CE3 24 6C              2742 	add	a,#_M2
   0CE5 F9                 2743 	mov	r1,a
   0CE6 87 05              2744 	mov	ar5,@r1
   0CE8 A6 05              2745 	mov	@r0,ar5
   0CEA 0C                 2746 	inc	r4
   0CEB 80 EC              2747 	sjmp	00172$
   0CED                    2748 00175$:
                           2749 ;	E:\GitHub\8051finalMIDE\main.c:165: CUR_M[ball_x] |= 0x80 >> ball_y;
   0CED E5 48              2750 	mov	a,_ball_x
   0CEF 24 5C              2751 	add	a,#_CUR_M
   0CF1 F8                 2752 	mov	r0,a
   0CF2 86 04              2753 	mov	ar4,@r0
   0CF4 85 4A F0           2754 	mov	b,_ball_y
   0CF7 05 F0              2755 	inc	b
   0CF9 74 80              2756 	mov	a,#0x80
   0CFB 80 02              2757 	sjmp	00268$
   0CFD                    2758 00267$:
   0CFD C3                 2759 	clr	c
   0CFE 13                 2760 	rrc	a
   0CFF                    2761 00268$:
   0CFF D5 F0 FB           2762 	djnz	b,00267$
   0D02 4C                 2763 	orl	a,r4
   0D03 F6                 2764 	mov	@r0,a
                           2765 ;	E:\GitHub\8051finalMIDE\main.c:166: MAT_SSDnum_Show(M1, CUR_M, accel_x);
   0D04 8A 04              2766 	mov	ar4,r2
   0D06 EB                 2767 	mov	a,r3
   0D07 FD                 2768 	mov	r5,a
   0D08 33                 2769 	rlc	a
   0D09 95 E0              2770 	subb	a,acc
   0D0B FE                 2771 	mov	r6,a
   0D0C FF                 2772 	mov	r7,a
   0D0D C0 02              2773 	push	ar2
   0D0F C0 03              2774 	push	ar3
   0D11 C0 04              2775 	push	ar4
   0D13 C0 05              2776 	push	ar5
   0D15 C0 06              2777 	push	ar6
   0D17 C0 07              2778 	push	ar7
   0D19 74 5C              2779 	mov	a,#_CUR_M
   0D1B C0 E0              2780 	push	acc
   0D1D 74 00              2781 	mov	a,#(_CUR_M >> 8)
   0D1F C0 E0              2782 	push	acc
   0D21 74 40              2783 	mov	a,#0x40
   0D23 C0 E0              2784 	push	acc
   0D25 90 00 64           2785 	mov	dptr,#_M1
   0D28 75 F0 40           2786 	mov	b,#0x40
   0D2B 12 06 98           2787 	lcall	_MAT_SSDnum_Show
   0D2E E5 81              2788 	mov	a,sp
   0D30 24 F9              2789 	add	a,#0xf9
   0D32 F5 81              2790 	mov	sp,a
   0D34 D0 03              2791 	pop	ar3
   0D36 D0 02              2792 	pop	ar2
   0D38 80 34              2793 	sjmp	00162$
   0D3A                    2794 00159$:
                           2795 ;	E:\GitHub\8051finalMIDE\main.c:168: } else  MAT_SSDnum_Show(M1, M2, accel_x);
   0D3A 8A 04              2796 	mov	ar4,r2
   0D3C EB                 2797 	mov	a,r3
   0D3D FD                 2798 	mov	r5,a
   0D3E 33                 2799 	rlc	a
   0D3F 95 E0              2800 	subb	a,acc
   0D41 FE                 2801 	mov	r6,a
   0D42 FF                 2802 	mov	r7,a
   0D43 C0 02              2803 	push	ar2
   0D45 C0 03              2804 	push	ar3
   0D47 C0 04              2805 	push	ar4
   0D49 C0 05              2806 	push	ar5
   0D4B C0 06              2807 	push	ar6
   0D4D C0 07              2808 	push	ar7
   0D4F 74 6C              2809 	mov	a,#_M2
   0D51 C0 E0              2810 	push	acc
   0D53 74 00              2811 	mov	a,#(_M2 >> 8)
   0D55 C0 E0              2812 	push	acc
   0D57 74 40              2813 	mov	a,#0x40
   0D59 C0 E0              2814 	push	acc
   0D5B 90 00 64           2815 	mov	dptr,#_M1
   0D5E 75 F0 40           2816 	mov	b,#0x40
   0D61 12 06 98           2817 	lcall	_MAT_SSDnum_Show
   0D64 E5 81              2818 	mov	a,sp
   0D66 24 F9              2819 	add	a,#0xf9
   0D68 F5 81              2820 	mov	sp,a
   0D6A D0 03              2821 	pop	ar3
   0D6C D0 02              2822 	pop	ar2
   0D6E                    2823 00162$:
                           2824 ;	E:\GitHub\8051finalMIDE\main.c:214: if (depb1 == 1) InitGame();
   0D6E 74 01              2825 	mov	a,#0x01
   0D70 B5 4E 0B           2826 	cjne	a,_depb1,00164$
   0D73 C0 02              2827 	push	ar2
   0D75 C0 03              2828 	push	ar3
   0D77 12 08 6D           2829 	lcall	_InitGame
   0D7A D0 03              2830 	pop	ar3
   0D7C D0 02              2831 	pop	ar2
   0D7E                    2832 00164$:
                           2833 ;	E:\GitHub\8051finalMIDE\main.c:218: P1 = ~patt;
   0D7E E5 08              2834 	mov	a,_bp
   0D80 24 03              2835 	add	a,#0x03
   0D82 F8                 2836 	mov	r0,a
   0D83 E6                 2837 	mov	a,@r0
   0D84 F4                 2838 	cpl	a
   0D85 F5 90              2839 	mov	_P1,a
   0D87 02 09 C8           2840 	ljmp	00166$
   0D8A 85 08 81           2841 	mov	sp,_bp
   0D8D D0 08              2842 	pop	_bp
   0D8F 22                 2843 	ret
                           2844 	.area CSEG    (CODE)
                           2845 	.area CONST   (CODE)
                           2846 	.area XINIT   (CODE)
                           2847 	.area CABS    (ABS,CODE)
