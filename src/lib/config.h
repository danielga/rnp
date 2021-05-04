/*-
 * Copyright (c) 2018-2020 Ribose Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#define PACKAGE_STRING    "rnp 0.15.0"
#define PACKAGE_BUGREPORT "Ribose Inc. <rnpgp@ribose.com>"

#define HAVE_BZLIB_H
#define HAVE_ZLIB_H

#define HAVE_FCNTL_H
#define HAVE_INTTYPES_H
#define HAVE_LIMITS_H
#define HAVE_STDINT_H
#define HAVE_STRING_H
#define HAVE_SYS_CDEFS_H
#define HAVE_SYS_MMAN_H
#define HAVE_SYS_RESOURCE_H
#define HAVE_SYS_STAT_H
#define HAVE_SYS_TYPES_H
#define HAVE_UNISTD_H
#define HAVE_SYS_WAIT_H
#define HAVE_SYS_PARAM_H
#define HAVE_MKDTEMP
#define HAVE_MKSTEMP
#define HAVE_REALPATH
/* #undef HAVE_O_BINARY */
/* #undef HAVE__O_BINARY */
/* #undef HAVE__TEMPNAM */

/* Macro _GLIBCXX_USE_CXX11_ABI was first introduced with GCC 5.0, which
 * we assume to be bundled with a sane implementation of std::regex. */
#if !defined(__GNUC__) || defined(_GLIBCXX_USE_CXX11_ABI) || defined(MSVC)
#define RNP_USE_STD_REGEX 1
#endif

