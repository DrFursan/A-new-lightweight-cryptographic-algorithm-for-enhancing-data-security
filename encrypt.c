/*
 *
 * University of Luxembourg
 * Laboratory of Algorithmics, Cryptology and Security (LACS)
 *
 * FELICS - Fair Evaluation of Lightweight Cryptographic Systems
 *
 * Copyright (C) 2015 University of Luxembourg
 *
 * Written in 2015 by Yann Le Corre <yann.lecorre@uni.lu>
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

#include "cipher.h"
#include "constants.h"
#include "primitives.h"

/*
 * In SDIT, we need "whitening" keys in addition to roundKeys. We choose
 * to consider them as "additional" roundKeys that are stored on top of
 * actual roundKeys (i.e. roundKeys[100:103])
 */

void initialTransformation(uint8_t * st,uint8_t * WK1) 
{
    uint8_t i;
    
    uint8_t x[8];
    
    x[0]=(st[0]^WK1[0]);
    x[1]=st[1];
    x[2]=st[2]^WK1[1];
    x[3]=st[3];
    x[4]=(st[4]^WK1[2]);
    x[5]=st[5];
    x[6]=st[6]^WK1[3];
    x[7]=~(st[7] ^ WK1[4]);
    
    //========================
    st[0]=x[0];
    st[1]=x[1];
    st[2]=x[2];
    st[3]=x[3];
    st[4]=x[4];
    st[5]=x[5];
    st[6]=x[6];
    st[7]=x[7];
   
}

void Round(uint8_t * st,uint8_t * sk,uint8_t  j) 
{
    uint8_t i,Index;
    
    uint8_t x[8];
    Index=j;
    
    x[0]=((st[6])^sk[Index])^st[7];  
  
    x[1]=st[0];
    Index++;
    x[2]=(~(st[0]^sk[Index]))^st[1];

    x[3]=st[2];
    Index++;
    x[4]=((st[2])^sk[Index])^st[3];

    x[5]=st[4];
    Index++;
    
    x[6]=(~(st[4])^sk[Index])^st[5];

    x[7]=st[6];
    
   //==============

    st[0]=x[0];
    st[1]=x[1];
    st[2]=x[2];
    st[3]=x[3];
    st[4]=x[4];
    st[5]=x[5];
    st[6]=x[6];
    st[7]=x[7];
    
     
}

void FinalTransformation(uint8_t * st,uint8_t * WK1) 
{
    uint8_t i;
    
    uint8_t x[8];
    
    x[0]=(st[0]^WK1[5]);
    x[1]=st[1];
    x[2]=st[2]^WK1[6];
    x[3]=st[3];
    x[4]=(st[4]^WK1[7]);
    x[5]=st[5];
    x[6]=st[6]^WK1[8];
    x[7]=~( st[7]^WK1[9]);
//========================
    st[0]=x[0];
    st[1]=x[1];
    st[2]=x[2];
    st[3]=x[3];
    st[4]=x[4];
    st[5]=x[5];
    st[6]=x[6];
    st[7]=x[7];
    
    
    
}

void Encrypt(uint8_t *block, uint8_t *rk)
{
   uint8_t sk1[80];
   uint8_t i;

        
	//============================
          initialTransformation(block,rk);

    

          sk1[0]=READ_SBOX_BYTE(SK[0]);
          sk1[1]=READ_SBOX_BYTE(SK[1]);
          sk1[2]=READ_SBOX_BYTE(SK[2]);
         sk1[3]=READ_SBOX_BYTE(SK[3]);
          sk1[4]=READ_SBOX_BYTE(SK[4]);

          sk1[5]=READ_SBOX_BYTE(SK[5]);
          sk1[6]=READ_SBOX_BYTE(SK[6]);
         sk1[7]=READ_SBOX_BYTE(SK[7]);
          sk1[8]=READ_SBOX_BYTE(SK[8]);
         sk1[9]=READ_SBOX_BYTE(SK[9]);

          sk1[10]=READ_SBOX_BYTE(SK[10]);
          sk1[11]=READ_SBOX_BYTE(SK[11]);
          sk1[12]=READ_SBOX_BYTE(SK[12]);
          sk1[13]=READ_SBOX_BYTE(SK[13]);
          sk1[14]=READ_SBOX_BYTE(SK[14]);
          sk1[15]=READ_SBOX_BYTE(SK[15]);

          Round(block,sk1,0);
          Round(block,sk1,4);
          Round(block,sk1,8);

        FinalTransformation(block,rk);
       //============================= 
	
	
     	
     	     

}
