#include <stdio.h>

int main(void) {
  // Declaração de variáveis
  int item, mais_itens;
  float preco, total;

  // Inicialização de variáveis
  total = 0;

  // Loop para processar compras de vários clientes
  do {
    // Inicialização de variáveis para uma nova compra
    mais_itens = 0;
    total = 0;

    printf("\n 1.Feijão (R$ 2.0)\n 2.Arroz  (R$ 1.5)\n 3.Carne  (R$ 10.0)\n 4.Tomate (R$ 3.0)\n 5.Cebola (R$ 2.5)\n\n");
    
    // Loop para processar vários itens de uma compra
    do {
      printf("Informe o número do item comprado: ");
      scanf("%d", &item);

      if (item == 1) {
        preco = 2.0;
      } else if (item == 2) {
        preco = 1.5;
      } else if (item == 3) {
        preco = 10.0;
      } else if (item == 4) {
        preco = 3.0;
      } else if (item == 5) {
        preco = 2.5;
      } else {
        printf("Item inválido!\n");
        continue;
      }

      printf("Informe se há mais itens a serem processados,\n(0 - Não / 1 - Sim): ");
      scanf("%d", &mais_itens);

      total += preco;
    } while (mais_itens == 1);
    
    printf("\n\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.");
    printf("\nTotal da compra: R$ %.2f\n", total);
    printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n\n");
  } while (1); // O caixa fica aberto até o fim do expediente

  return 0;
}
