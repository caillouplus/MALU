#include "um.h"

void UmMain() {
  wprintf(L"Digite 10 números");
  ArrayOfDoubles array = GetDoublesFromSTDIN(10);
  ArrayOfDoubles reversed = ReverseDoubles(array);
  PrintArrayOfDoubles(reversed);
}