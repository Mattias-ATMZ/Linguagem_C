#include <stdio.h>

int main()
{
    int votos[5] = {0}; // Inicializa o vetor de votos com 0
    int voto;

    printf("As opções são:\n");
    printf("1. Candidato Jair Rodrigues\n");
    printf("2. Candidato Carlos Luz\n");
    printf("3. Candidato Neves Rocha\n");
    printf("4. Nulo\n");
    printf("5. Branco\n");
    printf("Entre com o seu voto:\n");

    // Lê os votos enquanto o usuário não digitar o número 6
    while (voto != 6)
    {
        scanf("%d", &voto); // Lê o voto do usuário

        // Verifica se o voto é válido
        if (voto >= 1 && voto <= 5)
        {
            votos[voto - 1]++; // Incrementa o número de votos para o candidato ou opção escolhida
        }
    }

    // Calcula as porcentagens de votos nulos e brancos
    double porcentagem_nulos = (double)votos[3] / (double)(votos[0] + votos[1] + votos[2] + votos[3] + votos[4]) * 100;
    double porcentagem_brancos = (double)votos[4] / (double)(votos[0] + votos[1] + votos[2] + votos[3] + votos[4]) * 100;

    // Encontra o candidato vencedor
    int vencedor = 0;
    for (int i = 1; i < 3; i++)
    {
        if (votos[i] > votos[vencedor])
        {
            vencedor = i;
        }
    }

    printf("\nResultado da eleição:\n");
    printf("Candidato Jair Rodrigues: %d votos (%.2lf%%)\n", votos[0], (double)votos[0] / (double)(votos[0] + votos[1] + votos[2] + votos[3] + votos[4]) * 100);
    printf("Candidato Carlos Luz: %d votos (%.2lf%%)\n", votos[1], (double)votos[1] / (double)(votos[0] + votos[1] + votos[2] + votos[3] + votos[4]) * 100);
    printf("Candidato Neves Rocha: %d votos (%.2lf%%)\n", votos[2], (double)votos[2] / (double)(votos[0] + votos[1] + votos[2] + votos[3] + votos[4]) * 100);
    printf("Porcentagem de votos nulos: %.2f%%\n", porcentagem_nulos);
    printf("Porcentagem de votos brancos: %.2f%%\n", porcentagem_brancos);
}

