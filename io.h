#ifndef _HAS_INCLUDE_IO_H
#define _HAS_INCLUDE_IO_H

#include "includes.h"
#include "array.h"
#include "macros.h"

ArrayOfDoubles GetDoublesFromSTDIN(unsigned);
ArrayOfInts GetIntsFromSTDIN(unsigned);

void PrintArrayOfDoubles(ArrayOfDoubles);
void PrintArrayOfInts(ArrayOfInts);

#endif // #ifndef _HAS_INCLUDE_IO_H