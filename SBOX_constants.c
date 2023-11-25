/*
 *
 * University of Luxembourg
 * Laboratory of Algorithmics, Cryptology and Security (LACS)
 *
 * FELICS - Fair Evaluation of Lightweight Cryptographic Systems
 *
 * Copyright (C) 2015 University of Luxembourg
 *
 * Written in 2015 by Daniel Dinu <dumitru-daniel.dinu@uni.lu>
 *
 * This file is part of FELICS.
 *
 * FELICS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * FELICS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

/****************************************************************************** 
 *
 * Constants used by encryption/decryption
 *
 ******************************************************************************/

#include <stdint.h>
#include "constants.h"

SBOX_BYTE     SK[80] ={0x6d,0xb6,0x7d,0x50,0x28,0xd3,0x99,0xa6,0x28,0x54,
                      0x2a,0x55,0x6a,0x75,0x7a,0x7d,0x94,0x71,0xb8,0x7e,
                      0x90,0x48,0xe3,0xa1,0x14,0x0a,0x45,0x62,0x31,0x58,
                      0x6c,0x76,0xb3,0x73,0x20,0xd0,0xca,0xb6,0x9b,0x0d,
                      0x7e,0x7f,0x3f,0x1f,0x0f,0x07,0x43,0x61,0x01,0xb0,
                      0xb2,0x80,0x00,0xe2,0x82,0x41,0x4f,0x27,0x53,0x69,
                      0x34,0x1a,0x4d,0x26,0x36,0xda,0x9c,0x68,0x1b,0x8d,
                      0x69,0x46,0x40,0x20,0x10,0x08,0x44,0x22,0x11,0x48};
