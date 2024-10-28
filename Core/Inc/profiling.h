#ifndef PROFILING_H
#define PROFILING_H

#include <stdint.h>
#include <stdio.h>

struct Trace_time {
  uint32_t stack;
  uint32_t gf2x_inv;
  uint32_t decode;
  uint32_t ring_mul;
};

#endif