#include <stdio.h>

int main() {
  int x, i;
  long long int fib[100]; // declara um array para armazenar os números da sequência

  printf("Insira o valor de X: ");
  scanf("%d", &x); // lê o valor de X fornecido pelo usuário

  fib[0] = 0; // o primeiro número da sequência é 0
  fib[1] = 1; // o segundo número da sequência é 1

  for (i = 2; i < x; i++) {
    fib[i] = fib[i-1] + fib[i-2]; // gera o próximo número da sequência como a soma dos dois anteriores
  }

  printf("O %d-ésimo número da sequência de Fibonacci é %lld\n", x, fib[x-1]);

  return 0;
}
