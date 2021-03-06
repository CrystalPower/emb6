/*
 * emb6 is licensed under the 3-clause BSD license. This license gives everyone
 * the right to use and distribute the code, either in binary or source code
 * format, as long as the copyright license is retained in the source code.
 *
 * The emb6 is derived from the Contiki OS platform with the explicit approval
 * from Adam Dunkels. However, emb6 is made independent from the OS through the
 * removal of protothreads. In addition, APIs are made more flexible to gain
 * more adaptivity during run-time.
 *
 * The license text is:
 *
 * Copyright (c) 2015,
 * Hochschule Offenburg, University of Applied Sciences
 * Laboratory Embedded Systems and Communications Electronics.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/*============================================================================*/

/**
 * @file    crc.h
 * @date    16.11.2015
 * @author  PN
 * @brief   Cyclic Redundancy Checking (CRC) implementation based on example
 *          codes from TI
 */

#ifndef CRC_PRESENT
#define CRC_PRESENT

#define CRC16_POLY      (uint16_t)( 0x1021u )
#define CRC16_INIT      (uint16_t)( 0x0000u )

#define CRC32_POLY      (uint32_t)( 0x04c11db7u )
#define CRC32_INIT      (uint32_t)( 0xffffffffu )

uint16_t crc_16_update(uint16_t curr_crc, uint8_t byte);
uint16_t crc_16_updateN(uint16_t curr_crc, uint8_t *p_data, uint16_t len);
uint16_t crc_16_calc(uint8_t *p_data, uint16_t len);

uint32_t crc_32_update(uint32_t curr_crc, uint8_t byte);
uint32_t crc_32_updateN(uint32_t curr_crc, uint8_t *p_data, uint16_t len);
uint32_t crc_32_calc(uint8_t *p_data, uint16_t len);

#endif /* CRC_PRESENT */
