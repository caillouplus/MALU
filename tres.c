#include "tres.h"

double Difference(double a, double b) {
  return a - b;
}

double Sum(double a, double b) {
  return a + b;
}

double Product(double a, double b) {
  return a * b;
}

void TresMain() {
  wprintf(L"Digite 10 n�meros, um em cada linha:\n");
  ArrayOfDoubles array_a = GetDoublesFromSTDIN(10);
  wprintf(L"Agora digite mais 10:\n");
  ArrayOfDoubles array_b = GetDoublesFromSTDIN(10);

  ArrayOfDoubles difference = TransformDoublesBinary(array_a, array_b, Difference);
  ArrayOfDoubles sum = TransformDoublesBinary(array_a, array_b, Sum);
  ArrayOfDoubles product = TransformDoublesBinary(array_a, array_b, Product);

  wprintf(L"As diferen�as entre esses n�meros s�o:\n");
  PrintArrayOfDoubles(difference);
  wprintf(L"As somas entre esses n�meros s�o:\n");
  PrintArrayOfDoubles(sum);
  wprintf(L"Os produtos entre esses n�meros s�o:\n");
  PrintArrayOfDoubles(product);

  

}