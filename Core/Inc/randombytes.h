// SPDX-License-Identifier: Apache-2.0 or CC0-1.0

#ifndef RANDOMBYTES_H
#define RANDOMBYTES_H

#include <stdint.h>
#include <stddef.h>

// Function to generate random bytes
int randombytes(uint8_t *obuf, size_t len);

#endif // RANDOMBYTES_H
