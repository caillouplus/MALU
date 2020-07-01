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

ArrayOfDoubles TransformDoublesBinary(ArrayOfDoubles array_a, ArrayOfDoubles array_b, double (*function)(double, double)) {
  if ((!array_a.size) || (!array_b.size)) return (ArrayOfDoubles) { 0, (void*)0 };
  if (array_a.size != array_b.size) {
    wprintf(L"As arrays têm de ter tamanhos iguais");
    return (ArrayOfDoubles) { 0, (void*)0 };
  }
  double* buffer = malloc(array_a.size * sizeof(double));
  if (!buffer) {
    wprintf(L"Não conseguimos alocar memória.\n");
  }
  REPEAT(i, array_a.size) {
    *(buffer + i) = function(*(array_a.elements + i), *(array_b.elements + i));
  }
  return (ArrayOfDoubles) { array_a.size, buffer };
}