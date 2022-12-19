#include <stdio.h>

int main() {
  int senha = 1234;
  int tentativa, tentativas = 3;

  do {
    printf("Insira a senha: ");
    scanf("%i", &tentativa);
    if (tentativa == senha) {
      printf("Senha Correta\n");
      return 0;
    } else {
      printf("Senha Incorreta\n");
      tentativas--;
      if (tentativas == 0) {
        printf("Acesso bloqueado\n");
        return 0;
      }
    }
  } while (tentativas > 0);

  return 0;
}
