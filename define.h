/*
 * Copyright 2014-2015 Shunji Tanaka.  All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *      disclaimer in the documentation and/or other materials
 *      provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  $Id: define.h,v 1.4 2015/03/18 11:33:07 tanaka Exp $
 *  $Revision: 1.4 $
 *  $Date: 2015/03/18 11:33:07 $
 *  $Author: tanaka $
 *
 */
#ifndef DEFINE_H
#define DEFINE_H
#ifndef max
#define max(a, b) (((a)>(b))?(a):(b))
#endif /* !max */

#ifndef min
#define min(a, b) (((a)<(b))?(a):(b))
#endif /* !min */

#ifndef ABS
#define ABS(a) (((a)<0.0)?(-(a)):(a))
#endif /* !ABS */

#ifndef MAXBUFLEN
#define MAXBUFLEN (4096)
#endif /* !MAXBUFLEN */

enum { FALSE, TRUE, TLIMIT };

typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned int uint;
#endif /* !DEFINE_H */
