#include <stdio.h>
#include <string.h>

int main(void) {
  char secret[4]; // vetor para armazenar os caracteres secretos
  char guess; // variável para armazenar a tentativa do usuário
  int i; // contador
  int remaining = 15; // número de tentativas restantes
  int correct = 0; // número de caracteres corretos

  printf("Digite os tres caracteres secretos: ");
  scanf("%s", secret);

  while (remaining > 0 && correct < 3) {
    printf("Digite uma tecla: ");
    scanf(" %c", &guess); // lê a tentativa do usuário

    // verifica se a tentativa do usuário está correta
    for (i = 0; i < 3; i++) {
      if (guess == secret[i]) {
        printf("Voce acertou! %d caracteres restantes.\n", 3 - ++correct);
        break; // sai do loop
      }
    }

    // se a tentativa do usuário não estiver correta
    if (i == 3) {
      printf("Voce errou. %d caracteres restantes. %d tentativas restantes.\n", 3 - correct, --remaining);
    }
  }

  // verifica se o usuário ganhou ou perdeu o jogo
  if (correct == 3) {
    printf("Parabens, voce ganhou o jogo!\n");
  } else {
    printf("Voce perdeu o jogo.\n");
  }

  return 0;
}

