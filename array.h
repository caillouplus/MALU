#ifndef _HAS_INCLUDE_ARRAY_H
#define _HAS_INCLUDE_ARRAY_H

#include "includes.h"

typedef struct {
  unsigned size;
  double* elements;
} ArrayOfDoubles;

typedef struct {
  unsigned size;
  int* elements;
} ArrayOfInts;

#endif // #ifndef _HAS_INCLUDE_ARRAY_H
