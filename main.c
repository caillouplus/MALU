#include "main.h"

int main(int argc, char* argv[]) {
  setlocale(LC_ALL, "");
ApplicationStart:
  wprintf(L"Bom dia. Selecione qual questão você gostaria de ver, de 1 a 6, ou digite 0 para sair: ");
  if (scanf("%d", &_temp) == EOF) goto ApplicationStart;
  if (_temp < 0) {
    wprintf(L"Digite um número maior\n");
    goto ApplicationStart;
  } else if (_temp > 6) {
    wprintf(L"Digite um número menor\n");
    goto ApplicationStart;
  } else {
    switch (_temp) {
      case 0: {
        return 0;
      }
      case 1: {
        UmMain();
      }
      case 2: {
        DoisMain();
      }
      case 3: {
        TresMain();
      }
      case 4: {
        QuatroMain();
      }
      case 5: {
        CincoMain();
      }
      case 6: {
        SeisMain();
      }
    }
    goto ApplicationStart;
  }
}
