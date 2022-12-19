#include <stdio.h>

int main(void) {
  int num;

  printf("\nTABUADA:\n");
  printf("-.-.-.-.\n\n");
  printf("Insira um número: ");
  scanf("%i", &num);

  printf("\n%i x %i = %i\n", num, 1, num * 1);

  for (int i = 2; i <= 10; i++) {
    printf("%i x %i = %i\n", num, i, num * i);
  }

  return 0;
}
