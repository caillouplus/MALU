#ifndef _HAS_INCLUDE_ARRAY_H
#define _HAS_INCLUDE_ARRAY_H

#include "includes.h"
#include "macros.h"

typedef struct {
  unsigned size;
  double* elements;
} ArrayOfDoubles;

typedef struct {
  unsigned size;
  int* elements;
} ArrayOfInts;

ArrayOfDoubles ReverseDoubles(ArrayOfDoubles);
ArrayOfInts ReverseInts(ArrayOfInts);
double SumOfDoubles(ArrayOfDoubles);
int SumOfInts(ArrayOfInts);

ArrayOfInts MakeSet(ArrayOfInts);

#endif // #ifndef _HAS_INCLUDE_ARRAY_H
