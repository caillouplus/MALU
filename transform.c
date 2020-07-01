#include "transform.h"

ArrayOfDoubles TransformDoubles(ArrayOfDoubles array, double (*function)(double)) {
  if (!array.size) return (ArrayOfDoubles) { 0, (void*)0 };
  double* buffer = malloc(array.size * sizeof(double));
  if (!buffer) {
    wprintf(L"Não conseguimos alocar memória.\n");
  }
  REPEAT(i, array.size) {
    *(buffer + i) = function(*(array.elements + i));
  }
  return (ArrayOfDoubles) {array.size, buffer};
}

ArrayOfInts TransformInts(ArrayOfInts array, int (*function)(int)) {
  if (!array.size) return (ArrayOfInts) { 0, (void*)0 };
  double* buffer = malloc(array.size * sizeof(int));
  if (!buffer) {
    wprintf(L"Não conseguimos alocar memória.\n");
  }
  REPEAT(i, array.size) {
    *(buffer + i) = function(*(array.elements + i));
  }
  return (ArrayOfInts) { array.size, buffer };
}