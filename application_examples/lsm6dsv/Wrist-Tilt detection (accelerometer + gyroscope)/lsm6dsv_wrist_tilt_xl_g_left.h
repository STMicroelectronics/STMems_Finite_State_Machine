/**
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#ifndef LSM6DSV_WRIST_TILT_XL_G_LEFT_H
#define LSM6DSV_WRIST_TILT_XL_G_LEFT_H

#ifdef __cplusplus
extern "C" {
#endif

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
const ucf_line_t lsm6dsv_wrist_tilt_xl_g_left[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x53,},
  {.address = 0x46, .data = 0x01,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x01,},
  {.address = 0x0E, .data = 0x00,},
  {.address = 0x0F, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
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
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x44,},
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
  {.address = 0x09, .data = 0x09,},
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
  {.address = 0x17, .data = 0x80,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x15, .data = 0x04,},
  {.address = 0x17, .data = 0x03,},
  {.address = 0x10, .data = 0x45,},
  {.address = 0x11, .data = 0x55,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSV_WRIST_TILT_XL_G_LEFT_H */

