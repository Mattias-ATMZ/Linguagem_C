#include <stdio.h>

int main() {
  int opcao;

  do {
    printf("BOAS VINDAS:\n");
    printf("1 - Imprimir 'Olá!'\n");
    printf("2 - Imprimir 'Bem-vindo!'\n");
    printf("3 - Sair do algoritmo\n");
    printf("Digite a opção desejada: ");
    scanf("%i", &opcao);

    switch (opcao) {
      case 1:
        printf("Olá!\n");
        break;
      case 2:
        printf("Bem-vindo!\n");
        break;
      case 3:
        printf("Saindo do algoritmo...\n");
        break;
      default:
        printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 3);

  return 0;
}
