/*
 ******************************************************************************
 * @file    lsm6dsr_flip_down.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dsr_flip_down.
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LSM6DSR_FLIP_DOWN_H
#define LSM6DSR_FLIP_DOWN_H

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
const ucf_line_t lsm6dsr_flip_down[] = {
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x5F, .data = 0x0A,},
  {.address = 0x46, .data = 0x01,},
  {.address = 0x47, .data = 0x00,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x01,},
  {.address = 0x0C, .data = 0x00,},
  {.address = 0x0E, .data = 0x00,},
  {.address = 0x0F, .data = 0x00,},
  {.address = 0x10, .data = 0x00,},
  {.address = 0x02, .data = 0x01,},
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
  {.address = 0x09, .data = 0x92,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xCD,},
  {.address = 0x09, .data = 0xBA,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x0D,},
  {.address = 0x09, .data = 0x06,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0x53,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x01,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x14, .data = 0x80,},
  {.address = 0x10, .data = 0x28,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSR_FLIP_DOWN_H */
