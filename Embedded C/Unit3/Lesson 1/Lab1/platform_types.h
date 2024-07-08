/*
 * platform_types.h
 *
 *  Created on: 8 Nov 2023
 *      Author: Saad
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include<stdbool.h>
#include<stdint.h>

#ifndef	_Bool
#define _Bool unsigned char
#endif

#define CPU_TYPE	CPU_TYPE_32
#define CPU_BIT_ORDER	MSB_FIRST
#define CPU_BYTE_ORDER	HIGH_BYTE_FIRST


#ifndef FALSE
#define FALSE	(boolean)false
#endif

#ifndef	TRUE
#define TRUE	(boolean)true
#endif

typedef _Bool				boolean;
typedef signed char 		sint8;
typedef	unsigned char		uint8;
typedef signed short		sint16;
typedef unsigned short		uint16;
typedef signed long			sint32;
typedef unsigned long 		uint32;
typedef	signed long long	sint64;
typedef unsigned long long	uint64;



typedef volatile signed char 		vsint8;
typedef	volatile unsigned char		vuint8;
typedef volatile signed short		vsint16;
typedef volatile unsigned short		vuint16;
typedef volatile signed long			vsint32;
typedef volatile unsigned long 		vuint32;
typedef	volatile signed long long	vsint64;
typedef volatile unsigned long long	vuint64;






#endif /* PLATFORM_TYPES_H_ */
