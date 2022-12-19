#include <stdio.h>

int main(void) {
  int numSymbols;
  printf("Insira o número de símbolos por coluna: ");
  scanf("%d", &numSymbols);

  for (int i = 0; i < numSymbols; i++) {
    for (int j = 0; j < numSymbols; j++) {
      if (j < i) {
        printf("0");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}
