/*
 ******************************************************************************
 * @file    lsm6dsox_glance.h
 * @author  Sensors Software Solution Team
 * @brief   This file contains the configuration for lsm6dsox_glance.
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2019 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
 
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LSM6DSOX_GLANCE_H
#define LSM6DSOX_GLANCE_H

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
const ucf_line_t lsm6dsox_glance[] = {
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
  {.address = 0x09, .data = 0xA2,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xCD,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x23,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x06,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x09, .data = 0x77,},
  {.address = 0x09, .data = 0x45,},
  {.address = 0x09, .data = 0x66,},
  {.address = 0x09, .data = 0x99,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x53,},
  {.address = 0x09, .data = 0x77,},
  {.address = 0x09, .data = 0x35,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x11,},
  {.address = 0x17, .data = 0x80,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x10,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x10, .data = 0xA0,},
  {.address = 0x11, .data = 0xA0,},
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0x52,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEB,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEC,},
  {.address = 0x09, .data = 0x62,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xED,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEE,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEF,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xF0,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xF2,},
  {.address = 0x09, .data = 0xFF,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFB,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFC,},
  {.address = 0x09, .data = 0x64,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFD,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFE,},
  {.address = 0x09, .data = 0x70,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFF,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3D,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3E,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x40,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x41,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x42,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x43,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x44,},
  {.address = 0x09, .data = 0xEE,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x45,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x46,},
  {.address = 0x09, .data = 0xEE,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x47,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x48,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x49,},
  {.address = 0x09, .data = 0xBA,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4A,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4C,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4D,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4E,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x4F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x50,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x51,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x64,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x65,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x66,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x67,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x68,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x69,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x6A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x6B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x6C,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x6D,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x6E,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x70,},
  {.address = 0x09, .data = 0xCD,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x71,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x72,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x73,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x11,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x60, .data = 0x15,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x14, .data = 0x80,},
  {.address = 0x10, .data = 0x2C,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSOX_GLANCE_H */
