/*
 *
 * University of Luxembourg
 * Laboratory of Algorithmics, Cryptology and Security (LACS)
 *
 * FELICS - Fair Evaluation of Lightweight Cryptographic Systems
 *
 * Copyright (C) 2015 University of Luxembourg
 *
 * Written in 2015 by Dmitry Khovratovich <dmitry.khovratovich@uni.lu>
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

#include <stdint.h>

#include "test_vectors.h"


/*
 *
 * Test vectors
 *
 */
//const uint8_t expectedPlaintext[BLOCK_SIZE] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//const uint8_t expectedKey[KEY_SIZE] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//const uint8_t expectedCiphertext[BLOCK_SIZE] = {0x3a, 0x58, 0xb5, 0xd8, 0xb5, 0xd8, 0x3a, 0x58};
//const uint8_t expectedCiphertext[BLOCK_SIZE] = {0x3e, 0xaa, 0x4d, 0x37, 0xfa, 0x03, 0x9c, 0x97};
//const uint8_t expectedCiphertext[BLOCK_SIZE] = {0x58, 0x95, 0x3e, 0x72, 0x90, 0x4b, 0xaf, 0x76};

const uint8_t expectedPlaintext[BLOCK_SIZE] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48};

const uint8_t expectedKey[KEY_SIZE] = {0xb3, 0x33, 0xca, 0x10, 0x22, 0xaa, 0xa9, 0x40,0x00,0x45};
//7b 19 b4 71 e2 10 f3 25
const uint8_t expectedCiphertext[BLOCK_SIZE] = {0x7b, 0x19, 0xb4, 0x71, 0xe2, 0x10, 0xf3, 0x25};

