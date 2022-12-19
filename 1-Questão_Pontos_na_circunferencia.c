#include <stdio.h>
#include <math.h>

int main(void) {
  float r, c1, c2, p1, p2;

  //DEFINA A CIECUNFERÊNCIA
  printf("\n1º DEFINA A CIRCUNFERÊNCIA\n---------->\n\n");
  printf("Digite o valor do Raio: ");
  scanf("%f", &r);
  printf("Digite o primeiro valor do centro (c1): ");
  scanf("%f", &c1);
  printf("Digite o segundo valor do centro (c2): ");
  scanf("%f", &c2);

  float r2 = pow(r,2);

  //DEFINA OS PONTOS QUE QUER DEFINIR
  printf("\n\n2º DEFINA OS PONTOS QUE QUER ENCONTRAR\n---------->\n\n");
  printf("Digite o ponto 1: ");
  scanf("%f", &p1);
  printf("Digite o ponto 2: ");
  scanf("%f", &p2);

  printf("\n\n  r: %f\n c1: %f\n c2: %f\n p1: %f\n p2: %f \n r^2: %f", r, c1, c2, p1, p2, r2);
  
  //RESULTADO
  printf("\n\n3º RESULTADO (p1,p2):\n---------->\n\n");

  if (r==(pow((p1-c1),2)+pow((p2-c2),2))){
    printf("Pertence a Circunferencia!");
  }
  else{
      if (r>(pow((p1-c1),2)+pow((p2-c2),2))){
        printf("Estah Fora!");
      }
      if (r<(pow((p1-c1),2)+pow((p2-c2),2))){
        printf("Estah Dentro!");
      }
    }
  
  
  return 0;
}