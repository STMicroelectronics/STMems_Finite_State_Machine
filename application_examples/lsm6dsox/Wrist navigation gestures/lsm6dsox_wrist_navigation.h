/*
 ******************************************************************************
 * @file    lsm6dsox_wrist_navigation.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dsox_wrist_navigation.
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
#ifndef LSM6DSOX_WRIST_NAVIGATION_H
#define LSM6DSOX_WRIST_NAVIGATION_H

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
const ucf_line_t lsm6dsox_wrist_navigation[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x53,},
  {.address = 0x46, .data = 0x0F,},
  {.address = 0x47, .data = 0x00,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x0F,},
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
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x02, .data = 0x41,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0x96,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0xAE,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0xB9,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x54,},
  {.address = 0x09, .data = 0x15,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x96,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x12,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x36,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x74,},
  {.address = 0x09, .data = 0x17,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x9A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x06,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x51,},
  {.address = 0x09, .data = 0x25,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xD9,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1E,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x15,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0xB9,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0xCC,},
  {.address = 0x09, .data = 0x57,},
  {.address = 0x09, .data = 0x61,},
  {.address = 0x09, .data = 0xDD,},
  {.address = 0x09, .data = 0x27,},
  {.address = 0x09, .data = 0x06,},
  {.address = 0x09, .data = 0xCC,},
  {.address = 0x09, .data = 0x35,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x01,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x14, .data = 0x80,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x10, .data = 0x3C,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSOX_WRIST_NAVIGATION_H */

