#include "array.h"

ArrayOfDoubles ReverseDoubles(ArrayOfDoubles array) {
  if (!array.size) return (ArrayOfDoubles) { 0, (void*)0 };
  double* buffer = malloc(array.size * sizeof(double));
  if (!buffer) {
    printf(L"Não conseguimos alocar memória\n");
  }
  REPEAT(i, array.size) {
    *(buffer + i) = *(array.elements + (array.size - i - 1));
  }
  return (ArrayOfDoubles) {array.size, buffer};
}

ArrayOfInts ReverseInts(ArrayOfInts array) {
  if (!array.size) return (ArrayOfInts) { 0, (void*)0 };
  double* buffer = malloc(array.size * sizeof(double));
  if (!buffer) {
    printf(L"Não conseguimos alocar memória\n");
  }
  REPEAT(i, array.size) {
    *(buffer + i) = *(array.elements + (array.size - i - 1));
  }
  return (ArrayOfInts) { array.size, buffer };
}

double SumOfDoubles(ArrayOfDoubles array) {
  if (!array.size) return 0.0;
  double sum = 0.0;
  REPEAT(i, array.size) {
    sum += *(array.elements + i);
  }
}

int SumOfInts(ArrayOfInts array) {
  if (!array.size) return 0.0;
  int sum = 0;
  REPEAT(i, array.size) {
    sum += *(array.elements + i);
  }
}

_Bool CheckRepeated(int* elements, unsigned n) {
  REPEAT(i, n - 1) {
    if (*(elements + i) == (*(elements + n))) return 1;
  }
  return 0;
}

ArrayOfInts MakeSet(ArrayOfInts array) {
  if (!array.size) return (ArrayOfInts) {0, (void*)0 };
  unsigned size = 0;
  int* set = malloc(array.size * sizeof(int));
  REPEAT(i, array.size) {
    if (!CheckRepeated(array.elements, i)) {
      *(set + i) = *(array.elements + i);
      ++size;
    }
  }
  return (ArrayOfInts) {size, set};
}