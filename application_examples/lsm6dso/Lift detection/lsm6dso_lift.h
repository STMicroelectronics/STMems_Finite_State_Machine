/*
 ******************************************************************************
 * @file    lsm6dso_lift.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dso_lift.
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
#ifndef LSM6DSO_LIFT_H
#define LSM6DSO_LIFT_H

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
const ucf_line_t lsm6dso_lift[] = {
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
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x0C,},
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
  {.address = 0x10, .data = 0x2C,},
  {.address = 0x5E, .data = 0x02,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSO_LIFT_H */

