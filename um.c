#include "um.h"

void UmMain() {
  wprintf(L"Digite 10 n�meros");
  ArrayOfDoubles array = GetDoublesFromSTDIN(10);
  ArrayOfDoubles reversed = ReverseDoubles(array);
  PrintArrayOfDoubles(reversed);
}