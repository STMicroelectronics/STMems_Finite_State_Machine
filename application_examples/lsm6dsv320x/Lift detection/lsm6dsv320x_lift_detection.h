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

#ifndef LSM6DSV320X_LIFT_DETECTION_H
#define LSM6DSV320X_LIFT_DETECTION_H

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
const ucf_line_t lsm6dsv320x_lift_detection[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x4B,},
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
  {.address = 0x09, .data = 0xA2,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x26,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x79,},
  {.address = 0x09, .data = 0x35,},
  {.address = 0x09, .data = 0x83,},
  {.address = 0x09, .data = 0x3B,},
  {.address = 0x09, .data = 0xF0,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1E,},
  {.address = 0x09, .data = 0x0F,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x53,},
  {.address = 0x09, .data = 0x13,},
  {.address = 0x09, .data = 0x77,},
  {.address = 0x09, .data = 0x86,},
  {.address = 0x09, .data = 0x99,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0xA4,},
  {.address = 0x09, .data = 0x13,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xC5,},
  {.address = 0x09, .data = 0x21,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x01,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x17, .data = 0x03,},
  {.address = 0x10, .data = 0x44,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSV320X_LIFT_DETECTION_H */

