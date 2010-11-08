/* tag: data types for forth engine
 *
 * Copyright (C) 2003-2005 Patrick Mauritz, Stefan Reinauer
 *
 * See the file "COPYING" for further information about
 * the copyright and warranty status of this work.
 */

#ifndef __TYPES_H
#define __TYPES_H

#include "mconfig.h"

#ifdef BOOTSTRAP
#include <stdint.h>
#else
typedef unsigned char   uint8_t;
typedef unsigned short  uint16_t;
typedef unsigned int    uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long   uintptr_t;

typedef signed char     int8_t;
typedef short           int16_t;
typedef int             int32_t;
typedef long long       int64_t;
typedef long            intptr_t;

#define PRIx32 "x"
#define PRIx64 "llx"
#endif

/* endianess */
#include "autoconf.h"

/* physical address */
#if defined(__powerpc64__)
typedef uint64_t phys_addr_t;
#define FMT_plx "%016" PRIx64
#else
typedef uint32_t phys_addr_t;
#define FMT_plx "%08" PRIx32
#endif

/* cell based types */

typedef int32_t		cell;
typedef uint32_t	ucell;
typedef int64_t		dcell;
typedef uint64_t	ducell;

#define FMT_cell    "%d"
#define FMT_ucell   "%u"
#define FMT_ucellx  "%08x"
#define FMT_ucellX  "%08X"

#define FMT_elf     "%#x"
#define FMT_sizet   "%lx"
#define FMT_aout_ehdr  "%lx"

#define bitspercell	(sizeof(cell)<<3)
#define bitsperdcell	(sizeof(dcell)<<3)

#define BITS		32

/* size named types */

typedef unsigned char   u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long long u64;

typedef signed char	s8;
typedef short		s16;
typedef int		s32;
typedef long long	s64;

#endif
