/*
 $License:
   Copyright 2011 InvenSense, Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
  $
 */
/***************************************************************************** *
 * $Id: dmpDefault.c 5627 2011-06-10 22:34:18Z nroyer $
 ******************************************************************************/

/* WARNING: autogenerated code, do not modify */
/**
 *  @defgroup DMPDEFAULT
 *  @brief    Data and configuration for MLDmpDefaultOpen.
 *
 *  @{
 *      @file   inv_setup_dmp.c
 *      @brief  Data and configuration for MLDmpDefaultOpen.
 */

#include "mltypes.h"
#include "dmpDefault.h"
#include "dmpKey.h"
#include "dmpmap.h"
#include "ml.h"
#include "mpu.h"
#include "mldl.h"
#include "mldl_cfg.h"
#include "accel.h"

#define CFG_25  703
#define CFG_24  699
#define CFG_26  707
#define CFG_21  802
#define CFG_20  645
#define CFG_23  814
#define CFG_TAP4  808
#define CFG_TAP5  809
#define CFG_TAP6  810
#define CFG_1  783
#define CFG_TAP0  802
#define CFG_TAP1  804
#define CFG_TAP2  805
#define CFG_TAP3  806
#define FCFG_AZ  878
#define CFG_ORIENT_IRQ_1  715
#define CFG_ORIENT_IRQ_2  738
#define CFG_ORIENT_IRQ_3  743
#define CFG_TAP_QUANTIZE  647
#define FCFG_3  936
#define CFG_TAP_CLEAR_STICKY  817
#define FCFG_1  868
#define CFG_ACCEL_FILTER  968
#define FCFG_2  872
#define CFG_3D  521
#define CFG_3B  517
#define CFG_3C  519
#define FCFG_5  942
#define FCFG_4  857
#define FCFG_FSCALE  877
#define CFG_TAP_JERK  639
#define FCFG_6  996
#define CFG_12  797
#define FCFG_7  930
#define CFG_14  790
#define CFG_15  790
#define CFG_16  815
#define CFG_18  551
#define CFG_6  823
#define CFG_7  564
#define CFG_4  526
#define CFG_5  749
#define CFG_3  515
#define CFG_GYRO_SOURCE  777
#define CFG_8  772
#define CFG_9  778
#define CFG_ORIENT_2  733
#define CFG_ORIENT_1  713
#define FCFG_ACCEL_INPUT  904
#define CFG_TAP7  811
#define CFG_TAP_SAVE_ACCB  687
#define FCFG_ACCEL_INIT  831


#define D_0_22  (22)
#define D_0_24  (24)
#define D_0_36  (36)
#define D_0_52  (52)
#define D_0_96  (96)
#define D_0_104 (104)
#define D_0_108 (108)
#define D_0_163 (163)
#define D_0_188 (188)
#define D_0_192 (192)
#define D_0_224 (224)
#define D_0_228 (228)
#define D_0_232 (232)
#define D_0_236 (236)

#define D_1_2 (256 + 2)
#define D_1_4 (256 + 4)
#define D_1_8 (256 + 8)
#define D_1_10 (256 + 10)
#define D_1_24 (256 + 24)
#define D_1_28 (256 + 28)
#define D_1_92 (256 + 92)
#define D_1_96 (256 + 96)
#define D_1_98 (256 + 98)
#define D_1_106 (256 + 106)
#define D_1_108 (256 + 108)
#define D_1_112 (256 + 112)
#define D_1_128 (256 + 144)
#define D_1_152 (256 + 12)
#define D_1_168 (256 + 168)
#define D_1_175 (256 + 175)
#define D_1_178 (256 + 178)
#define D_1_236 (256 + 236)
#define D_1_244 (256 + 244)


static const tKeyLabel dmpTConfig[] = {
    {KEY_CFG_25, CFG_25},
    {KEY_CFG_24, CFG_24},
    {KEY_CFG_26, CFG_26},
    {KEY_CFG_21, CFG_21},
    {KEY_CFG_20, CFG_20},
    {KEY_CFG_23, CFG_23},
    {KEY_CFG_TAP4, CFG_TAP4},
    {KEY_CFG_TAP5, CFG_TAP5},
    {KEY_CFG_TAP6, CFG_TAP6},
    {KEY_CFG_1, CFG_1},
    {KEY_CFG_TAP0, CFG_TAP0},
    {KEY_CFG_TAP1, CFG_TAP1},
    {KEY_CFG_TAP2, CFG_TAP2},
    {KEY_CFG_TAP3, CFG_TAP3},
    {KEY_FCFG_AZ, FCFG_AZ},
    {KEY_CFG_ORIENT_IRQ_1, CFG_ORIENT_IRQ_1},
    {KEY_CFG_ORIENT_IRQ_2, CFG_ORIENT_IRQ_2},
    {KEY_CFG_ORIENT_IRQ_3, CFG_ORIENT_IRQ_3},
    {KEY_CFG_TAP_QUANTIZE, CFG_TAP_QUANTIZE},
    {KEY_FCFG_3, FCFG_3},
    {KEY_CFG_TAP_CLEAR_STICKY, CFG_TAP_CLEAR_STICKY},
    {KEY_FCFG_1, FCFG_1},
    //{KEY_CFG_ACCEL_FILTER, CFG_ACCEL_FILTER},
    {KEY_FCFG_2, FCFG_2},
    {KEY_CFG_3D, CFG_3D},
    {KEY_CFG_3B, CFG_3B},
    {KEY_CFG_3C, CFG_3C},
    {KEY_FCFG_5, FCFG_5},
    {KEY_FCFG_4, FCFG_4},
    {KEY_FCFG_FSCALE, FCFG_FSCALE},
    {KEY_CFG_TAP_JERK, CFG_TAP_JERK},
    {KEY_FCFG_6, FCFG_6},
    {KEY_CFG_12, CFG_12},
    {KEY_FCFG_7, FCFG_7},
    {KEY_CFG_14, CFG_14},
    {KEY_CFG_15, CFG_15},
    {KEY_CFG_16, CFG_16},
    {KEY_CFG_18, CFG_18},
    {KEY_CFG_6, CFG_6},
    {KEY_CFG_7, CFG_7},
    {KEY_CFG_4, CFG_4},
    {KEY_CFG_5, CFG_5},
    {KEY_CFG_3, CFG_3},
    {KEY_CFG_GYRO_SOURCE, CFG_GYRO_SOURCE},
    {KEY_CFG_8, CFG_8},
    {KEY_CFG_9, CFG_9},
    {KEY_CFG_ORIENT_2, CFG_ORIENT_2},
    {KEY_CFG_ORIENT_1, CFG_ORIENT_1},
    {KEY_FCFG_ACCEL_INPUT, FCFG_ACCEL_INPUT},
    {KEY_CFG_TAP7, CFG_TAP7},
    {KEY_CFG_TAP_SAVE_ACCB, CFG_TAP_SAVE_ACCB},
    {KEY_FCFG_ACCEL_INIT, FCFG_ACCEL_INIT},

    {KEY_D_0_22, D_0_22},
    {KEY_D_0_24, D_0_24},
    {KEY_D_0_36, D_0_36},
    {KEY_D_0_52, D_0_52},
    {KEY_D_0_96, D_0_96},
    {KEY_D_0_104, D_0_104},
    {KEY_D_0_108, D_0_108},
    {KEY_D_0_163, D_0_163},
    {KEY_D_0_188, D_0_188},
    {KEY_D_0_192, D_0_192},
    {KEY_D_0_224, D_0_224},
    {KEY_D_0_228, D_0_228},
    {KEY_D_0_232, D_0_232},
    {KEY_D_0_236, D_0_236},

    {KEY_DMP_PREVPTAT, DMP_PREVPTAT},
    {KEY_D_1_2, D_1_2},
    {KEY_D_1_4, D_1_4},
    {KEY_D_1_8, D_1_8},
    {KEY_D_1_10, D_1_10},
    {KEY_D_1_24, D_1_24},
    {KEY_D_1_28, D_1_28},
    {KEY_D_1_92, D_1_92},
    {KEY_D_1_96, D_1_96},
    {KEY_D_1_98, D_1_98},
    {KEY_D_1_106, D_1_106},
    {KEY_D_1_108, D_1_108},
    {KEY_D_1_112, D_1_112},
    {KEY_D_1_128, D_1_128},
    {KEY_D_1_152, D_1_152},
    {KEY_D_1_168, D_1_168},
    {KEY_D_1_175, D_1_175},
    {KEY_D_1_178, D_1_178},
    {KEY_D_1_236, D_1_236},
    {KEY_D_1_244, D_1_244},

    {KEY_DMP_TAPW_MIN, DMP_TAPW_MIN},
    {KEY_DMP_TAP_THR_X, DMP_TAP_THX},
    {KEY_DMP_TAP_THR_Y, DMP_TAP_THY},
    {KEY_DMP_TAP_THR_Z, DMP_TAP_THZ},
    {KEY_DMP_SH_TH_Y, DMP_SH_TH_Y},
    {KEY_DMP_SH_TH_X, DMP_SH_TH_X},
    {KEY_DMP_SH_TH_Z, DMP_SH_TH_Z},
    {KEY_DMP_ORIENT, DMP_ORIENT}
};

#define NUM_LOCAL_KEYS (sizeof(dmpTConfig)/sizeof(dmpTConfig[0]))
static const unsigned short sConfig = 0x013f;
#define SCD (1024)
static const unsigned char dmpMemory[SCD] = {
    0xfb, 0x00, 0x00, 0x3e, 0x00, 0x0b, 0x00, 0x36, 0x5a, 0xd6, 0x96, 0x06, 0x3f, 0xa3, 0x00, 0x00,
    0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x77, 0x8e, 0x00, 0x01, 0x00, 0x01,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0xe8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x7f, 0xff, 0xff, 0xfe, 0x80, 0x01,
    0x02, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x05, 0x01, 0xe9, 0xa2, 0x0f,
    0x00, 0x3e, 0x03, 0x30, 0x40, 0x00, 0x00, 0x00, 0x02, 0xca, 0xe3, 0x09, 0x3e, 0x80, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3e, 0x00, 0x02, 0xb4, 0x8b, 0x00, 0x00, 0x7a, 0xdf, 0x00, 0x02, 0x5b, 0x2f,
    0xfc, 0xba, 0xfa, 0x00, 0x01, 0x00, 0x80, 0x00, 0x02, 0x01, 0x80, 0x00, 0x03, 0x02, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xb4, 0x8b, 0x00, 0x00, 0x7a, 0xdf, 0x00, 0x02, 0x5b, 0x2f,
    0x00, 0x7d, 0x32, 0xba, 0x00, 0x0a, 0x1e, 0xd1, 0x00, 0x3a, 0xe8, 0x25, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0xd7, 0x96, 0x08, 0xff, 0xb3, 0x39, 0xf5, 0xfe, 0x11, 0x1b, 0x62, 0xfb, 0xf4, 0xb4, 0x52,
    0xfb, 0x8c, 0x6f, 0x5d, 0xfd, 0x5d, 0x08, 0xd9, 0x00, 0x7c, 0x73, 0x3b, 0x00, 0x6c, 0x12, 0xcc,
    0x32, 0x00, 0x13, 0x9d, 0x32, 0x00, 0xd0, 0xd6, 0x32, 0x00, 0x08, 0x00, 0x40, 0x00, 0x01, 0xf4,
    0x0d, 0x68, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xd6, 0x00, 0x00, 0x27, 0x10,

    0xfb, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xfa, 0x36, 0xff, 0xbc, 0x30, 0x8e, 0x00, 0x05, 0xfb, 0xf0, 0xff, 0xd9, 0x5b, 0xc8,
    0x3e, 0x80, 0x00, 0x00, 0x3e, 0x80, 0x00, 0x00, 0x3e, 0x80, 0x00, 0x00, 0x12, 0x82, 0x2d, 0x90,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0xff, 0xff, 0x00, 0x05, 0x02, 0x00, 0x00, 0x0c,
    0x00, 0x03, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x03, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xff, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb2, 0x6a, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xec, 0x3f, 0xc8, 0xff, 0xee, 0x00, 0x00, 0xff, 0xfe, 0x40, 0x00, 0xff, 0xff, 0xff, 0xc8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x03, 0x65, 0x00, 0x00, 0x00, 0x99, 0x00, 0x00, 0x02, 0xf5,

    0x9e, 0xc5, 0xa3, 0x8a, 0x22, 0x8a, 0x6e, 0x8a, 0x56, 0x8a, 0x5e, 0x9f, 0xc1, 0x83, 0x06, 0x26,
    0x46, 0x66, 0x0e, 0x2e, 0x4e, 0x6e, 0x9d, 0xc4, 0xad, 0x00, 0x2c, 0x54, 0x7c, 0xf9, 0xc5, 0xa3,
    0xc1, 0xc3, 0x8f, 0x96, 0x19, 0xa6, 0x81, 0xda, 0x0c, 0xd9, 0x2e, 0xd8, 0xa3, 0x86, 0x31, 0x81,
    0xa6, 0xd9, 0x30, 0x26, 0xd8, 0xd8, 0xfa, 0xc1, 0x8c, 0xc2, 0x99, 0xc5, 0xa3, 0x2d, 0x55, 0x7d,
    0x81, 0x91, 0xac, 0x38, 0xad, 0x3a, 0xc3, 0x83, 0x91, 0xac, 0x2d, 0xd9, 0x28, 0xd8, 0x4d, 0xd9,
    0x48, 0xd8, 0x6d, 0xd9, 0x68, 0xd8, 0x8c, 0x9d, 0xae, 0x29, 0xd9, 0x04, 0xae, 0xd8, 0x51, 0xd9,
    0x04, 0xae, 0xd8, 0x79, 0xd9, 0x04, 0xd8, 0x81, 0xfb, 0x9d, 0xad, 0x00, 0x8d, 0xae, 0x19, 0x81,
    0xad, 0xd9, 0x01, 0xd8, 0xfa, 0xae, 0xda, 0x26, 0xd8, 0x8e, 0x91, 0x29, 0x83, 0xa7, 0xd9, 0xad,
    0xad, 0xad, 0xad, 0xfb, 0x2a, 0xd8, 0xd8, 0xf9, 0xc0, 0xac, 0x89, 0x91, 0x3e, 0x5e, 0x76, 0xfb,
    0xac, 0x2e, 0x2e, 0xf9, 0xc1, 0x8c, 0x5a, 0x9c, 0xac, 0x2c, 0x28, 0x28, 0x28, 0x9c, 0xac, 0x30,
    0x18, 0xa8, 0x98, 0x81, 0x28, 0x34, 0x3c, 0x97, 0x24, 0xa7, 0x28, 0x34, 0x3c, 0x9c, 0x24, 0xfa,
    0xc0, 0x89, 0xac, 0x91, 0x2c, 0x4c, 0x6c, 0x8a, 0x9b, 0x2d, 0xd9, 0xd8, 0xd8, 0x51, 0xd9, 0xd8,
    0xd8, 0x79, 0xd9, 0xd8, 0xd8, 0xf9, 0x9e, 0x88, 0xa3, 0x31, 0xda, 0xd8, 0xd8, 0x91, 0x2d, 0xd9,
    0x28, 0xd8, 0x4d, 0xd9, 0x48, 0xd8, 0x6d, 0xd9, 0x68, 0xd8, 0xc1, 0x83, 0x93, 0x35, 0x3d, 0x80,
    0x25, 0xda, 0xd8, 0xd8, 0x85, 0x69, 0xda, 0xd8, 0xd8, 0xf9, 0xc2, 0x93, 0x81, 0xa3, 0x28, 0x34,
    0x3c, 0xfb, 0x91, 0xab, 0x8b, 0x18, 0xa3, 0x09, 0xd9, 0xab, 0x97, 0x0a, 0x91, 0x3c, 0xc0, 0x87,

    0x9c, 0xc5, 0xa3, 0xdd, 0xf9, 0xa3, 0xa3, 0xa3, 0xa3, 0x95, 0xf9, 0xa3, 0xa3, 0xa3, 0x9d, 0xf9,
    0xa3, 0xa3, 0xa3, 0xa3, 0xf9, 0x90, 0xa3, 0xa3, 0xa3, 0xa3, 0x91, 0xc3, 0x99, 0xf9, 0xa3, 0xa3,
    0xa3, 0x98, 0xf9, 0xa3, 0xa3, 0xa3, 0xa3, 0x97, 0xa3, 0xa3, 0xa3, 0xa3, 0xfb, 0x9b, 0xa3, 0xa3,
    0xdc, 0xc5, 0xa7, 0xf9, 0x26, 0x26, 0x26, 0xd8, 0xd8, 0xff, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 0xc1,
    0xc2, 0xc4, 0x81, 0xa0, 0x90, 0xfa, 0x2c, 0x80, 0x74, 0xfb, 0x70, 0xfa, 0x7c, 0xc0, 0x86, 0x98,
    0xa8, 0xf9, 0xc9, 0x88, 0xa1, 0xfa, 0x0e, 0x97, 0x80, 0xf9, 0xa9, 0x2e, 0x2e, 0x2e, 0xaa, 0x2e,
    0x2e, 0x2e, 0xfa, 0xaa, 0xc9, 0x2c, 0xcb, 0xa9, 0x4c, 0xcd, 0x6c, 0xf9, 0x89, 0xa5, 0xca, 0xcd,
    0xcf, 0xc3, 0x9e, 0xa9, 0x3e, 0x5e, 0x7e, 0x85, 0xa5, 0x1a, 0x3e, 0x5e, 0xc2, 0xa5, 0x99, 0xfb,
    0x08, 0x34, 0x5c, 0xf9, 0xa9, 0xc9, 0xcb, 0xcd, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97,
    0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0xa9,
    0xf9, 0x89, 0x26, 0x46, 0x66, 0x8a, 0xa8, 0x96, 0x36, 0x56, 0x76, 0xaa, 0x98, 0x82, 0x87, 0x2d,
    0x35, 0x3d, 0xc5, 0xa3, 0xc2, 0xc1, 0x97, 0x80, 0x4a, 0x4e, 0x4e, 0xa3, 0xfa, 0x48, 0xcd, 0xc9,
    0xf9, 0xc4, 0xa9, 0x99, 0x83, 0x0d, 0x35, 0x5d, 0x89, 0xc5, 0xa3, 0x2d, 0x55, 0x7d, 0xc3, 0x93,
    0xa3, 0x0e, 0x16, 0x1e, 0xa9, 0x2c, 0x54, 0x7c, 0xc0, 0xc2, 0x83, 0x97, 0xaf, 0x08, 0xc4, 0xa8,
    0x11, 0xc1, 0x8f, 0xc5, 0xaf, 0x98, 0xf8, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xf9, 0xa3, 0x29,
    0x55, 0x7d, 0xaf, 0x83, 0xc3, 0x93, 0xaf, 0xf8, 0x00, 0x28, 0x50, 0xc4, 0xc2, 0xc0, 0xf9, 0x97,
};
static tKeyLabel keys[NUM_KEYS];

static unsigned short inv_setup_dmpGetAddress(unsigned short key)
{
    static int isSorted = 0;
    if ( !isSorted ) {
        unsigned short kk;
        for (kk=0; kk<NUM_KEYS; ++kk) {
            keys[ kk ].addr = 0xffff;
            keys[ kk ].key = kk;
        }
        for (kk=0; kk<NUM_LOCAL_KEYS; ++kk) {
            keys[ dmpTConfig[kk].key ].addr = dmpTConfig[kk].addr;
        }
        isSorted = 1;
    }
    if ( key >= NUM_KEYS )
        return 0xffff;
    return keys[ key ].addr;
}


/**
 *  @brief
 *  @return INV_SUCCESS or a non-zero error code.
 */
inv_error_t inv_setup_dmp(void)
{
    inv_error_t result;
    inv_set_get_address( inv_setup_dmpGetAddress );

    result = inv_clock_source(MPU_CLK_SEL_PLLGYROZ);
    if (result) {
        LOG_RESULT_LOCATION(result);
        return result;
    }
    result = inv_dl_cfg_sampling(MPU_FILTER_42HZ, 4);
    if (result) {
        LOG_RESULT_LOCATION(result);
        return result;
    }
    result = inv_set_full_scale(2000.f);
    if (result) {
        LOG_RESULT_LOCATION(result);
        return result;
    }
    result = inv_load_dmp(dmpMemory, SCD, sConfig);
    if (result) {
        LOG_RESULT_LOCATION(result);
        return result;
    }
    result = inv_set_ignore_system_suspend(FALSE);
    if (result) {
        LOG_RESULT_LOCATION(result);
        return result;
    }

    if (inv_accel_present())
    {
        struct ext_slave_config config;
        long odr;
        config.key = MPU_SLAVE_CONFIG_ODR_SUSPEND;
        config.len = sizeof(long);
        config.apply = FALSE;
        config.data = &odr;

        odr = 0;
        result = inv_mpu_config_accel(inv_get_dl_config(),
                                  inv_get_serial_handle(),
                                  inv_get_serial_handle(),
                                  &config);
        if (result) {
            LOG_RESULT_LOCATION(result);
            return result;
        }
        config.key = MPU_SLAVE_CONFIG_ODR_RESUME;
        odr = 200000;
        result = inv_mpu_config_accel(inv_get_dl_config(),
                                  inv_get_serial_handle(),
                                  inv_get_serial_handle(),
                                  &config);
        if (result) {
            LOG_RESULT_LOCATION(result);
            return result;
        }
        config.key = MPU_SLAVE_CONFIG_IRQ_SUSPEND;
        odr = MPU_SLAVE_IRQ_TYPE_NONE;
        result = inv_mpu_config_accel(inv_get_dl_config(),
                                  inv_get_serial_handle(),
                                  inv_get_serial_handle(),
                                  &config);
        if (result) {
            LOG_RESULT_LOCATION(result);
            return result;
        }

        config.key = MPU_SLAVE_CONFIG_IRQ_RESUME;
        odr = MPU_SLAVE_IRQ_TYPE_NONE;
        result = inv_mpu_config_accel(inv_get_dl_config(),
                         inv_get_serial_handle(),
                         inv_get_serial_handle(),
                         &config);
        if (result) {
            LOG_RESULT_LOCATION(result);
            return result;
        }

    }

    return result;
}
/**
 * @}
 */

