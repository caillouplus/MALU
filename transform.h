#ifndef _HAS_INCLUDE_TRANSFORM_H
#define _HAS_INCLUDE_TRANSFORM_H

#include "includes.h"
#include "array.h"
#include "macros.h"

ArrayOfDoubles TransformDoubles(ArrayOfDoubles, double (*)(double));
ArrayOfInts TransformInts(ArrayOfInts, int (*)(int));

#endif