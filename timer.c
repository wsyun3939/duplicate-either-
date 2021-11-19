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
 *  $Id: timer.c,v 1.5 2015/03/18 11:33:07 tanaka Exp $
 *  $Revision: 1.5 $
 *  $Date: 2015/03/18 11:33:07 $
 *  $Author: tanaka $
 *
 */
#include <stdio.h>
#include "define.h"
#include "timer.h"
#include "problem.h"
#define INCLUDE_SYSTEM_TIME
#define USE_CLOCK

void timer_start(problem_t *problem)
{
  problem->stime = (double) clock()/(double) CLOCKS_PER_SEC;
}

void set_time(problem_t *problem)
{
  problem->time = (double) clock()/(double) CLOCKS_PER_SEC;
  problem->time -= problem->stime;

  if(problem->time < 0.0) {
    problem->time = 0.0;
  }
}

double get_time(problem_t *problem)
{
  double t;
  t = (double) clock()/(double) CLOCKS_PER_SEC;
  t -= problem->stime;

  return((t < 0.0)?0.0:t);
}
