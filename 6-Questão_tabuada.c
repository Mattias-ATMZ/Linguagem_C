#include <stdio.h>

int main() {
  int numero, i;

  for (numero = 2; numero <= 10; numero++) {
    printf("Tabuada do %i:\n", numero);
    for (i = 1; i <= 10; i++) {
      printf("%i x %i = %d\n", numero, i, numero * i);
    }
    printf("\n");
  }

  return 0;
}
