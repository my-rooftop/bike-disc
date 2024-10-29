#ifndef PROFILING_H
#define PROFILING_H

#include <stdint.h>
#include <stdio.h>

struct Trace_time {
  uint32_t stack;
  uint32_t gf2x_inv;
  uint32_t ring_mul;
  uint32_t inv_ring_mul;
  uint32_t ring_add;
  uint32_t squaring;
  uint32_t l;
  uint32_t h;
  uint32_t k;
  uint32_t xor;
  uint32_t decode;
  uint32_t r_bits_vector_weight;
  uint32_t find_err1;
  uint32_t find_err2;
};

#endif