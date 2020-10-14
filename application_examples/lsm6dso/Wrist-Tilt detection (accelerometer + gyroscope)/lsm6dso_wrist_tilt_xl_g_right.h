/*
 ******************************************************************************
 * @file    lsm6dso_wrist_tilt_xl_g_right.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dso_wrist_tilt_xl_g_right.
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LSM6DSO_WRIST_TILT_XL_G_RIGHT_H
#define LSM6DSO_WRIST_TILT_XL_G_RIGHT_H

#ifdef __cplusplus
  extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#ifndef MEMS_UCF_SHARED_TYPES
#define MEMS_UCF_SHARED_TYPES

/** Common data block definition **/
typedef struct {
  uint8_t address;
  uint8_t data;
} ucf_line_t;

#endif /* MEMS_UCF_SHARED_TYPES */

/** Configuration array generated from Unico Tool **/
const ucf_line_t lsm6dso_wrist_tilt_xl_g_right[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x53,},
  {.address = 0x46, .data = 0x01,},
  {.address = 0x47, .data = 0x00,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x01,},
  {.address = 0x0C, .data = 0x00,},
  {.address = 0x0E, .data = 0x00,},
  {.address = 0x0F, .data = 0x00,},
  {.address = 0x10, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0x7A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x02, .data = 0x41,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0xB1,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1D,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x96,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xB8,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xEC,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0xAA,},
  {.address = 0x09, .data = 0x96,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0xFF,},
  {.address = 0x09, .data = 0x42,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0xAA,},
  {.address = 0x09, .data = 0x96,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x77,},
  {.address = 0x09, .data = 0x83,},
  {.address = 0x09, .data = 0x88,},
  {.address = 0x09, .data = 0x86,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x01,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x02, .data = 0x3F,},
  {.address = 0x07, .data = 0x00,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x00,},
  {.address = 0x0C, .data = 0x00,},
  {.address = 0x0D, .data = 0x00,},
  {.address = 0x0E, .data = 0x00,},
  {.address = 0x10, .data = 0x3C,},
  {.address = 0x11, .data = 0x3C,},
  {.address = 0x12, .data = 0x04,},
  {.address = 0x13, .data = 0x00,},
  {.address = 0x14, .data = 0x00,},
  {.address = 0x15, .data = 0x10,},
  {.address = 0x16, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x18, .data = 0xE0,},
  {.address = 0x19, .data = 0x00,},
  {.address = 0x56, .data = 0x00,},
  {.address = 0x57, .data = 0x00,},
  {.address = 0x58, .data = 0x00,},
  {.address = 0x59, .data = 0x00,},
  {.address = 0x5A, .data = 0x00,},
  {.address = 0x5B, .data = 0x00,},
  {.address = 0x5C, .data = 0x00,},
  {.address = 0x5D, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x5F, .data = 0x00,},
  {.address = 0x6F, .data = 0x00,},
  {.address = 0x70, .data = 0x00,},
  {.address = 0x71, .data = 0x00,},
  {.address = 0x72, .data = 0x00,},
  {.address = 0x73, .data = 0x00,},
  {.address = 0x74, .data = 0x00,},
  {.address = 0x75, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSO_WRIST_TILT_XL_G_RIGHT_H */

