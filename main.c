#include "main.h"

int main(int argc, char* argv[]) {
  int _temp;
ApplicationStart:
  wprintf(L"Bom dia. Selecione qual quest�o voc� gostaria de ver, de 1 a 6: ");
  if (scanf("%d", &_temp) == EOF) goto ApplicationStart;
  if (_temp < 1) {
    wprintf(L"Digite um n�mero maior\n");
    goto ApplicationStart;
  } else if (_temp > 6) {
    wprintf(L"Digite um n�mero menor\n");
    goto ApplicationStart;
  } else {
    switch (_temp) {

    }
  }
}
