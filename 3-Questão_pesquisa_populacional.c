#include <stdio.h>

int main(void) {
  // Declare as variáveis que serão utilizadas
  int num_habitantes, i, num_filhos;
  float salario, media_salario, media_filhos, percentual_filhos;
  float maior_salario, menor_salario;

  // Inicialize as variáveis
  media_salario = 0.0;
  media_filhos = 0.0;
  percentual_filhos = 0.0;
  maior_salario = 0.0;
  menor_salario = 0.0;

  // Peça ao usuário para informar a quantidade de habitantes
  printf("Quantos habitantes serão cadastrados? ");
  scanf("%d", &num_habitantes);

  // Faça um loop para ler os dados de cada habitante
  for (i = 0; i < num_habitantes; i++) {
    printf("Informe o salário e o número de filhos do habitante %d: ", i+1);
    scanf("%f %d", &salario, &num_filhos);

    // Atualize a média do salário e do número de filhos
    media_salario += salario;
    media_filhos += num_filhos;

    // Atualize o maior e o menor salário
    if (i == 0 || salario > maior_salario) {
      maior_salario = salario;
    }
    if (i == 0 || salario < menor_salario) {
      menor_salario = salario;
    }

    // Atualize o percentual de habitantes com mais de 2 filhos
    if (num_filhos > 2) {
      percentual_filhos++;
    }
  }

  // Calcule a média do salário e do número de filhos
  media_salario /= num_habitantes;
  media_filhos /= num_habitantes;

  // Calcule o percentual de habitantes com mais de 2 filhos
  percentual_filhos /= num_habitantes;
  percentual_filhos *= 100;

  // Imprima os resultados
  printf("Média do salário: %.2f\n", media_salario);
  printf("Média do número de filhos: %.2f\n", media_filhos);
  printf("Maior salário: %.2f\n", maior_salario);
  printf("Menor salário: %.2f\n", menor_salario);
  printf("Percentual de habitantes com mais de 2 filhos: %.2f%%\n", percentual_filhos);

  return 0;
}
