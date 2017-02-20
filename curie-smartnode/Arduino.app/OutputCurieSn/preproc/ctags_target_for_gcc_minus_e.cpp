# 1 "./OutputCurieSn/sketch/Ccode_for_curie.ino.cpp"
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./OutputCurieSn/sketch/Ccode_for_curie.ino.cpp"
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdint.h" 1 3 4
# 11 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdint.h" 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdint-gcc.h" 1 3 4
/* Copyright (C) 2008-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.18  Integer types  <stdint.h>
 */




/* 7.8.1.1 Exact-width integer types */


typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;


/* 7.8.1.2 Minimum-width integer types */

typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;

/* 7.8.1.3 Fastest minimum-width integer types */

typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;

/* 7.8.1.4 Integer types capable of holding object pointers */


typedef int intptr_t;


typedef unsigned int uintptr_t;


/* 7.8.1.5 Greatest-width integer types */

typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;




/* 7.18.2 Limits of specified-width integer types */
# 208 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdint-gcc.h" 3 4
/* 7.18.3 Limits of other integer types */
# 12 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdint.h" 2 3 4
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 1 3 4
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/ieeefp.h" 1 3 4



/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	
*/
# 217 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/ieeefp.h" 3 4
/* necv70 was __IEEE_LITTLE_ENDIAN. */
# 11 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/newlib.h" 1 3 4
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */




/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Newlib version */


/* C99 formats support (such as %a, %zu, ...) in IO functions like
 * printf/scanf enabled */
/* #undef _WANT_IO_C99_FORMATS */

/* long long type support in IO functions like printf/scanf enabled */


/* Register application finalization function using atexit. */
/* #undef _WANT_REGISTER_FINI */

/* long double type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Positional argument support in printf functions enabled.  */
/* #undef _WANT_IO_POS_ARGS */

/* Optional reentrant struct support.  Used mostly on platforms with
   very restricted storage.  */
/* #undef _WANT_REENT_SMALL */

/* Multibyte supported */
/* #undef _MB_CAPABLE */

/* MB_LEN_MAX */


/* ICONV enabled */
/* #undef _ICONV_ENABLED */

/* Enable ICONV external CCS files loading capabilities */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Define if the linker supports .preinit_array/.init_array/.fini_array
 * sections.  */


/* True if atexit() may dynamically allocate space for cleanup
   functions.  */


/* True if long double supported.  */


/* Define if compiler supports -fno-tree-loop-distribute-patterns. */


/* True if long double supported and it is equal to double.  */


/* Define if ivo supported in streamio.  */


/* Define if fseek functions support seek optimization.  */


/* Define if wide char orientation is supported.  */


/* Define if unbuffered stream file optimization is supported.  */


/* Define if lite version of exit supported.  */
/* #undef _LITE_EXIT */

/* Define if declare atexit data as global.  */
/* #undef _REENT_GLOBAL_ATEXIT */

/* Define if small footprint nano-formatted-IO implementation used.  */
/* #undef _NANO_FORMATTED_IO */

/*
 * Iconv encodings enabled ("to" direction)
 */
/* #undef _ICONV_TO_ENCODING_BIG5 */
/* #undef _ICONV_TO_ENCODING_CP775 */
/* #undef _ICONV_TO_ENCODING_CP850 */
/* #undef _ICONV_TO_ENCODING_CP852 */
/* #undef _ICONV_TO_ENCODING_CP855 */
/* #undef _ICONV_TO_ENCODING_CP866 */
/* #undef _ICONV_TO_ENCODING_EUC_JP */
/* #undef _ICONV_TO_ENCODING_EUC_TW */
/* #undef _ICONV_TO_ENCODING_EUC_KR */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */
/* #undef _ICONV_TO_ENCODING_KOI8_R */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */
/* #undef _ICONV_TO_ENCODING_KOI8_U */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */
/* #undef _ICONV_TO_ENCODING_UCS_2 */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */
/* #undef _ICONV_TO_ENCODING_UCS_4 */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */
/* #undef _ICONV_TO_ENCODING_US_ASCII */
/* #undef _ICONV_TO_ENCODING_UTF_16 */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */
/* #undef _ICONV_TO_ENCODING_UTF_8 */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/*
 * Iconv encodings enabled ("from" direction)
 */
/* #undef _ICONV_FROM_ENCODING_BIG5 */
/* #undef _ICONV_FROM_ENCODING_CP775 */
/* #undef _ICONV_FROM_ENCODING_CP850 */
/* #undef _ICONV_FROM_ENCODING_CP852 */
/* #undef _ICONV_FROM_ENCODING_CP855 */
/* #undef _ICONV_FROM_ENCODING_CP866 */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */
# 16 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 1 3 4



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/ieeefp.h" 1 3 4
# 5 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */





extern "C" {


/* Macros to determine that newlib is being used.  Put in this header to 
 * be similar to where glibc stores its version of these macros.
 */



/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
# 43 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 3 4
/* Version with trailing underscores for BSD compatibility. */


/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */
# 99 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 3 4
/* XMK loosely adheres to POSIX -- 1003.1 */
# 213 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 3 4
/* Per the permission given in POSIX.1-2008 section 2.2.1, define
 * _POSIX_C_SOURCE if _XOPEN_SOURCE is defined and _POSIX_C_SOURCE is not.
 * (_XOPEN_SOURCE indicates that XSI extensions are desired by an application.)
 * This permission is first granted in 2008, but use it for older ones, also.
 * Allow for _XOPEN_SOURCE to be empty (from the earliest form of it, before it
 * was required to have specific values).
 */
# 233 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 3 4
}
# 6 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 2 3 4





/* exceptions first */







/* 16 bit integer machines */
# 116 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
# 126 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* Configure small REENT structure for Xilinx MicroBlaze platforms */
# 192 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
# 217 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* End of block that should be kept in sync with GCC's limits.h.  */
# 255 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */



/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
# 274 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/config.h" 3 4
/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */






/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
# 17 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 2 3 4

/* First try to figure out whether we really are in an ANSI C environment.  */
/* FIXME: This probably needs some work.  Perhaps sys/config.h can be
   prevailed upon to give us a clue.  */





/*  ISO C++.  */
# 98 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 3 4
/* Support gcc's __attribute__ facility.  */







/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */




/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
# 12 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 17 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4

# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 1 3 4
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */



extern "C" {



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 15 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 1 3 4
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_types.h" 1 3 4
/*
 *  $Id$
 */



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 9 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 2 3 4

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */

/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
# 23 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
extern "C" {



typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 217 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 3 4
}
# 8 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_types.h" 2 3 4
# 13 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/lock.h" 1 3 4



/* dummy lock routines for single-threaded aps */

typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;

# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 10 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/lock.h" 2 3 4
# 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 2 3 4


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;


/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */

typedef long _fpos_t; /* XXX must match off_t in <sys/types.h> */
    /* (and must be `long' for now) */
# 51 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 3 4
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */

typedef signed int _ssize_t;
# 67 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 353 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
typedef unsigned int wint_t;




/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 68 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 2 3 4


/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value; /* Value so far.  */
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;



/* Iconv descriptor type */
typedef void *_iconv_t;
# 16 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 2 3 4






typedef unsigned long __ULong;
# 38 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
struct _reent;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};

/*
 * atexit() support.
 */



struct _on_exit_args {
 void * _fnargs[32 /* must be at least 32 to guarantee ANSI conformance */]; /* user fn args */
 void * _dso_handle[32 /* must be at least 32 to guarantee ANSI conformance */];
 /* Bitmask is set if user function takes arguments.  */
 __ULong _fntypes; /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
 /* Bitmask is set if function was registered via __cxa_atexit.  */
 __ULong _is_cxa;
};
# 91 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
struct _atexit {
 struct _atexit *_next; /* next in list */
 int _ind; /* next index in this table */
 /* Some entries may already have been called, and will be NULL.  */
 void (*_fns[32 /* must be at least 32 to guarantee ANSI conformance */])(void); /* the table itself */
        struct _on_exit_args _on_exit_args;
};
# 108 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
 unsigned char *_base;
 int _size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */
# 179 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
struct __sFILE {
  unsigned char *_p; /* current position in (some) buffer */
  int _r; /* read space left for getc() */
  int _w; /* write space left for putc() */
  short _flags; /* flags, below; this FILE is free if 0 */
  short _file; /* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
  int _lbfsize; /* 0 or -_bf._size, for inline putc */





  /* operations */
  void * _cookie; /* cookie passed to io functions */

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub; /* ungetc buffer */
  unsigned char *_up; /* saved _p when _p is doing ungetc data */
  int _ur; /* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
  unsigned char _nbuf[1]; /* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb; /* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int _blksize; /* stat.st_blksize (may be != _bf._size) */
  _off_t _offset; /* current lseek offset */


  struct _reent *_data; /* Here for binary compatibility? Remove? */



  _flock_t _lock; /* for thread-safety locking */

  _mbstate_t _mbstate; /* for wide char stdio functions. */
  int _flags2; /* for future use */
};
# 285 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */







struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};

/* How big the some arrays are.  */




/*
 * struct _reent
 *
 * This structure contains *all* globals needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  IE: All state information is contained here.
 */
# 568 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
struct _reent
{
  int _errno; /* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;

  int _inc; /* used by tmpnam */
  char _emergency[25];

  int _current_category; /* used by setlocale */
  const char *_current_locale;

  int __sdidinit; /* 1 means stdio has been init'd */

  void (* __cleanup) (struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen; /* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */
      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;


  /* atexit stuff */
  struct _atexit *_atexit; /* points to head of LIFO stack */
  struct _atexit _atexit0; /* one guaranteed table, required by ANSI */


  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue; /* root of glue chain */
  __FILE __sf[3]; /* first three file descriptors */
};
# 751 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
/* This value is used in stdlib/misc.c.  reent/reent.c has to know it
   as well to make sure the freelist is correctly free'd.  Therefore
   we define it here, rather than in stdlib/misc.c, as before. */


/*
 * All references to struct _reent are via this pointer.
 * Internally, newlib routines that need to reference it should use _REENT.
 */





extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */
# 791 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 3 4
}
# 19 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/private/var/jenkins/workspace/ARC_Toolchain-OSX/INSTALL/arc-elf32/sys-include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */
# 53 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 54 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 55 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 2 3 4
# 78 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Testing against Clang-specific extensions.
 */
# 105 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */
# 143 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler memory barriers, specific to gcc and clang.
 */
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
# 171 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
# 228 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
# 285 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Keywords added in C11.
 */
# 308 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
# 338 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * XXX: Some compilers (Clang 3.3, GCC 4.7) falsely announce C++11 mode
 * without actually supporting the thread_local keyword. Don't check for
 * the presence of C++11 when defining _Thread_local.
 */
# 353 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */
# 420 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/* XXX: should use `#if __STDC_VERSION__ < 199901'. */




/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
# 439 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
# 489 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
# 505 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
# 529 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * FORTIFY_SOURCE, and perhaps other compiler-specific features, require
 * the use of non-standard inlining.  In general we should try to avoid
 * using these but GCC-compatible compilers tend to support the extensions
 * well enough to use them in limited cases.
 */
# 545 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
# 636 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*-
 * The following definitions are an extension of the behavior originally
 * implemented in <sys/_posix.h>, but with a different level of granularity.
 * POSIX.1 requires that the macros we test be defined before any standard
 * header file is included.
 *
 * Here's a quick run-down of the versions:
 *  defined(_POSIX_SOURCE)		1003.1-1988
 *  _POSIX_C_SOURCE == 1		1003.1-1990
 *  _POSIX_C_SOURCE == 2		1003.2-1992 C Language Binding Option
 *  _POSIX_C_SOURCE == 199309		1003.1b-1993
 *  _POSIX_C_SOURCE == 199506		1003.1c-1995, 1003.1i-1995,
 *					and the omnibus ISO/IEC 9945-1: 1996
 *  _POSIX_C_SOURCE == 200112		1003.1-2001
 *  _POSIX_C_SOURCE == 200809		1003.1-2008
 *
 * In addition, the X/Open Portability Guide, which is now the Single UNIX
 * Specification, defines a feature-test macro which indicates the version of
 * that specification, and which subsumes _POSIX_C_SOURCE.
 *
 * Our macros begin with two underscores to avoid namespace screwage.
 */

/* Deal with _GNU_SOURCE, which implies everything and the kitchen sink */







/* Deal with IEEE Std. 1003.1-1990, in which _POSIX_C_SOURCE == 1. */





/* Deal with IEEE Std. 1003.2-1992, in which _POSIX_C_SOURCE == 2. */





/* Deal with various X/Open Portability Guides and Single UNIX Spec. */
# 696 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */
# 727 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*-
 * Deal with _ANSI_SOURCE:
 * If it is defined, and no other compilation environment is explicitly
 * requested, then define our internal feature-test macros to zero.  This
 * makes no difference to the preprocessor (undefined symbols in preprocessing
 * expressions are defined to have value zero), but makes it more convenient for
 * a test program to print out the values.
 *
 * If a program mistakenly defines _ANSI_SOURCE and some other macro such as
 * _POSIX_C_SOURCE, we will assume that it wants the broader compilation
 * environment (and in fact we will never get here).
 */
# 762 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Type Safety Checking
 *
 * Clang provides additional attributes to enable checking type safety
 * properties that cannot be enforced by the C type system. 
 */
# 780 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 3 4
/*
 * Lock annotations.
 *
 * Clang provides support for doing basic thread-safety tests at
 * compile-time, by marking which locks will/should be held when
 * entering/leaving a functions.
 *
 * Furthermore, it is also possible to annotate variables and structure
 * members to enforce that they are only accessed when certain locks are
 * held.
 */







/* Structure implements a lock. */


/* Function acquires an exclusive or shared lock. */





/* Function attempts to acquire an exclusive or shared lock. */





/* Function releases a lock. */


/* Function asserts that an exclusive or shared lock is held. */





/* Function requires that an exclusive or shared lock is or is not held. */







/* Function should not be analyzed. */


/* Guard variables and structure members by lock. */
# 20 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/stdlib.h" 1 3 4



/* place holder so platforms may add stdlib.h extensions */
# 21 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 2 3 4
# 29 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
extern "C" {

typedef struct
{
  int quot; /* quotient */
  int rem; /* remainder */
} div_t;

typedef struct
{
  long quot; /* quotient */
  long rem; /* remainder */
} ldiv_t;




typedef struct
{
  long long int quot; /* quotient */
  long long int rem; /* remainder */
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);



int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar)



                                ;
void * calloc (size_t __nmemb, size_t __size) __attribute__ ((__nothrow__));
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) __attribute__ ((__nothrow__));
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);




long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) __attribute__ ((__nothrow__));
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *, const char *, size_t);
int _mbtowc_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *, const char *, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
size_t wcstombs (char *, const wchar_t *, size_t);
size_t _wcstombs_r (struct _reent *, char *, const wchar_t *, size_t, _mbstate_t *);
# 124 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
void qsort (void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void * __r, size_t __size) __attribute__ ((__nothrow__));





void srand (unsigned __seed);
double strtod (const char * __n, char ** __end_PTR);
double _strtod_r (struct _reent *,const char * __n, char ** __end_PTR);



float strtof (const char * __n, char ** __end_PTR);







long strtol (const char * __n, char ** __end_PTR, int __base);
long _strtol_r (struct _reent *,const char * __n, char ** __end_PTR, int __base);
unsigned long strtoul (const char * __n, char ** __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char * __n, char ** __end_PTR, int __base);

int system (const char *__string);
# 162 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
void _Exit (int __status) __attribute__ ((__noreturn__));
# 181 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);
# 212 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
long long atoll (const char *__nptr);







long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char * __n, char ** __end_PTR, int __base);







unsigned long long strtoull (const char * __n, char ** __end_PTR, int __base);
# 247 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) __attribute__ ((__nothrow__));
void * _calloc_r (struct _reent *, size_t, size_t) __attribute__ ((__nothrow__));
void _free_r (struct _reent *, void *) __attribute__ ((__nothrow__));
void * _realloc_r (struct _reent *, void *, size_t) __attribute__ ((__nothrow__));
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);

/* There are two common qsort_r variants.  If you request
   _BSD_SOURCE, you get the BSD version; otherwise you get the GNU
   version.  We want that #undef qsort_r will still let you
   invoke the underlying function, but that requires gcc support. */
# 275 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 3 4
/* On platforms where long double equals double.  */

extern long double _strtold_r (struct _reent *, const char *, char **);



extern long double strtold (const char *, char **);



/*
 * If we're in a mode greater than C99, expose C11 functions.
 */

void * aligned_alloc(size_t, size_t) __attribute__((__malloc__))
     __attribute__((__alloc_size__(2)));
int at_quick_exit(void (*)(void));
__attribute__((__noreturn__)) void
 quick_exit(int);


}
# 25 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 1 3 4
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 11 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 1 3 4
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 12 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/private/var/jenkins/workspace/ARC_Toolchain-OSX/INSTALL/arc-elf32/sys-include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */
# 13 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 18 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4

extern "C" {

void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void * , const void * , size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *, const char *);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *, const char *);

size_t strxfrm (char *, const char *, size_t);


char *strtok_r (char *, const char *, char **);


int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (const char *, int);


void * memccpy (void * , const void * , int, size_t);





void * memrchr (const void *, int, size_t);




char *rindex (const char *, int);

char *stpcpy (char *, const char *);
char *stpncpy (char *, const char *, size_t);

int strcasecmp (const char *, const char *);






char *strdup (const char *);





char *strndup (const char *, size_t);
# 98 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 3 4
/* There are two common strerror_r variants.  If you request
   _GNU_SOURCE, you get the GNU version; otherwise you get the POSIX
   version.  POSIX requires that #undef strerror_r will still let you
   invoke the underlying function, but that requires gcc support.  */




int strerror_r (int, char *, size_t)

             __asm__ ("" /* stringify without expanding x */ /* expand x, then stringify */ "__xpg_strerror_r")

  ;






/* Reentrant version of strerror.  */
char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


int strncasecmp (const char *, const char *, size_t);



size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


/*
 * The origin of these is unknown to me so I am conditionalizing them
 * on __STRICT_ANSI__. Finetuning this is definitely needed. --joel
 */






char *strsignal (int __signo);
# 166 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 3 4
/* There are two common basename variants.  If you do NOT #include <libgen.h>
   and you do

     #define _GNU_SOURCE
     #include <string.h>

   you get the GNU version.  Otherwise you get the POSIX versionfor which you
   should #include <libgen.h>i for the function prototype.  POSIX requires that
   #undef basename will still let you invoke the underlying function.  However,
   this also implies that the POSIX version is used in this case.  That's made
   sure here. */





# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/string.h" 1 3 4
/* This is a dummy <sys/string.h> used as a placeholder for
   systems that need to have a special header file.  */
# 183 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 2 3 4

}
# 26 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdbool.h" 1 3 4
/* Copyright (C) 1998-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 39 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdbool.h" 3 4
/* Supporting <stdbool.h> in C++ is a GCC extension.  */







/* Signal that all the definitions are present.  */
# 27 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 1 3 4




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 1 3 4
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/ieeefp.h" 1 3 4
# 7 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 8 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 2 3 4

extern "C" {

/* __dmath, __fmath, and __ldmath are only here for backwards compatibility
 * in case any code used them.  They are no longer used by Newlib, itself,
 * other than legacy.  */
union __dmath
{
  double d;
  __ULong i[2];
};

union __fmath
{
  float f;
  __ULong i[1];
};


union __ldmath
{
  long double ld;
  __ULong i[4];
};


/* Natural log of 2 */



 /* gcc >= 3.3 implicitly defines builtins for HUGE_VALx values.  */
# 105 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
/* Reentrant ANSI C functions.  */


extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);


/* Non reentrant ANSI C functions.  */



extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);






/* ISO C99 types and macros. */

/* FIXME:  FLT_EVAL_METHOD should somehow be gotten from float.h (which is hard,
 * considering that the standard says the includes it defines should not
 * include other includes that it defines) and that value used.  (This can be
 * solved, but autoconf has a bug which makes the solution more difficult, so
 * it has been skipped for now.)  */






    typedef float float_t;
    typedef double double_t;
# 199 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);
# 218 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
/* Note: isinf and isnan were once functions in newlib that took double
 *       arguments.  C99 specifies that these names are reserved for macros
 *       supporting multiple floating point types.  Thus, they are
 *       now defined as macros.  Implementations of the old functions
 *       taking double arguments still exist for compatibility purposes
 *       (prototypes for them are in <ieeefp.h>).  */
# 257 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
/* Non ANSI long double precision functions.  */

extern int finitel (long double);

/* Non ANSI double precision functions.  */

extern double infinity (void);
extern double nan (const char *);
extern int finite (double);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);





extern double hypot (double, double);




/* Single precision versions of ANSI functions.  */

extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);


/* Other single precision functions.  */

extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern int finitef (float);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);


/* On platforms where long double equals double.  */

/* Reentrant ANSI C functions.  */

extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);

/* Non reentrant ANSI C functions.  */


extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 475 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
extern double drem (double, double);
extern void sincos (double, double *, double *);
extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);

extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);

extern float dremf (float, float);
extern void sincosf (float, float *, float *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);

extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);

/* GNU extensions */

extern double exp10 (double);


extern double pow10 (double);


extern float exp10f (float);


extern float pow10f (float);
# 559 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
/* Useful constants.  */
# 615 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/math.h" 3 4
}
# 28 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/binary.h" 1
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 30 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
//#include "itoa.h"






extern "C"{


# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_constants.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C"{
# 50 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_constants.h"
enum BitOrder {
 LSBFIRST = 0,
 MSBFIRST = 1
};

//      LOW 0
//      HIGH 1







// undefine stdlib's abs if encountered
# 92 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_constants.h"
typedef unsigned int word;



typedef bool boolean ;
typedef uint8_t byte ;


} // extern "C"
# 41 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2





void yield(void);

/* sketch */
extern void setup( void ) ;
extern void loop( void ) ;

typedef void (*voidFuncPtr)( void ) ;

/* Define attribute */




/* Types used for the tables below */
/* TODO - consider using smaller types to optimise storage space */
typedef struct _PinDescription
{
        uint32_t ulGPIOId; // GPIO port pin
        uint32_t ulGPIOPort; // GPIO port ID
        uint32_t ulGPIOType; // LMT or SS
        uint32_t ulGPIOBase; // GPIO register base address
        uint32_t ulSocPin; // SoC pin number
        uint32_t ulPinMode; // Current SoC pin mux mode
        uint32_t ulPwmChan; // PWM channel
        uint32_t ulPwmScale; // PWM frequency scaler
        uint32_t ulAdcChan; // ADC channel
        uint32_t ulInputMode; // Pin mode
} PinDescription;
# 93 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h"
/* Pins table to be instanciated into variant.cpp */
extern PinDescription g_APinDescription[] ;


} // extern "C"

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/ctype.h" 1 3 4



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 5 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/ctype.h" 2 3 4

extern "C" {

int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isblank (int __c);
# 43 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/ctype.h" 3 4
const

extern char *__ctype_ptr__;
# 108 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/ctype.h" 3 4
/* For C++ backward-compatibility only.  */
extern const char _ctype_[];

}
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WCharacter.h" 2


extern "C" {


// WCharacter.h prototypes

inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));



// Checks for an alphanumeric character.
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( (isalnum(c) || isprint(c)) == 0 ? false : true);
}


// Checks for an alphabetic character.
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? false : true);
}


// Checks whether c is a 7-bit unsigned char value
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
/*  return ( isascii(c) == 0 ? false : true); */
  return ( (c & ~0x7f) != 0 ? false : true);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? false : true);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? false : true);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? false : true);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? false : true);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? false : true);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? false : true);
}


// Checks for any printable character which is not a space
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? false : true);
}


// Checks for white-space characters. For the avr-libc library,
// these are: space, formfeed ('\f'), newline ('\n'), carriage
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? false : true);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? false : true);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? false : true);
}


// Converts c to a 7-bit unsigned char value that fits into the
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
/*  return toascii (c); */
  return (c & 0x7f);
}


// Warning:
// Many people will be unhappy if you use this function.
// This function will convert accented letters into random
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}


}
# 100 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified by Daniel Hugo  Thu Mar 6 17:14:38 2014:   
    Implement operator+ in .h per Arduino spec, fix long snprintf 
    fmt in .cpp.
*/





# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 1 3 4
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 31 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/string.h" 1 3 4
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */
# 32 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/stdlib_noniso.h" 1
/* 
  stdlib_noniso.h - nonstandard (but usefull) conversion functions
  Copyright (c) 2014 Ivan Grokhotkov. All rights reserved.
  This file is part of the esp8266 core for Arduino environment.
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C"{


int atoi(const char *s);

long atol(const char* s);

double atof(const char* s);

char* itoa (int val, char *s, int radix);

char* ltoa (long val, char *s, int radix);

char* utoa (unsigned int val, char *s, int radix);

char* ultoa (unsigned long val, char *s, int radix);

char* dtostrf (double val, signed char width, unsigned char prec, char *s);


} // extern "C"
# 34 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/avr/pgmspace.h" 1
/*
pgmspace.c wrapper for Intel maker boards
Copyright (C) 2014 Intel Corporation

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

Author: Mikal Hart
 */






# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/newlib.h" 1 3 4
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */
# 17 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 2 3 4

# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_intsup.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 13 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_intsup.h" 2 3 4


/* gcc > 3.2 implicitly defines the values we are interested */






/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */





/* Check if "long" is 64bit or 32bit wide */






/* Determine how intptr_t and intN_t fastN_t and leastN_t are defined by gcc
   for this target.  This is used to determine the correct printf() constant in
   inttypes.h and other  constants in stdint.h.
   So we end up with
   ?(signed|unsigned) char == 0
   ?(signed|unsigned) short == 1
   ?(signed|unsigned) int == 2
   ?(signed|unsigned) short int == 3
   ?(signed|unsigned) long == 4
   ?(signed|unsigned) long int == 6
   ?(signed|unsigned) long long == 8
   ?(signed|unsigned) long long int == 10
 */
       
       
       
       
       
       
       
# 201 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 19 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 2 3 4


# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 22 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 2 3 4



/* 8-bit types */




/* NOTICE: scanning 8-bit types requires use of the hh specifier
 * which is only supported on newlib platforms that
 * are built with C99 I/O format support enabled.  If the flag in
 * newlib.h hasn't been set during configuration to indicate this, the 8-bit
 * scanning format macros are disabled here as they result in undefined
 * behaviour which can include memory overwrite.  Overriding the flag after the
 * library has been built is not recommended as it will expose the underlying
 * undefined behaviour.
 */
# 54 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* Macros below are only enabled for a newlib built with C99 I/O format support. */
# 73 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* Macros below are only enabled for a newlib built with C99 I/O format support. */
# 91 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* Macros below are only enabled for a newlib built with C99 I/O format support. */
# 102 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* 16-bit types */
# 152 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* 32-bit types */
# 202 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* 64-bit types */
# 256 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* max-bit types */
# 281 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
/* ptr types */
# 307 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 3 4
typedef struct {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;


extern "C" {


extern intmax_t imaxabs(intmax_t j);
extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denomer);
extern intmax_t strtoimax(const char *, char **, int);
extern uintmax_t strtoumax(const char *, char **, int);
extern intmax_t wcstoimax(const wchar_t *, wchar_t **, int);
extern uintmax_t wcstoumax(const wchar_t *, wchar_t **, int);


}
# 28 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/avr/pgmspace.h" 2







typedef void prog_void;
typedef char prog_char;
typedef unsigned char prog_uchar;
typedef int8_t prog_int8_t;
typedef uint8_t prog_uint8_t;
typedef int16_t prog_int16_t;
typedef uint16_t prog_uint16_t;
typedef int32_t prog_int32_t;
typedef uint32_t prog_uint32_t;
typedef int64_t prog_int64_t;
typedef uint64_t prog_uint64_t;

typedef const void* int_farptr_t;
typedef const void* uint_farptr_t;
# 35 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 2

// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(long long, unsigned char base=10);
 explicit String(unsigned long long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the
 // concatenation is considered unsucessful.
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(long long num);
 unsigned char concat(unsigned long long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr);return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (long long num) {concat(num); return (*this);}
 String & operator += (unsigned long long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character acccess
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  {getBytes((unsigned char *)buf, bufsize, index);}
 const char * c_str() const { return buffer; }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;
 char * getCSpec(int base, bool issigned, bool islong);

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);


 // utilities functions.
 // Number of digits (including sign) in the integer portion of a float/double
 int digitsBe4Decimal(double number);
};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 101 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Tone.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/






/*
 * \brief Generates a square wave of the specified frequency (and 50% duty cycle) on a pin.
 *        A duration can be specified, otherwise the wave continues until a call to noTone()
 * \param pin
 * \param val
 */
extern void tone( uint32_t _pin, unsigned int frequency, unsigned long duration = 0);
/*
 * \brief Stops the generation of a square wave triggered by tone(). Has no effect if no tone is being generated.
 *
 * \param pin
 */

extern void noTone( uint32_t _pin ) ;
# 102 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WMath.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




extern long random( long ) ;
extern long random( long, long ) ;
extern void randomSeed( uint32_t dwSeed ) ;
extern long map( long, long, long, long, long ) ;

extern uint16_t makeWord( uint16_t w ) ;
extern uint16_t makeWord( uint8_t h, uint8_t l ) ;
# 103 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 23 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/HardwareSerial.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 26 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Stream.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/inttypes.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Print.h" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 1 3 4
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

/*
 * NB: to fit things in six character monocase externals, the
 * stdio code uses the prefix `__s' for stdio objects, typically
 * followed by a three-character attempt at a mnemonic.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 30 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4





# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/private/var/jenkins/workspace/ARC_Toolchain-OSX/INSTALL/arc-elf32/sys-include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */
# 36 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 37 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4


# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 40 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4

/*
 * <sys/reent.h> defines __FILE, _fpos_t.
 * They must be defined there because struct _reent needs them (and we don't
 * want reent.h to include this file.
 */

# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 1 3 4
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 48 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 1 3 4
/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */



# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/_ansi.h" 1 3 4
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 21 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include-fixed/sys/cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/private/var/jenkins/workspace/ARC_Toolchain-OSX/INSTALL/arc-elf32/sys-include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */
# 22 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_types.h" 1 3 4
/*
 *  $Id$
 */
# 27 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4
# 62 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_types.h" 1 3 4
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/
# 63 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_stdint.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */
# 13 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/_stdint.h" 2 3 4


extern "C" {



typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;



typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;


}
# 64 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4







# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 72 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/types.h" 1 3 4



/*
 *  The following section is RTEMS specific and is needed to more
 *  closely match the types defined in the BSD machine/types.h.
 *  This is needed to let the RTEMS/BSD TCP/IP stack compile.
 */
# 19 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/machine/types.h" 3 4
typedef long int __off_t;
typedef int __pid_t;

__extension__ typedef long long int __loff_t;





typedef long __suseconds_t; /* microseconds (signed) */
# 73 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4

/* To ensure the stat struct's layout doesn't change when sizeof(int), etc.
   changes, we assume sizeof short and long never change and have all types
   used to define struct stat use them and not int where possible.
   Where not possible, _ST_INTxx are used.  It would be preferable to not have
   such assumptions, but until the extra fluff is necessary, it's avoided.
   No 64 bit targets use stat yet.  What to do about them is postponed
   until necessary.  */
# 93 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
/* also defined in mingw/gmon.h and in w32api/winsock[2].h */

typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;





typedef unsigned short ushort; /* System V compatibility */
typedef unsigned int uint; /* System V compatibility */
typedef unsigned long ulong; /* System V compatibility */



typedef unsigned long /* clock() */ clock_t;




typedef long /* time() */ time_t;




typedef long daddr_t;



typedef char * caddr_t;
# 142 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
typedef unsigned short ino_t;
# 163 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
/*
 * All these should be machine specific - right now they are all broken.
 * However, for all of Cygnus' embedded targets, we want them to all be
 * the same.  Otherwise things like sizeof (struct stat) might depend on
 * how the file was compiled (e.g. -mint16 vs -mint32, etc.).
 */


typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;





typedef int pid_t;







typedef long key_t;

typedef _ssize_t ssize_t;
# 204 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));




typedef unsigned short nlink_t;






typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;


typedef __suseconds_t suseconds_t;



typedef __int64_t sbintime_t;

# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 235 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 2 3 4


/* Cygwin will probably never have full posix compliance due to little things
 * like an inability to set the stackaddress. Cygwin is also using void *  
 * pointers rather than structs to ensure maximum binary compatability with
 * previous releases.
 * This means that we don't use the types defined here, but rather in
 * <cygwin/types.h>
 */
# 432 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
/* POSIX Barrier Types */
# 444 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/types.h" 3 4
/* POSIX Spin Lock Types */






/* POSIX Reader/Writer Lock Types */
# 49 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4

extern "C" {


typedef __FILE FILE;






typedef _fpos_t fpos_t;





# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/stdio.h" 1 3 4




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/reent.h" 1 3 4
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/sys/stdio.h" 2 3 4

/* Internal locking macros, used to protect stdio functions.  In the
   general case, expand to nothing. Use __SSTR flag in FILE _flags to
   detect if FILE is private to sprintf/sscanf class of functions; if
   set then do nothing as lock is not initialised. */
# 67 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 2 3 4





 /* RD and WR are never simultaneously asserted */
# 88 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/* _flags2 flags */



/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which stupidly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although these happen to match their counterparts above, the
 * implementation does not rely on that (so these could be renumbered).
 */
# 155 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * Functions defined in ANSI C standard.
 */
# 167 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *);

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int printf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int scanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int sscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int vfprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int vsprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * , size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char * _name, const char * _type);
int sprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int remove (const char *);
int rename (const char *, const char *);
# 247 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
int asiprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
char * asniprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * asnprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int asprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int diprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int fiprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fiscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int iprintf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int iscanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int siprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int siscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int snprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int sniprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int vasiprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vasprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vdiprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vfscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int viprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int viscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vsiprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vsiscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vsniprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsnprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;



/*
 * Routines in POSIX 1003.1:2001.
 */
# 334 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * Routines in POSIX 1003.1:200x.
 */
# 356 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * Recursive versions of the above.
 */

int _asiprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
char * _asnprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _asprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _diprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _dprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);
char * _fgets_unlocked_r (struct _reent *, char *, int, FILE *);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fiscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
FILE * _fmemopen_r (struct _reent *, void *, size_t, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
FILE * _freopen_r (struct _reent *, const char *, const char *, FILE *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
int _fputs_unlocked_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
size_t _fread_unlocked_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
size_t _fwrite_unlocked_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _iscanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int _siprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _siscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _snprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _sprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _sscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _vscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;

/* Other extensions.  */

int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void * , size_t _size, size_t _n, FILE *);
size_t fwrite_unlocked (const void * , size_t _size, size_t _n, FILE *);
# 537 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * Routines internal to the implementation.
 */

int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);

/*
 * Stdio function-access interface.
 */
# 612 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * The __sfoo macros are here so that we can 
 * define function versions in the C library.
 */
# 658 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
/*
 * This has been tuned to generate reasonable code on the vax using pcc
 */
# 728 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdio.h" 3 4
}
# 25 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Print.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified by Daniel Hugo  Thu Mar 6 17:14:38 2014:   
    Implement operator+ in .h per Arduino spec, fix long snprintf 
    fmt in .cpp.
*/
# 27 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Print.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Printable.h" 1
/*
  Printable.h - Interface class that allows printing of complex types
  Copyright (c) 2011 Adrian McEwen.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/arc-elf32/sys-include/stdlib.h" 1 3 4
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Printable.h" 2

class Print;

/** The Printable class provides a way for new classes to allow themselves to be printed.
    By deriving from Printable and implementing the printTo method, it will then be possible
    for users to print out instances of this class by passing them into the usual
    Print::print and Print::println methods.
*/

class Printable
{
  public:
    virtual size_t printTo(Print& p) const = 0;
};
# 28 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Print.h" 2






class Print
{
  private:
    int write_error;
    size_t printNumber(unsigned long, uint8_t);
    size_t printLongLong(unsigned long long, uint8_t);
    size_t printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { write_error = err; }
  public:
    Print() : write_error(0) {}

    int getWriteError() { return write_error; }
    void clearWriteError() { setWriteError(0); }

    virtual size_t write(uint8_t) = 0;
    size_t write(const char *str) {
      if (str == __null) return 0;
      return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    size_t write(const char *buffer, size_t size) {
      return write((const uint8_t *)buffer, size);
    }

    size_t print(const __FlashStringHelper *);
    size_t print(const String &);
    size_t print(const char[]);
    size_t print(char);
    size_t print(unsigned char, int = 10);
    size_t print(int, int = 10);
    size_t print(unsigned int, int = 10);
    size_t print(long, int = 10);
    size_t print(long long, int = 10);
    size_t print(unsigned long, int = 10);
    size_t print(unsigned long long, int = 10);
    size_t print(double, int = 2);
    size_t print(const Printable&);

    size_t println(const __FlashStringHelper *);
    size_t println(const String &s);
    size_t println(const char[]);
    size_t println(char);
    size_t println(unsigned char, int = 10);
    size_t println(int, int = 10);
    size_t println(unsigned int, int = 10);
    size_t println(long, int = 10);
    size_t println(long long, int = 10);
    size_t println(unsigned long, int = 10);
    size_t println(unsigned long long, int = 10);
    size_t println(double, int = 2);
    size_t println(const Printable&);
    size_t println(void);
};
# 27 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Stream.h" 2

// compatability macros for testing
/*
#define   getInt()            parseInt()
#define   getInt(skipChar)    parseInt(skipchar)
#define   getFloat()          parseFloat()
#define   getFloat(skipChar)  parseFloat(skipChar)
#define   getString( pre_string, post_string, buffer, length)
readBytesBetween( pre_string, terminator, buffer, length)
*/

class Stream : public Print
{
  protected:
    unsigned long _timeout; // number of milliseconds to wait for the next char before aborting timed read
    unsigned long _startMillis; // used for timeout measurement
    int timedRead(); // private method to read stream with timeout
    int timedPeek(); // private method to peek stream with timeout
    int peekNextDigit(); // returns the next numeric digit in the stream or -1 if timeout

  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;
    virtual void flush() = 0;

    Stream() {_timeout=1000;}

// parsing methods

  void setTimeout(unsigned long timeout); // sets maximum milliseconds to wait for stream data, default is 1 second

  bool find(char *target); // reads data from the stream until the target string is found
  bool find(uint8_t *target) { return find ((char *)target); }
  // returns true if target string is found, false if timed out (see setTimeout)

  bool find(char *target, size_t length); // reads data from the stream until the target string of given length is found
  bool find(uint8_t *target, size_t length) { return find ((char *)target, length); }
  // returns true if target string is found, false if timed out

  bool find(char target) { return find (&target, 1); }

  bool findUntil(char *target, char *terminator); // as find but search ends if the terminator string is found
  bool findUntil(uint8_t *target, char *terminator) { return findUntil((char *)target, terminator); }

  bool findUntil(char *target, size_t targetLen, char *terminate, size_t termLen); // as above but search ends if the terminate string is found
  bool findUntil(uint8_t *target, size_t targetLen, char *terminate, size_t termLen) {return findUntil((char *)target, targetLen, terminate, termLen); }


  long parseInt(); // returns the first valid (long) integer value from the current position.
  // initial characters that are not digits (or the minus sign) are skipped
  // integer is terminated by the first character that is not a digit.

  float parseFloat(); // float version of parseInt

  size_t readBytes( char *buffer, size_t length); // read chars from stream into buffer
  size_t readBytes( uint8_t *buffer, size_t length) { return readBytes((char *)buffer, length); }
  // terminates if length characters have been read or timeout (see setTimeout)
  // returns the number of characters placed in the buffer (0 means no valid data found)

  size_t readBytesUntil( char terminator, char *buffer, size_t length); // as readBytes with terminator character
  size_t readBytesUntil( char terminator, uint8_t *buffer, size_t length) { return readBytesUntil(terminator, (char *)buffer, length); }
  // terminates if length characters have been read, timeout, or if the terminator character  detected
  // returns the number of characters placed in the buffer (0 means no valid data found)

  // Arduino String functions to be added here
  String readString();
  String readStringUntil(char terminator);

  long parseInt(char skipChar); // as above but the given skipChar is ignored
  // as above but the given skipChar is ignored
  // this allows format characters (typically commas) in values to be ignored

  float parseFloat(char skipChar); // as above but the given skipChar is ignored
  protected:

  protected:
  struct MultiTarget {
    const char *str; // string you're searching for
    size_t len; // length of string you're searching for
    size_t index; // index used by the search routine.
  };

  // This allows you to search for an arbitrary number of strings.
  // Returns index of the target that is found first or -1 if timeout occurs.
  int findMulti(struct MultiTarget *targets, int tCount);
};
# 25 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/HardwareSerial.h" 2

class HardwareSerial : public Stream
{
  public:
    virtual void begin(unsigned long) = 0;
    virtual void end() = 0;
    virtual int available(void) = 0;
    virtual int peek(void) = 0;
    virtual int read(void) = 0;
    virtual void flush(void) = 0;
    virtual size_t write(uint8_t) = 0;
    using Print::write; // pull in write(str) and write(buf, size) from Print
    virtual operator bool() = 0;
};

extern void serialEventRun(void) __attribute__((weak));
# 104 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_pulse.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {


/*
 * \brief Measures the length (in microseconds) of a pulse on the pin; state is HIGH
 * or LOW, the type of pulse to measure.  Works on pulses from 2-3 microseconds
 * to 5 minutes in length, but must be called at least a few dozen microseconds
 * before the start of the pulse.
 */
extern uint32_t pulseIn( uint32_t ulPin, uint32_t ulState, uint32_t ulTimeout = 1000000UL ) ;



}
# 105 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2



// Include board variant
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/gpio.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/data_type.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Contents/Java/Arduino15/packages/Intel/tools/arc-elf32/1.6.9+1.0.1/lib/gcc/arc-elf32/4.8.5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 35 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/data_type.h" 2
# 45 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/data_type.h"
typedef uint8_t boolean_t;
typedef volatile uint32_t * io_register_t;

/**
 * @defgroup common_driver_defs Common Definitions
 * Common driver function return codes.
 * @ingroup common_drivers
 * @{
 */

/**
 * Common driver function return codes.
 */
typedef enum {
    DRV_RC_OK = 0,
    DRV_RC_FAIL,
    DRV_RC_TIMEOUT,
    DRV_RC_INVALID_CONFIG, /*!< configuration parameters incorrect */
    DRV_RC_MODE_NOT_SUPPORTED, /*!< controller/driver doesn't support this mode (master/slave) */
    DRV_RC_CONTROLLER_IN_USE, /*!< controller is in use */
    DRV_RC_CONTROLLER_NOT_ACCESSIBLE, /*!< controller not accessible from this core */
    DRV_RC_INVALID_OPERATION, /*!< attempt to perform an operation that is invalid */
    DRV_RC_WRITE_PROTECTED, /*!< Attempt to erase/program a memory region that is write protected */
    DRV_RC_READ_PROTECTED, /*!< Attempt to read a memory region that is read protected */
    DRV_RC_CHECK_FAIL, /*!< Read back data after programming does not match the word written to memory */
    DRV_RC_OUT_OF_MEM, /*!< Attempt to program data outside the memory boundaries */
    DRV_RC_ERASE_PC, /*!< Attempt to write/erase executable code currently in use */
    DRV_RC_TOTAL_RC_CODE /*!< Number of DRIVER_API_RC codes (used to extend this enum) */
} DRIVER_API_RC;
/** @} */
# 35 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/gpio.h" 2

typedef void (*gpio_callback_fn)(void);

/*!
 * GPIO types
 */
typedef enum {
    GPIO_INPUT, /*!< Configure GPIO pin as input */
    GPIO_OUTPUT, /*!< Configure GPIO pin as output */
    GPIO_INTERRUPT /*!< Configure GPIO pin as interrupt */
} GPIO_TYPE;

/*!
 * Interrupt types
 */
typedef enum {
    LEVEL, /*!< Configure an interrupt triggered on level */
    EDGE, /*!< Configure an interrupt triggered on single edge */
    DOUBLE_EDGE /*!< Configure an interrupt triggered on both rising and falling edges */
} INT_TYPE;

/*!
 * Polarity configuration for interrupts
 */
typedef enum {
    ACTIVE_LOW, /*!< Configure an interrupt on low level or falling edge */
    ACTIVE_HIGH /*!< Configure an interrupt on high level or rising edge */
} INT_POLARITY;

/*!
 * Debounce configuration for interrupts
 */
typedef enum {
    DEBOUNCE_OFF, /*!< Disable debounce for interrupt */
    DEBOUNCE_ON /*!< Enable debounce for interrupt */
} INT_DEBOUNCE;

/*!
 * ls_sync configuration for interrupts
 */
typedef enum {
    LS_SYNC_OFF, /*!< Disable ls sync for interrupt */
    LS_SYNC_ON /*!< Enable ls sync for interrupt */
} INT_LS_SYNC;

/*!
 * GPIO configuration structure
 */
typedef struct gpio_cfg_data {
    GPIO_TYPE gpio_type; /*!< GPIO type */
    INT_TYPE int_type; /*!< GPIO interrupt type */
    INT_POLARITY int_polarity; /*!< GPIO polarity configuration */
    INT_DEBOUNCE int_debounce; /*!< GPIO debounce configuration */
    INT_LS_SYNC int_ls_sync; /*!< GPIO ls sync configuration */
    gpio_callback_fn gpio_cb; /*!< Callback function called when an interrupt is triggered on this pin */
} gpio_cfg_data_t;

/*!
 * GPIO port configuration structure
 */
typedef struct gpio_port_cfg_data {
    uint32_t gpio_type; /*!< Set port type (0=INPUT, 1=OUTPUT) */
    uint32_t is_interrupt; /*!< Enable interrupt on GPIO (0=OFF, 1=ON) */
    uint32_t int_type; /*!< Sets interrupt type (0=LEVEL, 1=EDGE) */
    uint32_t int_bothedge; /*!< Enable interrupt on both rising and falling edges (0=OFF, 1=ON) */
    uint32_t int_polarity; /*!< GPIO polarity configuration (0=LOW, 1=HIGH) */
    uint32_t int_debounce; /*!< GPIO debounce configuration (0=OFF, 1=ON) */
    uint32_t int_ls_sync; /*!< GPIO ls sync configuration (0=OFF, 1=ON) */
    gpio_callback_fn gpio_cb[32]; /*!< Callback function called when an interrupt is triggered on this pin */
} gpio_port_cfg_data_t;
# 23 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/ss_gpio_iface.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




/**
 * \addtogroup arc_driver
 * @{
 * \defgroup gpio_arc_driver GPIO: General Purpose Input/Output API
 * @{
 * \brief Definition of the structure and functions used by GPIO ARC Driver implementation.
 */

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/data_type.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
# 43 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/ss_gpio_iface.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/gpio.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
# 44 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/ss_gpio_iface.h" 2




/*!
 * Port list
 */
typedef enum {
    SS_GPIO_8B0=0, /*!< GPIO port for pins from 0 to 7 */
    SS_GPIO_8B1, /*!< GPIO port for pins from 8 to 15 */
    SS_PORT_COUNT /*!< GPIO port count */
} SS_GPIO_PORT;


 extern "C" {


/*! \fn 
*
*  \brief   Function to deconfig a GPIO previously configured as an interrupt.
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_deconfig(SS_GPIO_PORT port_id, uint8_t bit);

/*! \fn     DRIVER_API_RC ss_gpio_set_config(SS_GPIO_PORT port_id, uint8_t bit, gpio_cfg_data_t *config)
*
*  \brief   Function to configure specified GPIO bit in specified GPIO port
*           Configuration parameters must be valid or an error is returned - see return values below.
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   config          : pointer to configuration structure
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_set_config(SS_GPIO_PORT port_id, uint8_t bit, gpio_cfg_data_t *config);


/*! \fn     DRIVER_API_RC ss_gpio_enable(SS_GPIO_PORT port_id)
*
*  \brief   Function to enable the specified GPIO port
*           Upon success, the specified GPIO port is no longer clock gated in hardware, it is now
*           capable of reading and writing GPIO bits and of generating interrupts.
*
*  \param   port_id         : GPIO port identifier
*  \param   pin             : bit in port to configure
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_enable(SS_GPIO_PORT port_id);

/*! \fn     DRIVER_API_RC ss_gpio_disable(SS_GPIO_PORT port_id)
*
*  \brief   Function to disable the specified GPIO port
*           Upon success, the specified GPIO port is clock gated in hardware, it is now
*           incapable of reading, writing GPIO bits and of generating interrupts.
*
*  \param   port_id         : GPIO port identifier
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_disable(SS_GPIO_PORT port_id);

/*! \fn     DRIVER_API_RC ss_gpio_write(SS_GPIO_PORT port_id, uint8_t bit, boolean_t value)
*
*  \brief   Function to transmit a block of data to the specified SPI slave
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   value           : value to write to bit
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_write(SS_GPIO_PORT port_id, uint8_t bit, boolean_t value);


/*! \fn     DRIVER_API_RC ss_gpio_read(SS_GPIO_PORT port_id, uint8_t bit, boolean_t *value)
*
*  \brief   Function to read a GPIO bit
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   *value          : address to place read value
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_read(SS_GPIO_PORT port_id, uint8_t bit, boolean_t *value);

/*! \fn     DRIVER_API_RC ss_gpio_write_port(SS_GPIO_PORT port_id, uint32_t value)
*
*  \brief   Function to write to a value to a given port
*
*  \param   port_id         : GPIO port identifier
*  \param   value           : value to write to port
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_write_port(SS_GPIO_PORT port_id, uint32_t value);

/*! \fn     DRIVER_API_RC ss_gpio_read_port(SS_GPIO_PORT port_id, uint32_t *value)
*
*  \brief   Function to read a given port
*
*  \param   port_id         : GPIO port identifier
*  \param   *value          : location to store result
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC ss_gpio_read_port(SS_GPIO_PORT port_id, uint32_t *value);


}




/**@} @}*/
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/soc_gpio.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




/**
 * \addtogroup common_drivers
 * @{
 * \defgroup soc_gpio SOC GPIO: General Purpose Input/Output API
 * @{
 * \brief Definition of the structure and functions used by SOC GPIO Driver implementation.
 */



# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/data_type.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
# 45 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/soc_gpio.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/gpio.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
# 46 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/soc_gpio.h" 2

// soc gpio 32 bit count




// soc gpio aon bit count




/*!
 * Port list
 */
typedef enum {

    SOC_GPIO_32=0, /*!< GPIO 32 port */

    SOC_GPIO_AON, /*!< GPIO aon port */




    SOC_PORT_COUNT /*!< GPIO port count */
} SOC_GPIO_PORT;



 extern "C" {


/*! \fn     DRIVER_API_RC soc_gpio_set_config(SOC_GPIO_PORT port_id, uint8_t bit, gpio_cfg_data_t *config)
*
*  \brief   Function to configure specified GPIO bit in specified GPIO port
*           Configuration parameters must be valid or an error is returned - see return values below.
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   config          : pointer to configuration structure
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_set_config(SOC_GPIO_PORT port_id, uint8_t bit, gpio_cfg_data_t *config);

/*! \fn     DRIVER_API_RC soc_gpio_set_port_config(SOC_GPIO_PORT port_id, soc_gpio_cfg_data_t *config)
*
*  \brief   Function to configure specified GPIO port (in LMT case the selection is ignored - only one port)
*
*  \param   port_id :         GPIO port identifier
*  \param   config  :         pointer to configuration structure
*
*  \return  RC_OK on success
*           RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller
*           RC_INVALID_CONFIG               - if any configuration parameters are not valid
*           RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_set_port_config(SOC_GPIO_PORT port_id, gpio_port_cfg_data_t *config);

/*! \fn     DRIVER_API_RC soc_gpio_deconfig(SOC_GPIO_PORT port_id, uint8_t bit)
*
*  \brief   Function to deconfigure specified GPIO bit in specified GPIO port
*           Configuration parameters must be valid or an error is returned - see return values below.
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to deconfigure
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_deconfig(SOC_GPIO_PORT port_id, uint8_t bit);

/*! \fn     DRIVER_API_RC soc_gpio_port_deconfig(SOC_GPIO_PORT port_id)
*
*  \brief   Function to deconfigure specified specified GPIO port
*
*  \param   port_id :        GPIO port identifier
*
*  \return  DRV_RC_OK on success
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_port_deconfig(SOC_GPIO_PORT port_id);

/*! \fn     DRIVER_API_RC soc_gpio_enable(SOC_GPIO_PORT port_id)
*
*  \brief   Function to enable the specified GPIO port
*           Upon success, the specified GPIO port is no longer clock gated in hardware, it is now
*           capable of reading and writing GPIO bits and of generating interrupts.
*
*  \param   port_id         : GPIO port identifier
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_enable(SOC_GPIO_PORT port_id);

/*! \fn     DRIVER_API_RC soc_gpio_disable(SOC_GPIO_PORT port_id)
*
*  \brief   Function to disable the specified GPIO port
*           Upon success, the specified GPIO port is clock gated in hardware, it is now
*           incapable of reading, writing GPIO bits and of generating interrupts.
*
*  \param   port_id         : GPIO port identifier
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_DEVICE_TYPE_NOT_SUPPORTED    - if port id is not supported by this controller\n
*           DRV_RC_INVALID_CONFIG               - if any configuration parameters are not valid\n
*           DRV_RC_CONTROLLER_IN_USE,             if port/bit is in use\n
*           DRV_RC_CONTROLLER_NOT_ACCESSIBLE      if port/bit is not accessible from this core\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_disable(SOC_GPIO_PORT port_id);

/*! \fn     DRIVER_API_RC soc_gpio_write(SOC_GPIO_PORT port_id, uint8_t bit, boolean_t value)
*
*  \brief   Function to set output value on the gpio bit
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   value           : value to write to bit
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_write(SOC_GPIO_PORT port_id, uint8_t bit, boolean_t value);


/*! \fn     DRIVER_API_RC soc_gpio_read(SOC_GPIO_PORT port_id, uint8_t bit, boolean_t *value)
*
*  \brief   Function to read a GPIO bit
*
*  \param   port_id         : GPIO port identifier
*  \param   bit             : bit in port to configure
*  \param   *value          : address to place read value
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_read(SOC_GPIO_PORT port_id, uint8_t bit, boolean_t *value);

/*! \fn     DRIVER_API_RC soc_gpio_write_port(SOC_GPIO_PORT port_id, uint32_t value)
*
*  \brief   Function to write to a value to a given port
*
*  \param   port_id         : GPIO port identifier
*  \param   value           : value to write to port
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_write_port(SOC_GPIO_PORT port_id, uint32_t value);

/*! \fn     DRIVER_API_RC soc_gpio_read_port(SOC_GPIO_PORT port_id, uint32_t *value)
*
*  \brief   Function to read a given port
*
*  \param   port_id         : GPIO port identifier
*  \param   *value          : location to store result
*
*  \return  DRV_RC_OK on success\n
*           DRV_RC_FAIL otherwise
*/
DRIVER_API_RC soc_gpio_read_port(SOC_GPIO_PORT port_id, uint32_t *value);

/**
 *  Mask the interrupt of a GPIO bit
 *
 * \param   port_id         : GPIO port identifier
 * \param   bit             : bit in port to configure
 *
 * \return
 *          DRV_RC_OK on success
 *          DRV_RC_FAIL otherwise
 */
DRIVER_API_RC soc_gpio_mask_interrupt(SOC_GPIO_PORT port_id, uint8_t bit);

/**
 *  Unmask the interrupt of a GPIO bit
 *
 * \param   port_id         : GPIO port identifier
 * \param   bit             : bit in port to configure
 *
 * \return
 *          DRV_RC_OK on success
 *          DRV_RC_FAIL otherwise
 */
DRIVER_API_RC soc_gpio_unmask_interrupt(SOC_GPIO_PORT port_id, uint8_t bit);


}





/**@} @}*/
# 25 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */






/* MMIO Register Access Macros. */







/*  Pin Muxing */
/*  TODO: DB - Change these to offsets from SCSS */
# 77 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* Interrupt masking */


/* Set both HOST_HALT_MASK and SS_HALT_MASK bits */
# 98 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* Identification */

/* Revision */

/* Sensor Subsystem */




/* Always On Counter */




/* Mailbox Channel Status */


/* Clock Gating */
/* TODO: DB - Change these to offsets from SCSS */







/* PWM */




/* PWM register offsets */
# 147 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* soc GPIOs */
# 167 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* ARC GPIOs */
# 182 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* Watchdog Timer */
# 203 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/*  RTC */
# 219 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/*  MPR */
# 238 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* I2C */



/* SPI */




/* Mailbox Interrupt*/


/* Mailbox Base Address */


/* Mailbox offsets */







/* Mailbox addresses for a given index */
# 277 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* DMAC Interrupts Mask Register Offsets */
# 288 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* Pin Muxing */

/* Read current pull-up reg, Zero pin bit, OR new mode into these bits, write reg - thereby preserving other pin mode settings */

/* Calculate mux register address from pin number and calculate pin number within that register - call SET_MUX_REG */



/* Read current Mux reg, Zero pin bits, OR new mode into these bits, write reg - thereby preserving other pin mode settings */

/* Calculate mux register address from pin number and calculate pin number within that register - call SET_MUX_REG */





/* Typical value used to unmask single source interrupts in SCSS. */




/* Latest Masks */
# 366 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* sticky registers */





/* SCSS Mailbox Interrupt masking/unmasking */




/* Second byte is for ARC */
# 386 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/scss_registers.h"
/* Interrupt vector mapping */
# 26 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 36 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_digital.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {


/**
 * \brief Configures the specified pin to behave either as an input or an output. See the description of digital pins for details.
 *
 * \param pin The number of the pin whose mode you wish to set
 * \param mode Either INPUT, INPUT_PULLUP or OUTPUT
 */
extern void pinMode( uint8_t pin, uint8_t mode ) ;

/**
 * \brief Write a HIGH or a LOW value to a digital pin.
 *
 * If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the
 * corresponding value: 3.3V for HIGH, 0V (ground) for LOW.
 *
 * TODO - update the text below for Arduino 101
 *
 * If the pin is configured as an INPUT, writing a HIGH value with digitalWrite() will enable an internal
 * 20K pullup resistor (see the tutorial on digital pins). Writing LOW will disable the pullup. The pullup
 * resistor is enough to light an LED dimly, so if LEDs appear to work, but very dimly, this is a likely
 * cause. The remedy is to set the pin to an output with the pinMode() function.
 *
 * \note Digital pin PIN_LED is harder to use as a digital input than the other digital pins because it has an LED
 * and resistor attached to it that's soldered to the board on most boards. If you enable its internal 20k pull-up
 * resistor, it will hang at around 1.7 V instead of the expected 5V because the onboard LED and series resistor
 * pull the voltage level down, meaning it always returns LOW. If you must use pin PIN_LED as a digital input, use an
 * external pull down resistor.
 *
 * \param pin the pin number
 * \param val HIGH or LOW
 */
extern void digitalWrite( uint8_t pin, uint8_t val ) ;

/**
 * \brief Reads the value from a specified digital pin, either HIGH or LOW.
 *
 * \param pin The number of the digital pin you want to read (int)
 *
 * \return HIGH or LOW
 */
extern int digitalRead( uint8_t pin ) ;


}
# 37 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/pins_arduino.h" 1
/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/
# 39 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/pins_arduino.h"
static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 12;
static const uint8_t SCK = 13;

static const uint8_t SDA = 18;
static const uint8_t SCL = 19;
static const uint8_t LED_BUILTIN = 13;

static const uint8_t A0 = 14;
static const uint8_t A1 = 15;
static const uint8_t A2 = 16;
static const uint8_t A3 = 17;
static const uint8_t A4 = 18;
static const uint8_t A5 = 19;

static const uint8_t ATN = 20;
# 38 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 23 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/RingBuffer.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  Modified by Dan O'Donovan Apr 29 2014: add buffer overflow control 
*/






// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.


class RingBuffer
{
public:
 uint8_t _aucBuffer[256] ;
 int _iHead ;
 int _iTail ;
 bool _buffer_overflow ;

 RingBuffer( void ) ;
 void store_char( uint8_t c ) ;
 bool overflow() { bool ret = _buffer_overflow; _buffer_overflow = false; return ret; }
} ;
# 24 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h" 1
/* board.h - board configuration macros for the Arduino 101-arc BSP */

/*
 * Copyright (c) 2014-2015 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION
This header file is used to specify and describe board-level aspects for the
'Arduino 101-arc' BSP.
*/




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/misc/util.h" 1
/* util.h - misc utilities */

/*
 * Copyright (c) 2011-2014, Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION
Misc utilities usable by nanokernel, microkernel, and application code.
*/





extern "C" {




/* round "x" up/down to next multiple of "align" (which must be a power of 2) */
# 83 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/misc/util.h"
static inline int _IsPowerOfTwo(unsigned int x)
{
 return (x != 0) && !(x & (x - 1));
}


/* KB, MB, GB */




/* KHZ, MHZ */






}
# 43 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h" 2


/* default system clock */



/* address bases */
# 73 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h"
/* IRQs */
# 134 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h"
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/misc/util.h" 1
/* util.h - misc utilities */

/*
 * Copyright (c) 2011-2014, Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION
Misc utilities usable by nanokernel, microkernel, and application code.
*/
# 135 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h" 2
//#include <drivers/rand32.h>

/* ARCv2 timer 0 configuration settings for the system clock */
# 150 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h"
/*
 * UART configuration settings
 *
 * This BSP only supports the nanokernel.  Therefore:
 * - only polled mode is supported (interrupt-driven mode is NOT supported); and
 * - only the target console is supported (hostserver driver is NOT supported).
 */
# 172 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h"
/* uart interface */
# 26 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/uart.h" 1
/* uart.h - public UART driver APIs */

/*
 * Copyright (c) 2015 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */





extern "C" {

/* constants for line control register */
# 54 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/uart.h"
/* options for uart init */


/* generic UART info structure */
struct uart_init_info {
 int baud_rate;
 uint32_t regs; /* base port number or MM base address */
 uint32_t sys_clk_freq; /* in Hz */
 uint8_t options; /* HW Flow Control option */
 uint8_t irq; /* interrupt request number */
 uint8_t int_pri; /* interrupt priority level */
        uint8_t async_format; /* asynchronous data format */
};
/* UART driver has to configure the device to 8n1 */

void uart_init(int port, const struct uart_init_info *const pinfo);

/* console I/O functions */
int uart_poll_in(int port, unsigned char *pChar);
unsigned char uart_poll_out(int which, unsigned char outChar);

/* interrupt driven I/O functions */
int uart_fifo_fill(int port, const uint8_t *txData, int len);
int uart_fifo_read(int port, uint8_t *rxData, const int size);
void uart_irq_tx_enable(int port);
void uart_irq_tx_disable(int port);
int uart_irq_tx_ready(int port);
void uart_irq_rx_enable(int port);
void uart_irq_rx_disable(int port);
int uart_irq_rx_ready(int port);
void uart_irq_err_enable(int port);
void uart_irq_err_disable(int port);
int uart_irq_err_detected(int port);
int uart_irq_is_pending(int port);
int uart_irq_update(int port);
void uart_int_connect(int port, void (*isr)(void), void *arg, void *stub);
int uart_line_status(int port);
int uart_break_check(int port);
void uart_break_send(int port, int delay);
void uart_disable(int port);


}
# 27 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h" 2
# 53 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/UARTClass.h"
class UARTClass : public HardwareSerial
{
  public:
    //UARTClass(Uart* pUart, IRQn_Type dwIrq, uint32_t dwId, RingBuffer* pRx_buffer, RingBuffer* pTx_buffer);
    UARTClass(uart_init_info *info, RingBuffer *pRx_buffer, RingBuffer *pTx_buffer );

    void begin(const uint32_t dwBaudRate);
    void begin(const uint32_t dwBaudRate, const uint8_t config);
    void end(void);
    int available(void);
    int availableForWrite(void);
    int peek(void);
    int read(void);
    void flush(void);
    size_t write(const uint8_t c);
    using Print::write; // pull in write(str) and write(buf, size) from Print
    void setInterruptPriority(uint32_t priority);
    uint32_t getInterruptPriority();

    void IrqHandler(void);

    operator bool() { return true; }; // UART always active

  protected:
    void init(const uint32_t dwBaudRate, const uint8_t config);

    RingBuffer *_rx_buffer;
    RingBuffer *_tx_buffer;

    uart_init_info *info;
    //Uart* _pUart;
    //IRQn_Type _dwIrq;
    uint32_t _dwId;
    uint32_t opened;

};
# 40 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.
  Copyright (c) 2015 Intel Corporation.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  CDC-ACM class for Arduino 101 - Aug 2015 <dave.hunt@emutex.com>

*/




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 27 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/framework/include/platform.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/framework/include/services/services_ids.h" 1
/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */




/**
 * Services id definitions
 *
 * Keep them numbered manually to avoid shifting on
 * removal/addition of services
 */
enum {
 FRAMEWORK_SERVICE_ID = 1,
 TEST2_SERVICE_ID = 2,
 TEST_SERVICE_ID = 3,
 BLE_SERVICE_ID = 4,
 BLE_CORE_SERVICE_ID = 5,
 SS_GPIO_SERVICE_ID = 6,
 SOC_GPIO_SERVICE_ID = 7,
 SS_ADC_SERVICE_ID = 8,
 LL_STOR_SERVICE_ID = 9,
 BATTERY_SERVICE_ID = 10,
 UI_SVC_SERVICE_ID = 11,
 PROPERTIES_SERVICE_ID = 12,
 ARC_SC_SVC_ID = 13,
 LMT_SS_SVC_ID = 14,
 AON_GPIO_SERVICE_ID = 15,
 CDC_SERIAL_SERVICE_ID = 16,
 CFW_LAST_SERVICE_ID = 17
};
# 35 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/framework/include/platform.h" 2
# 44 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/framework/include/platform.h"
struct cdc_ring_buffer
{
    /** Ring buffer data */
    uint8_t data[256];
    /** Ring buffer head pointer, modified by producer */
    int head;
    /** Ring buffer head pointer, modified by consumer */
    int tail;
};

struct cdc_acm_shared_data {
    /** Ring buffer to pass CDC-ACM data from LMT to ARC */
    struct cdc_ring_buffer *rx_buffer;
    /** Ring buffer to pass CDC-ACM data from ARC to LMT */
    struct cdc_ring_buffer *tx_buffer;
    /** Boolean flag set by LMT when CDC-ACM host connection is opened */
    int host_open;
    /** Boolean flag set by ARC when CDC-ACM endpoint connection is opened */
    int device_open;
};

/**
 * LMT / ARC global shared structure. This structure lies in the beginning of
 * the RAM.
 */
struct platform_shared_block_ {
    /** Arc reset vector */
    unsigned int arc_start;
    /** Port table address */
    void * ports;
    /** Service table address */
    void * services;
    /** Port id of the service manager */
    uint16_t service_mgr_port_id;
    /** ARC boot synchronization flag.
     * This value is set to 0 prior to start ARC, and is polled until set to 1
     * by ARC in order to allow LMT to wait for ARC to be started. Usefull for
     * debugging ARC startup code.
     */
    uint8_t arc_ready;

    /** used to send suspend resume arc core
     * bit usage
     * [0-7] 	PM_POWERSTATE
     * [8-9] 	ACK
     * [16-31]	Magic number
     */
    uint32_t pm_request;

    /** ARC wakelocks status info variables
     * Used in order to share if any wakelock
     * is taken, on ARC side.
     */
    uint8_t any_arc_wakelock_taken;

    /** LMT wakelocks status info variables
     * Used in order to share if any wakelock
     * is taken, on LMT side.
     */
    uint8_t any_lmt_wakelock_taken;

    /* Pointer to shared structure used by CDC-ACM.
     *
     * The QRK core is responsible for allocating memory and initialising the
     * pointers of this structure.
     * The ARC core counts on QRK to find valid pointers in place.
     */
    struct cdc_acm_shared_data * cdc_acm_buffers;
};





/* Use a ROM address as a temporary factory_data pointer */





unsigned int get_timestamp(void);

/* GPIO */
// soc gpio 32 bit count




// soc gpio aon bit count







/* I2C */
/*!
* List of all controllers in system ( IA and SS )
*/

typedef enum {
    SOC_I2C_0 = 0, /*!< General Purpose I2C controller 0, accessible by both processing entities */
    SOC_I2C_1, /*!< General Purpose I2C controller 1, accessible by both processing entities */
} SOC_I2C_CONTROLLER_PF;

/* SPI */

/*!
 * List of all controllers in host processor
 */
typedef enum {
    SOC_SPI_MASTER_0 = 0, /* SPI master controller 0, accessible by both processing entities */
    SOC_SPI_MASTER_1, /* SPI master controller 1, accessible by both processing entities */
    SOC_SPI_SLAVE_0 /* SPI slave controller */
}SOC_SPI_CONTROLLER_PF;

/* SOC COMPARATOR */
/*!
 * Number of analog comparator in Lakemont
 */




typedef enum {
 ROOT_DEVICE_ID = 0,
 COMPARATOR_ID = 1,
 RTC_ID = 2,
 UART0_PM_ID = 3,
 UART1_PM_ID = 4,
 SOC_GPIO_32_ID = 5,
 SOC_FLASH_ID = 6,
 SOC_GPIO_AON_ID = 7,
 SPA_SPI0_ID = 8,
 SBA_I2C1_ID = 9,
 SPI_FLASH_0_ID = 10,
 SBA_SOC_SPI_0_ID = 11,
 SBA_SOC_I2C1 = 12,
 SBA_SS_SPI_0_ID = 13,
 SBA_SS_SPI_1_ID = 14,
 SBA_SS_I2C_0_ID = 15,
 SPI_BMI160_ID = 16,
 I2C_BMI160_ID = 17,
 USB_PM_ID = 18,
 SOC_LED_ID = 19,
 HD44780_ID = 20,
 SS_ADC_ID = 21,
 SS_GPIO_8B0_ID = 22,
 SS_GPIO_8B1_ID = 23,
 WDT_ID = 24,
} DEVICE_ID;
# 28 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.
  Copyright (c) 2015 Intel Corporation.  All right reserved (delayMicroseconds).

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {



# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_constants.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 29 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/arcv2_timer0.h" 1
/* arcv2_timer0.h - ARC timer 0 device driver */

/*
 * Copyright (c) 2014-2015 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */






# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/aux_regs.h" 1
/* aux_regs.h - ARCv2 auxiliary registers definitions */

/*
 * Copyright (c) 2014 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION

Definitions for auxiliary registers.
*/
# 75 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/aux_regs.h"
/* STATUS32/STATUS32_P0 bits */
# 98 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/aux_regs.h"
/* exception cause register masks */
# 39 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/arcv2_timer0.h" 2


extern "C" {



/* Increments every Timer0 overflow.
 * Timer0 is configured as a free-run timer; it overflows every 0xFFFFFFFF
 * clocks.
 */
extern uint32_t volatile timer0_overflows;


/*******************************************************************************
*
* timer0_driver_init - initialize and enable the system clock
*
* This routine is used to program the ARCv2 Timer as a free-run timer.
* It delivers interrupts every 0xFFFFFFFF clocks.
*
* RETURNS: N/A
*/
void timer0_driver_init(void);


/*******************************************************************************
*
* arcv2_timer0_count_get - get the current counter value
*
* This routine gets the value from the timer's count register.  This
* value is the 'time' elapsed from the starting count (assumed to be 0).
*
* RETURNS: the current counter value
*
* \NOMANUAL
*/
static inline __attribute__((always_inline))
uint32_t arcv2_timer0_count_get(void)
{
    return (__builtin_arc_lr(0x021));
}


/*******************************************************************************
*
* arcv2_timer0_control_get - get the value of CONTROL0 aux register
*
* This routine gets the value from the timer's control register.
*
* RETURNS: the value of CONTROL0 auxiliary register.
*
* \NOMANUAL
*/
static inline __attribute__((always_inline))
uint32_t arcv2_timer0_control_get(void)
{
    return (__builtin_arc_lr(0x022));
}



}
# 30 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring.h" 2


/**
 *
 */
extern void initVariant( void ) ;
extern void init( void ) ;

/**
 * \brief Returns the number of milliseconds since the Arduino 101 board began
 * running the current program.
 *
 * This number will practically never overflow (go back to zero).
 *
 * \return Number of milliseconds since the program started (uint64_t).
 */
extern uint64_t millis( void ) ;

/**
 * \brief Returns the number of microseconds since the Arduino 101 board began
 * running the current program.
 *
 * This number will practically never overflow (go back to zero).
 * It will overflow after more than 18000 years.
 * This function has a resolution of 2 microseconds.
 *
 * \note There are 1,000 microseconds in a millisecond and 1,000,000
 * microseconds in a second.
 */
extern uint64_t micros( void ) ;

/**
 * \brief Pauses the program for the amount of time (in milliseconds) specified
 *  as parameter.
 *
 *  This function relies on Timer0 interrupts, therefore it shouldn't be called
 *  from a context with interrupts disabled.
 *  It doesn't use CPU's power management features.
 *
 * \param dwMs the number of milliseconds to pause (uint32_t)
 *
 * \note There are 1000 milliseconds in a second.
 */
extern void delay( uint32_t dwMs ) ;


/**
 * \brief Pauses the program for the amount of time (in microseconds) specified
 *  as parameter.
 *
 *  The precision is +- 0.5 microsecond.
 *  It doesn't disable the interrupts and it doesn't rely on interrupts,
 *  meaning this function works reliable even if the interrupts are disabled.
 *  It doesn't use CPU's power management features.
 *
 * \param dwUs the number of microseconds to pause (uint32_t)
 *	Accepted range: from 1 microsecond up to 0x07FFFFFF microseconds.
 *	If dwUs > above specifies threshold, the delay overflows.
 *	E.g. If dwUs = 0x08000000 (0x07FFFFFF + 1), it actually means dwUs = 0
 */
static inline __attribute__ ((always_inline))
void delayMicroseconds(uint32_t dwUs)
{
    if (0 == dwUs) return;
    uint32_t init_count = arcv2_timer0_count_get();
    /* Multiply microseconds with FREQ_MHZ to transform them in clocks */
    uint32_t clocks = dwUs << 5;

    while (arcv2_timer0_count_get() - init_count < clocks);
}

static inline __attribute__ ((always_inline))
void delayTicks(uint32_t ticks)
{
  // Each tick is 1/32 uS
  // TODO: improve using asm
  if(ticks == 0)
      return;
  else if(ticks < 10)
  {
    // just do a 5 tick delay to be close enough
    __builtin_arc_nop();
    __builtin_arc_nop();
    __builtin_arc_nop();
    __builtin_arc_nop();
    __builtin_arc_nop();
  }
  else // compensate for the overhead
  {
    ticks -= 10;
    uint32_t init_count = arcv2_timer0_count_get();
    while (arcv2_timer0_count_get() - init_count < ticks);
  }
}


}
# 29 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/board.h" 1
/* board.h - board configuration macros for the Arduino 101-arc BSP */

/*
 * Copyright (c) 2014-2015 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION
This header file is used to specify and describe board-level aspects for the
'Arduino 101-arc' BSP.
*/
# 31 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/drivers/uart.h" 1
/* uart.h - public UART driver APIs */

/*
 * Copyright (c) 2015 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
# 32 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/CDCSerialClass.h" 2

class CDCSerialClass : public HardwareSerial
{
  public:
    CDCSerialClass(uart_init_info *info);

    void setSharedData(struct cdc_acm_shared_data *cdc_acm_shared_data);

    void begin(const uint32_t dwBaudRate);
    void begin(const uint32_t dwBaudRate, const uint8_t config);
    void end(void);
    int available(void);
    int availableForWrite(void);
    int peek(void);
    int read(void);
    void flush(void);
    size_t write(const uint8_t c);
    using Print::write; // pull in write(str) and write(buf, size) from Print

    operator bool() {
 /* In case bool() is called in a very tight while loop, give LMT space
	 * to set the variable */
 delay(1);
        return (_shared_data && _shared_data->host_open);
    };

  protected:
    void init(const uint32_t dwBaudRate, const uint8_t config);

    struct cdc_acm_shared_data *_shared_data;
    struct cdc_ring_buffer *_rx_buffer;
    struct cdc_ring_buffer *_tx_buffer;

    uart_init_info *info;
    uint32_t _writeDelayUsec;
    uint32_t _dwId;
};
# 41 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h" 2
//#include "USARTClass.h"



extern "C"{


/*----------------------------------------------------------------------------
 *        Platform Identifiers
 *----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

/*
 * LEDs
 */




/*
 * Other Pins
 */


/*
 * Wire Interfaces
 */



/*
 * SPI
 */


/*
 * I2S
 */


/*
 * GPIO
 */






/*
 * PWM
 */
# 107 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h"
/*
 * UART
 */


/*
 * ADC
 */

/* EAI ADC device registers */
# 126 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h"
/* ADC Specific macros */
# 143 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h"
/* Set sample width = 12 bits, input mode = single-ended, output mode = parallel & sequencer mode = single-shot. */







//static uint8_t __unused_var_POR;




static inline uint32_t digitalPinToPort(uint32_t pin) {
    uint32_t reg = 0;
    PinDescription *p = &g_APinDescription[pin];

    if (p->ulGPIOType == 1)
    {
        reg = p->ulGPIOBase + 0x00;
    }
    else if (p->ulGPIOType == 2)
    {
        reg = p->ulGPIOBase + 0x00;
    }
    return reg;
}


}


/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/



extern CDCSerialClass Serial;
extern UARTClass Serial1;



void CDCSerial_getByte(uint8_t uc_data);
void CDCSerial_bytes_sent(uint32_t num);

// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
# 212 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/variants/arduino_101/variant.h"
extern uint32_t sizeof_g_APinDescription;
# 110 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2

# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.
  Copyright (c) 2015 Intel Corporation.  All right reserved (delayMicroseconds).

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 112 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_digital.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 113 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_analog.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {


/* TODO - update analogReference and other ADC-related functions for Arduino 101 */

/*
 * \brief SAM3 products have only one reference for ADC
 */
typedef enum _eAnalogReference
{
  AR_DEFAULT,
} eAnalogReference ;

/*
 * \brief Configures the reference voltage used for analog input (i.e. the value used as the top of the input range).
 * This function is kept only for compatibility with existing AVR based API.
 *
 * \param ulMmode Should be set to AR_DEFAULT.
 */
extern void analogReference( eAnalogReference ulMode ) ;

/*
 * \brief Writes an analog value (PWM wave) to a pin.
 *
 * \param pin
 * \param val
 */
extern void analogWrite( uint8_t pin, int val ) ;

/*
 * \brief Reads the value from the specified analog pin.
 *
 * \param ulPin
 *
 * \return Read value from selected pin, if no error.
 */
extern uint32_t analogRead( uint32_t ulPin ) ;

/*
 * \brief Set the resolution of analogRead return values. Default is 10 bits (range from 0 to 1023).
 *
 * \param res
 */
extern void analogReadResolution(int res);

/*
 * \brief Set the resolution of analogWrite parameters. Default is 8 bits (range from 0 to 255).
 *
 * \param res
 */
extern void analogWriteResolution(int res);


}
# 114 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/wiring_shift.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {


/*
 * \brief
 */
extern uint32_t shiftIn( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder ) ;


/*
 * \brief
 */
extern void shiftOut( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder, uint32_t ulVal ) ;



}
# 115 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WInterrupts.h" 1
/*
  Copyright (c) 2011-2012 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 23 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/WInterrupts.h" 2


extern "C" {


void attachInterrupt(uint32_t pin, void (*callback)(void), uint32_t mode);

void detachInterrupt(uint32_t pin);

void interrupts(void);

void noInterrupts(void);


}
# 116 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 2
# 2 "./OutputCurieSn/sketch/Ccode_for_curie.ino.cpp" 2
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
# 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
# 1 "./Contents/Java/libraries/QueueList/QueueList.h" 1
/*

 *  QueueList.h

 *

 *  Library implementing a generic, dynamic queue (linked list version).

 *

 *  ---

 *

 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (contact@efxa.org)

 *

 *  This program is free software: you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation, either version 3 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program. If not, see <http://www.gnu.org/licenses/>.

 *

 *  ---

 *

 *  Version 1.0

 *

 *    2010-09-28  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - added exit(), blink(): error reporting and handling methods.

 *

 *    2010-09-25  Alexander Brevig  <alexanderbrevig@gmail.com>

 *

 *      - added setPrinter(): indirectly reference a Serial object.

 *

 *    2010-09-20  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - initial release of the library.

 *

 *  ---

 *

 *  For the latest version see: http://www.arduino.cc/

 */
# 44 "./Contents/Java/libraries/QueueList/QueueList.h"
// header defining the interface of the source.



// include Arduino basic header.
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 50 "./Contents/Java/libraries/QueueList/QueueList.h" 2

// the definition of the queue class.
template<typename T>
class QueueList {
  public:
    // init the queue (constructor).
    QueueList ();

    QueueList (QueueList<T> &i);

    // clear the queue (destructor).
    ~QueueList ();

    // push an item to the queue.
    void push (T &i);

    T& at(int n);
    void replace(int n,const T &i);
    // pop an item from the queue.
    T pop ();

    // get an item from the queue.
    T peek () const;

    // check if the queue is empty.
    bool isEmpty () const;

    // get the number of items in the queue.
    int count () const;

    void clear();

    // set the printer of the queue.
    void setPrinter (Print & p);

    void operator = (QueueList<T> &list);

    QueueList<T>& operator << (T i);

  private:
    // exit report method in case of error.
    void exit (const char * m) const;

    // led blinking method in case of error.
    void blink () const;

    // the pin number of the on-board led.
    static const int ledPin = 13;

    // the structure of each node in the list.
    typedef struct node {
      T item; // the item in the node.
      node * next; // the next node in the list.
    } node;

    typedef node * link; // synonym for pointer to a node.

    Print * printer; // the printer of the queue.
    int size; // the size of the queue.
    link head; // the head of the list.
    link tail; // the tail of the list.
    link temp;
};

// init the queue (constructor).
template<typename T>
QueueList<T>::QueueList () {
  size = 0; // set the size of queue to zero.
  head = __null; // set the head of the list to point nowhere.
  tail = __null; // set the tail of the list to point nowhere.
  printer = __null; // set the printer of queue to point nowhere.
}
template<typename T>
QueueList<T>::QueueList (QueueList<T> &t) {
 for(int i=0;i<t.count();i++){
  push(t.at(i));
 }

}

// clear the queue (destructor).
template<typename T>
QueueList<T>::~QueueList () {
  // deallocate memory space of each node in the list.
  for (link t = head; t != __null; head = t) {
    t = head->next; delete head;
  }

  size = 0; // set the size of queue to zero.
  tail = __null; // set the tail of the list to point nowhere.
  printer = __null; // set the printer of queue to point nowhere.
}

// push an item to the queue.
template<typename T>
void QueueList<T>::push (T &i) {
  // create a temporary pointer to tail.
  link t = tail;
  // create a new node for the tail.
  tail = (link) new node;

  // if there is a memory allocation error.
  if (tail == __null)
    exit ("QUEUE: insufficient memory to create a new node.");

  // set the next of the new node.
  tail->next = __null;

  // store the item to the new node.
  tail->item = i;

  // check if the queue is empty.
  if (isEmpty ())
    // make the new node the head of the list.
    head = tail;
  else
    // make the new node the tail of the list.
    t->next = tail;

  // increase the items.
  size++;
}

template<typename T>
T& QueueList<T>::at(int n) {
  if(isEmpty())
    exit ("QUEUE: can't pop item from queue: queue is empty,in at().");
  else if(count()<=n || n<0)
    exit ("QUEUE: out of range");
  temp = head;
  for (int i = 0; i < n; i++) {
    temp = temp->next;
  }
  return temp->item;
}
template<typename T>
void QueueList<T>::replace(int n,const T &i){
 if(isEmpty())
     exit ("QUEUE: can't replace item from queue: queue is empty.");
   else if(count()<=n || n<0)
     exit ("QUEUE: out of range");
   link temp = head;
   for (int i = 0; i < n; i++) {
     temp = temp->next;
   }
   temp->item=i;
}
// pop an item from the queue.
template<typename T>
T QueueList<T>::pop () {
  // check if the queue is empty.
  if (isEmpty ())
    exit ("QUEUE: can't pop item from queue: queue is empty,in pop().");

  // get the item of the head node.
  T item = head->item;

  // remove only the head node.
  link t = head->next; delete head; head = t;

  // decrease the items.
  size--;

  // return the item.
  return item;
}

// get an item from the queue.
template<typename T>
T QueueList<T>::peek () const {
  // check if the queue is empty.
  if (isEmpty ())
    exit ("QUEUE: can't peek item from queue: queue is empty.");
  // return the item of the head node.
  return head->item;
}

// check if the queue is empty.
template<typename T>
bool QueueList<T>::isEmpty () const {
  return head == __null;
}

// get the number of items in the queue.
template<typename T>
int QueueList<T>::count () const {
  return size;
}
template<typename T>
void QueueList<T>::clear(){
  // deallocate memory space of each node in the list.
  for (link t = head; t != __null; head = t) {
    t = head->next; delete head;
  }
  size = 0; // set the size of queue to zero.
  tail = __null; // set the tail of the list to point nowhere.
  printer = __null; // set the printer of queue to point nowhere.
}
// set the printer of the queue.
template<typename T>
void QueueList<T>::setPrinter (Print & p) {
  printer = &p;
}

// exit report method in case of error.
template<typename T>
void QueueList<T>::exit (const char * m) const {
  // print the message if there is a printer.
  if (printer)
    printer->println (m);

  // loop blinking until hardware reset.
  blink ();
}

// led blinking method in case of error.
template<typename T>
void QueueList<T>::blink () const {
  // set led pin as output.
  pinMode (ledPin, 0x1);

  // continue looping until hardware reset.
  while (true) {
    digitalWrite (ledPin, 0x1); // sets the LED on.
    delay (250); // pauses 1/4 of second.
    digitalWrite (ledPin, 0x0); // sets the LED off.
    delay (250); // pauses 1/4 of second.
  }

  // solution selected due to lack of exit() and assert().
}

template<typename T>
void QueueList<T>::operator = (QueueList<T> &list){
  for(int i=0;i<list.count();i++)
    push(list.at(i));
}
template<typename T>
QueueList<T>& QueueList<T>::operator << (T i) {
  push(i);
  //QueueList<T> p = *this;
  //Serial.println("here?");
  return *this;
}
# 2 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/Node.h" 1



class Node{
 public:
    virtual void onMsg();
    virtual void callBack(){};
};
void Node::onMsg(){
  Serial.println("you do not define \"onMsg\" of your Node");
}
# 3 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/EventStore.h" 1


# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 4 "./OutputCurieSn/sketch/EventStore.h" 2
# 1 "./Contents/Java/libraries/QueueList/QueueList.h" 1
/*

 *  QueueList.h

 *

 *  Library implementing a generic, dynamic queue (linked list version).

 *

 *  ---

 *

 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (contact@efxa.org)

 *

 *  This program is free software: you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation, either version 3 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program. If not, see <http://www.gnu.org/licenses/>.

 *

 *  ---

 *

 *  Version 1.0

 *

 *    2010-09-28  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - added exit(), blink(): error reporting and handling methods.

 *

 *    2010-09-25  Alexander Brevig  <alexanderbrevig@gmail.com>

 *

 *      - added setPrinter(): indirectly reference a Serial object.

 *

 *    2010-09-20  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - initial release of the library.

 *

 *  ---

 *

 *  For the latest version see: http://www.arduino.cc/

 */
# 44 "./Contents/Java/libraries/QueueList/QueueList.h"
// header defining the interface of the source.
# 5 "./OutputCurieSn/sketch/EventStore.h" 2

typedef enum EType
{
 input,
 close
}EType;

typedef struct event
{
 Node *node;
 EType eventType;
 String dataType;
 int16_t *msg;
 uint8_t msgLen;

}event;

//int16_t msg[100]={0};

class EventStore{
private:
 QueueList<event> events;
 event nowEvent;
public:
 EventStore();
 ~EventStore();
 void
  addEvent(QueueList<Node *> &node,EType eventType,String dataType,int16_t *msg,uint8_t msgLen),
  exec();

  event getEvent();
  uint8_t getEventCount();
};
EventStore::EventStore(){
 events.setPrinter(Serial);
}
EventStore::~EventStore(){

}
void EventStore::addEvent(QueueList<Node *> &node,EType eventType,String dataType,int16_t *msg,uint8_t msgLen){
 event newEvent;
  for(int i=0;i<node.count();i++){
     newEvent.node=node.at(i);
     newEvent.eventType=eventType;
     newEvent.dataType=dataType;
     newEvent.msgLen = msgLen;
     newEvent.msg = (int16_t*)calloc(msgLen,sizeof(int16_t));
     for(int i=0;i<msgLen;i++)
            newEvent.msg[i]=msg[i];
     events.push(newEvent);
 }
}
void EventStore::exec(){
 if(events.count()>0){
  nowEvent=events.pop();
  nowEvent.node->onMsg();
  free(nowEvent.msg);
 }
}
event EventStore::getEvent(){
   return nowEvent;
}

uint8_t EventStore::getEventCount(){
 return events.count();
}

EventStore eventStore;
# 4 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/Timer.h" 1


# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/libraries/CurieTimerOne/src/CurieTimerOne.h" 1
//***************************************************************
//
// Copyright (c) 2015 Intel Corporation.  All rights reserved.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
//***************************************************************


//***************************************************************
//
// File: CurieTimerOne.h
//
// Description:
//   Class definitions for library CurieTimerOne.
//
// Notes:
//
//   - Arc has two timers, Timer-0 is used.  Please check the file
//     arcv2_timer0.cpp.
//
// Cautions:
//   - The module, Tone.cpp, also makes use of Arc Timer-1 which
//     is used here.
//
//***************************************************************





# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 45 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/libraries/CurieTimerOne/src/CurieTimerOne.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/common/aux_regs.h" 1
/* aux_regs.h - ARCv2 auxiliary registers definitions */

/*
 * Copyright (c) 2014 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION

Definitions for auxiliary registers.
*/
# 46 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/libraries/CurieTimerOne/src/CurieTimerOne.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/bootcode/interrupt.h" 1
/*
Copyright (c) 2015 Intel Corporation.  All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

*/




 /* According to IRQ_BUILD register the ARC core has only 2 interrupt priority
  * levels (0 and 1).
  * */



 extern "C" {


extern void interrupt_connect(unsigned int irq, void (*isr)(void));
extern void interrupt_disconnect(unsigned int irq);
extern void interrupt_enable(unsigned int irq);
extern void interrupt_disable(unsigned int irq);
extern void interrupt_priority_set (int irq, unsigned char priority);

extern void interrupt_unit_device_init(void);

static inline __attribute__((always_inline))
unsigned int interrupt_lock(void)
{
    unsigned int key;

    __asm__ volatile ("clri %0" : "=r" (key));
    return key;
}

static inline __attribute__((always_inline))
void interrupt_unlock(unsigned int key)
{
    __asm__ volatile ("seti %0" :: "ir" (key));
}

}
# 47 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/libraries/CurieTimerOne/src/CurieTimerOne.h" 2
# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/system/libarc32_arduino101/bootcode/conf.h" 1
/*
Copyright (c) 2015 Intel Corporation.  All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

*/
# 48 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/libraries/CurieTimerOne/src/CurieTimerOne.h" 2

// Timer-1 is clocked at ARCV2_TIMER1_CLOCK_FREQ defined in conf.h
const unsigned int HZ_USEC = (32000000 /* 32MHz reference clock */ / 1000000); // Hz per micro second.
const unsigned int MAX_PERIOD_HZ = 0x0FFFFFFFF;
const unsigned int MAX_PERIOD_USEC = (MAX_PERIOD_HZ / HZ_USEC);

// Duty cycle range.
const int MAX_DUTY_RANGE = 1023;

// TIMERx_CONTROL register.
const unsigned int ARC_TIMER_EN_INTR_BIT_FLAG = 0x01; // Bit 0. Enable timer interrupt.
const unsigned int ARC_TIMER_NON_HALT_ONLY_BIT_FLAG = 0x02; // Bit 1. Allow timer to run in Halted mode.
const unsigned int ARC_TIMER_WATCHDOG_BIT_FLAG = 0x04; // Bit 2. Make timer a watchdog timer.
const unsigned int ARC_TIMER_INTR_PENDING_BIT_FLAG = 0x08; // Bit 3. Interrupt pending and clearing bit.

typedef enum {
  SUCCESS = 0,
  INVALID_PERIOD,
  INVALID_DUTY_CYCLE
} timerErrType;

typedef enum {
  IDLE = 0,
  RUNNING,
  PAUSED
} timerStateType;


//
//  Class:  CurieTimer
//
//  Description:
//    This class describes the functionalities of a Arc Timer, in particular, timer-1.
//  Timer-0 is not available for this module to utilize.  The timers are clocked by
//  a 32 HHz source and have 32-bit counters.
//

class CurieTimer
{
  public:
    // Constructor.
    CurieTimer();

    // The following methods are similar to the ones found in the AVR TimerOne library.

    //****************************
    //  Configuration
    //****************************

    inline void initialize(unsigned long microseconds = 1000000) {
      if((microseconds == 0) || (microseconds > MAX_PERIOD_USEC))
 microseconds = 1000000;
      periodInUsec = microseconds;
      init( (microseconds * HZ_USEC), __null );
    }

    void setPeriod(unsigned long microseconds);

    //****************************
    //  Run Control
    //****************************

    inline void start(void) {
      pause();
      pauseCount = 0;
      resume();
    }

    inline void stop(void) { return pause(); }

    inline void restart(void) { start(); }

    // Resume the timer from where it was paused.
    void resume(void);

    //****************************
    //  PWM outputs
    //****************************

    inline void setPwmDuty(char pin, unsigned int duty) {
      pwmStart( pin, (int) duty, periodInUsec );
    }

    inline void pwm(char pin, unsigned int duty) {
       pwmStart( pin, (int) duty, periodInUsec );
    }

    inline void pwm(char pin, unsigned int duty, unsigned long microseconds) {
      pwmStart( pin, (int) duty, microseconds );
    }

    inline void disablePwm(char pin) {
      pwmStop();
    }

    //****************************
    //  Interrupt Function
    //****************************

    void attachInterrupt(void (*isr)());

    inline void attachInterrupt(void (*isr)(), unsigned long microseconds) {
      attachInterrupt( isr );
      setPeriod( microseconds );
    }

    inline void detachInterrupt(void) { attachInterrupt(__null); };

    /////////
    // The following are additional methods provided by Intel for the Curie platform.
    ////////

    // Set up the timer with the input period, in usec, and the call back routine.
    // Period stays with the timer until it is killed or re/start another round.
    inline int start(const unsigned int timerPeriodUsec,
       void (*userCallBack)() = __null) {
      periodInUsec = timerPeriodUsec;
      return( init((timerPeriodUsec * HZ_USEC), userCallBack) ); }

    // Restarting the timer, start counter from 0.
    int restart(const unsigned int timerPeriodUsec) { return start(timerPeriodUsec); }

    // Kill the timer, put it back to power up default.
    void kill(void);

    // Attach or detach the user call back routine.

    // Timer interrupt count.
    inline unsigned int readTickCount(void) { return tickCnt; }
    // Read and reset timer interrupt count.
    unsigned int rdRstTickCount(void);

    // Pausing the timer = no count up, no interrupt.
    void pause(void);

    // Start software PWM.  Note that the timer is consumed once PWM is set.
    int pwmStart(unsigned int outputPin, double dutyPercentage, unsigned int periodUsec);

    // Start software PWM.  Use a range of 0-1023 for duty cycle. 0=always Low, 1023=always high
    int pwmStart(unsigned int outputPin, int dutyRange, unsigned int periodUsec);

    // Stop software PWM.  Put the time back to default and de-assert the selected port.
    inline void pwmStop(void) { kill(); return digitalWrite(pwmPin, 0x0); }

    // Generic timer ISR.  It will call user call back routine if set.
    void timerIsr(void);

    void pwmCallBack(void);

  private:
    unsigned int timerCountAddr;
    unsigned int timerControlAddr;
    unsigned int timerLimitAddr;
    unsigned int timerIrqNum;

    unsigned int tickCnt;

    timerStateType currState;
    unsigned int pauseCntrl;
    unsigned int pauseCount;

    bool dutyToggle;
    unsigned int pwmPin;
    unsigned int dutyCycle;
    unsigned int nonDutyCycle;
    unsigned int periodInUsec;

    void (*isrFuncPtr)();
    void (*userCB)();
    void (*pwmCB)();

    // Init:  Kick off a timer by initializing it with a period.
    int init(const unsigned int periodHz, void (*userCallBack)());
};

extern CurieTimer CurieTimerOne;
# 4 "./OutputCurieSn/sketch/Timer.h" 2

void timerCallBack();
typedef struct timerList
{
 bool is_using=false;
 uint16_t interval=0;
 uint16_t count=0;
 Node* node;

}timerList;
class Timer
{
private:
 timerList timers[10];
public:
 Timer();
 ~Timer();
 void
  setUp(),
  clearInterval(uint8_t id),
  exec();
 int8_t setInterval(uint16_t interval,Node* node);
};
Timer::Timer(){}
Timer::~Timer(){}
void Timer::setUp(){
 CurieTimerOne.start(1000,&timerCallBack);
}
int8_t Timer::setInterval(uint16_t interval,Node* node){
 int8_t i=0;
 for(;i<10;i++){
  if(!timers[i].is_using){
   //if(node->callBack==NULL)	
    //Serial.println("there was a parameter has not been set at \"setInterval\" ");
   //else{
    timers[i].is_using=true;
    timers[i].interval=interval;
    timers[i].count=interval;
    timers[i].node=node;
    break;
   //}
  }
 }
   if(i==10){
     i=-1;
    Serial.println("Error:the number of Timers overflow");
 }
   return i;
}
void Timer::clearInterval(uint8_t id){
 timers[id].is_using=false;
}
void Timer::exec(){
 for(uint8_t i=0;i<10;i++){
  if(timers[i].is_using){
   timers[i].count--;
   if(timers[i].count==0){
    timers[i].count=timers[i].interval;
    timers[i].node->callBack();
   }
  }
 }
}
Timer timer;
void timerCallBack(){
 timer.exec();
}
# 5 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/DFLed.h" 1



# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 5 "./OutputCurieSn/sketch/DFLed.h" 2
# 1 "./Contents/Java/libraries/QueueList/QueueList.h" 1
/*

 *  QueueList.h

 *

 *  Library implementing a generic, dynamic queue (linked list version).

 *

 *  ---

 *

 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (contact@efxa.org)

 *

 *  This program is free software: you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation, either version 3 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program. If not, see <http://www.gnu.org/licenses/>.

 *

 *  ---

 *

 *  Version 1.0

 *

 *    2010-09-28  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - added exit(), blink(): error reporting and handling methods.

 *

 *    2010-09-25  Alexander Brevig  <alexanderbrevig@gmail.com>

 *

 *      - added setPrinter(): indirectly reference a Serial object.

 *

 *    2010-09-20  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - initial release of the library.

 *

 *  ---

 *

 *  For the latest version see: http://www.arduino.cc/

 */
# 44 "./Contents/Java/libraries/QueueList/QueueList.h"
// header defining the interface of the source.
# 6 "./OutputCurieSn/sketch/DFLed.h" 2



class DFLed:public Node
{
private:
 String name;
 uint8_t DPin;
  QueueList<Node *> node;
  bool debug;
public:
 DFLed();
 ~DFLed();
 void
       setUp(String name,uint8_t DPin,QueueList<Node *> &node,bool debug),
       onMsg();

};
DFLed::DFLed(){}
DFLed::~DFLed(){}
void DFLed::setUp(String name,uint8_t DPin,QueueList<Node *> &node,bool debug){
 this->name=name;
 this->DPin=DPin;
  this->node=node;
  this->debug=debug;
 pinMode(DPin,0x1);
}
void DFLed::onMsg(){
    if (debug){
        Serial.print(name);
        Serial.println(" start");
    }

    if (eventStore.getEvent().msg[0]==1){
       digitalWrite(DPin,0x1);
    }
    else if(eventStore.getEvent().msg[0]==0){
        digitalWrite(DPin,0x0);
    }
}
# 6 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/DFButton.h" 1



# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 5 "./OutputCurieSn/sketch/DFButton.h" 2
# 1 "./Contents/Java/libraries/QueueList/QueueList.h" 1
/*

 *  QueueList.h

 *

 *  Library implementing a generic, dynamic queue (linked list version).

 *

 *  ---

 *

 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (contact@efxa.org)

 *

 *  This program is free software: you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation, either version 3 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program. If not, see <http://www.gnu.org/licenses/>.

 *

 *  ---

 *

 *  Version 1.0

 *

 *    2010-09-28  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - added exit(), blink(): error reporting and handling methods.

 *

 *    2010-09-25  Alexander Brevig  <alexanderbrevig@gmail.com>

 *

 *      - added setPrinter(): indirectly reference a Serial object.

 *

 *    2010-09-20  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - initial release of the library.

 *

 *  ---

 *

 *  For the latest version see: http://www.arduino.cc/

 */
# 44 "./Contents/Java/libraries/QueueList/QueueList.h"
// header defining the interface of the source.
# 6 "./OutputCurieSn/sketch/DFButton.h" 2





class DFButton:public Node
{
    private:
        String name;
        uint8_t DPin;
        uint8_t funType;
        uint16_t interval;
        QueueList<Node*> node;
        uint8_t intervalID;
        uint8_t lastValue;
        uint8_t status;
        bool debug;

    public:

        DFButton();
        ~DFButton();
        void setUp(String name,uint8_t DPin,uint8_t funType,QueueList<Node*> &node,bool debug);
        void callBack();
};

DFButton::DFButton(){}
DFButton::~DFButton(){
    timer.clearInterval(intervalID);
}

void DFButton::setUp(String name,uint8_t DPin,uint8_t funType,QueueList<Node *> &node,bool debug){
    this->name = name;
    this->DPin = DPin;
    this->node = node;
    this->interval = 200;
    this->funType = funType;
    this->debug = debug;

    intervalID = timer.setInterval(this->interval,this);

    if (debug){
        Serial.print(name);
        Serial.println(" start");
    }
}
void DFButton::callBack(){
  //Serial.print("DFbutton callback");
    int16_t msg[1]={0};
    int sensorValue = digitalRead(DPin);

    if (funType == 0){ //Reset Button
        if (lastValue != sensorValue){
            msg[0] = sensorValue;
            eventStore.addEvent(node,input,"payload",msg,1);

            if (debug){ //debug
                if (sensorValue == 1){
                    Serial.print("KeyDown:");
                    Serial.println(sensorValue);
                }
                else if (sensorValue == 0){
                    Serial.print("KeyUp:");
                    Serial.println(sensorValue);
                }
            }
        }
        lastValue = sensorValue;
    }

    if (funType == 1){ //Locking Press-Button
        if (sensorValue == 0 && lastValue == 1){
            status?status = 0:status = 1;
            msg[0] = status;
            eventStore.addEvent(node,input,"payload",msg,1);

            if (debug){ //debug
                if (status == 1){
                    Serial.print("ON:");
                    Serial.println(status);
                }
                else if (status == 0){
                    Serial.print("OFF:");
                    Serial.println(status);
                }
            }
        }
        lastValue = sensorValue;
    }
}
# 7 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2
# 1 "./OutputCurieSn/sketch/Debug.h" 1



# 1 "./Contents/Java/Arduino15/packages/Intel/hardware/arc32/1.0.6/cores/arduino/arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 5 "./OutputCurieSn/sketch/Debug.h" 2
# 1 "./Contents/Java/libraries/QueueList/QueueList.h" 1
/*

 *  QueueList.h

 *

 *  Library implementing a generic, dynamic queue (linked list version).

 *

 *  ---

 *

 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (contact@efxa.org)

 *

 *  This program is free software: you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation, either version 3 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program. If not, see <http://www.gnu.org/licenses/>.

 *

 *  ---

 *

 *  Version 1.0

 *

 *    2010-09-28  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - added exit(), blink(): error reporting and handling methods.

 *

 *    2010-09-25  Alexander Brevig  <alexanderbrevig@gmail.com>

 *

 *      - added setPrinter(): indirectly reference a Serial object.

 *

 *    2010-09-20  Efstathios Chatzikyriakidis  <contact@efxa.org>

 *

 *      - initial release of the library.

 *

 *  ---

 *

 *  For the latest version see: http://www.arduino.cc/

 */
# 44 "./Contents/Java/libraries/QueueList/QueueList.h"
// header defining the interface of the source.
# 6 "./OutputCurieSn/sketch/Debug.h" 2


class Debug:public Node
{
 private:
   String name;
    QueueList<Node *> node;
 public:
  Debug();
  ~Debug();
  void
        setUp(String name,QueueList<Node *> &node),
        onMsg();

};
Debug::Debug(){}
Debug::~Debug(){}
void Debug::setUp(String name,QueueList<Node *> &node){
 this->name = name;
    this->node = node;
}
void Debug::onMsg(){}
# 8 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino" 2

DFLed DFLed_88864793_7779b8;
DFButton DFButton_c92ed288_36d13;
Debug debug_4b899599_b4766c;
QueueList<Node*> nodes;
# 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void setup();
# 32 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void loop();
# 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void setup() {
 Serial.begin(115200);
 delay(2000);
 timer.setUp();

 DFLed_88864793_7779b8.setUp("DFLed",2,nodes,false);
 nodes.clear();

 nodes<<&DFLed_88864793_7779b8<<&debug_4b899599_b4766c;
 DFButton_c92ed288_36d13.setUp("DFButton",5,0,nodes,true);
 nodes.clear();

 debug_4b899599_b4766c.setUp("debug",nodes);


 Serial.println("setUp success! start loop");
}

void loop() {
 eventStore.exec();
}
