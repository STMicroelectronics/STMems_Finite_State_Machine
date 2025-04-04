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

#ifndef LSM6DSV320X_PHONE_TO_EAR_H
#define LSM6DSV320X_PHONE_TO_EAR_H

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
const ucf_line_t lsm6dsv320x_phone_to_ear[] = {
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
  {.address = 0x09, .data = 0xD1,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x2C,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x9A,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x13,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0xCC,},
  {.address = 0x09, .data = 0x75,},
  {.address = 0x09, .data = 0x42,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x86,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0xDD,},
  {.address = 0x09, .data = 0x73,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x01,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0x72,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x82,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0xFF,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x5C,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x90,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x5C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x7A,},
  {.address = 0x09, .data = 0xBA,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x84,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x90,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x10,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x0D, .data = 0x01,},
  {.address = 0x60, .data = 0x15,},
  {.address = 0x45, .data = 0x02,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x15, .data = 0x04,},
  {.address = 0x17, .data = 0x03,},
  {.address = 0x10, .data = 0x44,},
  {.address = 0x11, .data = 0x54,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x11,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSV320X_PHONE_TO_EAR_H */

