#include <stdio.h>

int main() {
  int num, sum = 0, count = 0, even_count = 0, even_sum = 0;
  float avg, even_avg;
  int min = 0, max = 0;

  printf("Digite um número (digite 0 para sair): ");
  scanf("%i", &num);

  while (num != 0) {
    // adiciona o número lido na soma dos números digitados
    sum += num;
    // incrementa a contagem de números digitados
    count++;

    // verifica se o número é par e, se for, adiciona na soma dos números pares
    if (num % 2 == 0) {
      even_sum += num;
      // incrementa a contagem de números pares
      even_count++;
    }

    // atualiza o maior e o menor número digitado, se necessário
    if (count == 1) {
      min = num;
      max = num;
    } else {
      if (num > max) {
        max = num;
      } else if (num < min) {
        min = num;
      }
    }

    printf("Digite um número (digite 0 para sair): ");
    scanf("%i", &num);
  }

  // verifica se foi digitado pelo menos um número
  if (count > 0) {
    // calcula a média dos números digitados
    avg = (float) sum / count;

    // calcula a média dos números pares, se houver pelo menos um número par
    if (even_count > 0) {
      even_avg = (float) even_sum / even_count;
    } else {
      even_avg = 0;
    }

    printf("\n(A) Soma dos números digitados: %i\n", sum);
    printf("(B) Quantidade de números digitados: %i\n", count);
    printf("(C) Média dos números digitados: %.2f\n", avg);
    printf("(D) Maior número digitado: %i\n", max);
    printf("(E) Menor número digitado: %i\n", min);
    printf("(F) Média dos números pares: %.2f\n");

    }
}



