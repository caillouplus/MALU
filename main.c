#include "main.h"

int main(int argc, char* argv[]) {
  int _temp;
ApplicationStart:
  wprintf(L"Bom dia. Selecione qual questão você gostaria de ver, de 1 a 6: ");
  if (scanf("%d", &_temp) == EOF) goto ApplicationStart;
  if (_temp < 1) {
    wprintf(L"Digite um número maior\n");
    goto ApplicationStart;
  } else if (_temp > 6) {
    wprintf(L"Digite um número menor\n");
    goto ApplicationStart;
  } else {
    switch (_temp) {

    }
  }
}
