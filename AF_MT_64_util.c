/* -*- Mode: C; -*-
 *
 * ___ AF_MT_64_support.c _________________________________________
 * 
 * Simple C wrappers around functions defined in Math64.h which
 * operate on 64 bit values by reference instead of by value.
 *
 * $URL: https://mm1.local/svn/private/trunk/lib/lisp/mac-types/mac-types-support.c $
 * $Id: mac-types-support.c 13 2005-02-21 20:34:10Z greg $
 *
 * Copyright (c) 2004-2005, Gregory C. Wuller. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 * 
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR 'AS IS' AND ANY EXPRESSED
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <AF_MacTypeUtil/AF_MT_64_util.h>

void MTFFI_U64SetS32(UInt64 *io, SInt32 a)
{
  *io = U64Set(a);
}

void MTFFI_U64SetU32(UInt64 *io, UInt32 a)
{
  *io = U64SetU(a);
}

void MTFFI_U64Add(UInt64 *io, UInt64 *b)
{
  *io = U64Add(*io, *b);
}

void MTFFI_U64Subtract(UInt64 *io, UInt64 *b)
{
  *io = U64Subtract(*io, *b);
}

void MTFFI_U64Multiply(UInt64 *io, UInt64 *b)
{
  *io = U64Multiply(*io, *b);
}

void MTFFI_U64Mod(UInt64 *io, UInt64 *b)
{
  *io = U64Mod(*io, *b);
}
 
void MTFFI_U64Div(UInt64 *io, UInt64 *b)
{
  *io = U64Div(*io, *b);
}
 
SInt32 MTFFI_U64Compare(UInt64 *a, UInt64 *b)
{
  return U64Compare(*a, *b);
}

void MTFFI_U64SetUnsignedWide(UInt64 *io, UnsignedWide *uw)
{
  *io = UnsignedWideToUInt64(*uw);
}

void MTFFI_UnsignedWideSetU64(UnsignedWide *uw, UInt64 *in)
{
  *uw = UInt64ToUnsignedWide(*in);
}

