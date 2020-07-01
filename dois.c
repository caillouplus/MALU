#include "dois.h"

void DoisMain() {
  wprintf(L"Digite 20 números inteiros, um em cada linha.\n");
  ArrayOfInts array = GetIntsFromSTDIN(20);
  ArrayOfInts set = MakeSet(array);
  PrintArrayOfInts(set);
}