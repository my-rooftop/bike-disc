/* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0"
 *
 * Written by Nir Drucker, Shay Gueron and Dusan Kostic,
 * AWS Cryptographic Algorithms Group.
 */

#pragma once

#include "types.h"
#include "profiling.h"

// c = a+b mod (x^r - 1)
_INLINE_ void
gf2x_mod_add(OUT pad_r_t *c, IN const pad_r_t *a, IN const pad_r_t *b)
{
  const uint64_t *a_qwords = (const uint64_t *)a;
  const uint64_t *b_qwords = (const uint64_t *)b;
  uint64_t *      c_qwords = (uint64_t *)c;

  for(size_t i = 0; i < R_PADDED_QWORDS; i++) {
    c_qwords[i] = a_qwords[i] ^ b_qwords[i];
  }
}

// c = a*b mod (x^r - 1)
void gf2x_mod_mul(OUT pad_r_t *c, IN const pad_r_t *a, IN const pad_r_t *b);

// c = a^-1 mod (x^r - 1)
void gf2x_mod_inv(OUT pad_r_t *c, IN const pad_r_t *a, struct Trace_time *trace_time);
