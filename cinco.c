#include "cinco.h"

void CincoMain() {
  wprintf(L"Digite 10 números, um em cada linha:\n");
  ArrayOfDoubles array_a = GetDoublesFromSTDIN(10);
  wprintf(L"Agora digite mais 10:\n");
  ArrayOfDoubles array_b = GetDoublesFromSTDIN(10);

  ArrayOfDoubles difference = TransformDoublesBinary(array_a, array_b, Difference);

  wprintf(L"As diferenças vem a seguir:\n");
  PrintArrayOfDoubles(difference);
}