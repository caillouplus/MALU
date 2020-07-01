#include "io.h"

ArrayOfDoubles GetDoublesFromSTDIN(unsigned count) {
  double* buffer = malloc(count * sizeof(double));
  if (!buffer) {
    wprintf(L"Não conseguimos alocar memória.\n");
  }
  ArrayOfDoubles return_struct = { count, buffer };
  REPEAT(i, count) {
    double _temp;
    if (scanf("%lf", &_temp) != EOF) {
      *(buffer + i) = _temp;
    } else {
      --i;
    }
  }
  return return_struct;
}

ArrayOfInts GetIntsFromSTDIN(unsigned count) {
  int* buffer = malloc(count * sizeof(double));
  if (!buffer) {
    wprintf(L"Não conseguimos alocar memória.\n");
  }
  ArrayOfInts return_struct = { count, buffer };
  REPEAT(i, count) {
    int _temp;
    if (scanf("%d", &_temp) != EOF) {
      *(buffer + i) = _temp;
    }
    else {
      --i;
    }
  }
  return return_struct;
}

void PrintArrayOfDoubles(ArrayOfDoubles array) {
  if (!array.size) return;
  printf("[");
  REPEAT(i, array.size) {
    if (i != array.size - 1) {
      printf("%f, ", *(array.elements + i));
    }
    else printf("%f]", *(array.elements + i));
  }
}

void PrintArrayOfInts(ArrayOfInts array) {
  if (!array.size) return;
  printf("[");
  REPEAT(i, array.size) {
    if (i != array.size - 1) {
      printf("%d, ", *(array.elements + i));
    }
    else printf("%d]\n", *(array.elements + i));
  }
}