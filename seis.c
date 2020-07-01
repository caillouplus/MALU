#include "seis.h"

void SeisMain() {
  wprintf(L"Digita 50 números\n");
  ArrayOfDoubles array_a = GetDoublesFromSTDIN(50);
  wprintf(L"Digita mais 50 números\n");
  ArrayOfDoubles array_b = GetDoublesFromSTDIN(50);

  ArrayOfDoubles reversed_b = ReverseDoubles(array_b);
  ArrayOfDoubles difference = TransformDoublesBinary(array_a, reversed_b, Difference);

  wprintf(L"A soma entre a diferença entre o primeiro vetor e o reverso do segundo vetor é: %f\n", SumOfDoubles(difference));
}