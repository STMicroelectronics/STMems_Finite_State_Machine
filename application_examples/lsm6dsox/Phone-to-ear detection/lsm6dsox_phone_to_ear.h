/*
 ******************************************************************************
 * @file    lsm6dsox_phone_to_ear.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dsox_phone_to_ear.
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
#ifndef LSM6DSOX_PHONE_TO_EAR_H
#define LSM6DSOX_PHONE_TO_EAR_H

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
const ucf_line_t lsm6dsox_phone_to_ear[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x4B,},
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
  {.address = 0x09, .data = 0xEC,},
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
  {.address = 0x09, .data = 0x04,},
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
  {.address = 0x05, .data = 0x11,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0x50,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xF2,},
  {.address = 0x09, .data = 0xFF,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x62,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x6E,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xEE,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0xEE,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x45,},
  {.address = 0x09, .data = 0xBA,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x62,},
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
  {.address = 0x12, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x70,},
  {.address = 0x09, .data = 0xCD,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x10,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x60, .data = 0x15,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x11,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x15, .data = 0x10,},
  {.address = 0x16, .data = 0x80,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x10, .data = 0x2C,},
  {.address = 0x11, .data = 0x2C,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSOX_PHONE_TO_EAR_H */

