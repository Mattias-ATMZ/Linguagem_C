#include <stdio.h>

int main(void) {
  int idade;
  int whisky, vodka, cerveja, cachaça;
  float menuItem;
  int codigo, unidades;
  float valor;

  float Whisky1 =  200;
  float Whisky2 = 150;
  float Whisky3 = 140;
  
  float Vodka1 = 60;
  float Vodka2 = 40;
  float Vodka3 = 30;

  float Cerveja1 = 1.5;
  float Cerveja2 = 2.0;
  float Cerveja3 = 3.0;

  float Cachaça1 = 8;
  float Cachaça2 = 20;
  float Cachaça3 = 22;
  
  printf("\nSistema de compra de bebidas!\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n\n");
  printf("#Qual é a sua idade? ");
  scanf("%i", &idade);
  if(idade>=18){
    printf("\n--->Acesso liberado!<---\n\n");
  }
  else if (idade<3){
    printf("\nIdade inválida!\n");
    return 0;
  }
  else{
    printf("você eh de menor e nao pode comprar bebidas");
    return 0;
  }
  
  printf("menu:\n 1-whisky\n 2-vodka\n 3-cerveja\n 4-cachaça\n");
  printf("\n#Escolha uma opção de 1 a 4: ");
  scanf("%f", &menuItem);

  while (menuItem<=0 || menuItem>4){
    printf("-_- Opção invalida!\n");
    printf("\n#Escolha uma opção de 1 a 4: ");
    scanf("%f", &menuItem);
  }
  
 if (menuItem==1){
   printf("\nCódigo |    Nome   | Preço");
   printf("\n--------------------------\n");
   printf("  100  |  Whisky1  |  200\n");
   printf("  101  |  Whisky2  |  150\n");
   printf("  102  |  Whisky3  |  140\n\n");
 } 
 if (menuItem==2){
   printf("\nCódigo |   Nome   | Preço");
   printf("\n-------------------------\n");
   printf("  200  |  Vodka1  |  60\n");
   printf("  201  |  Vodka2  |  40\n");
   printf("  202  |  Vodka3  |  30\n\n");
 } 
 if (menuItem==3){
   printf("\nCódigo |    Nome    | Preço");
   printf("\n-------------------------\n");
   printf("  300  |  Cerveja1  |  1.5\n");
   printf("  301  |  Cerveja2  |  2.0\n");
   printf("  302  |  Cerveja3  |  3.0\n\n");
 } 
 if (menuItem==4){
   printf("\nCódigo |    Nome    | Preço");
   printf("\n-------------------------\n");
   printf("  400  |  Cachaça1  |  8.0\n");
   printf("  401  |  Cachaça2  |  20.0\n");
   printf("  402  |  Cachaça3  |  22.0\n\n");
 } 

  while(codigo!=100 && codigo!=101 && codigo!=102 && codigo!=200 && codigo!=201 && codigo!=202 && codigo!=300 && codigo!=301 && codigo!=302 && codigo!=400 && codigo!=401 && codigo!=402 ){
    printf("#Digite o código do produto que você deseja: ");
    scanf("%i", &codigo);
  }

  printf("\n#Quantas unidades? ");
  scanf("%i", &unidades);
  
  if(unidades<=0){
    printf("Quantidade invalida!");
  }
  else{
    if(codigo==100){
      if (unidades<=5){
        valor = 200*unidades;
      }
      else if (unidades>5 && unidades<50){
      valor = (200 - 200*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (200 - 200*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (200 - 200*(0.35))*unidades;
    }
      printf("\n\nunidades  |     Nome     | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   whisky1   |  %f   \n", unidades, valor);
    }

    
    if(codigo==101){
      if (unidades<=5){
        valor = 150*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (150 - 150*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (150 - 150*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (150 - 150*(0.35))*unidades;
      }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   whisky2   |  %f   \n", unidades, valor);
    }

    if(codigo==102){
      if (unidades<=5){
        valor = 140*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (140 - 140*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (140 - 140*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (140 - 140*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   whisky3   |  %f   \n", unidades, valor);
    }

    if(codigo==200){
      if (unidades<=5){
        valor = 60*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (60 - 60*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (60 - 60*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (60 - 60*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Vodka1   |  %f   \n", unidades, valor);
    }
    if(codigo==201){
      if (unidades<=5){
        valor = 40*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (40 - 40*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (40 - 40*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (40 - 40*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Vodka2   |  %f   \n", unidades, valor);
    }
    if(codigo==202){
      if (unidades<=5){
        valor = 30*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (30 - 30*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (30 - 30*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (30 - 30*(0.35))*unidades;
      }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Vodka3   |  %f   \n", unidades, valor);
    }
    if(codigo==300){
      if (unidades<=5){
        valor = 1.5*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (1.5 - 1.5*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (1.5 - 1.5*(0.3))*unidades;
      }
      if (unidades>=100){
        valor = (1.5 - 1.5*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cerveja1   |  %f   \n", unidades, valor);
    }
    if(codigo==301){
      if (unidades<=5){
        valor = 2*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (2 - 2*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (2 - 2*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (2 - 2*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cerveja2   |  %f   \n", unidades, valor);
    }
    if(codigo==302){
      if (unidades<=5){
        valor = 3*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (3 - 3*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (3 - 3*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (3 - 3*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cerveja3   |  %f   \n", unidades, valor);
    }
    if(codigo==400){
      if (unidades<=5){
        valor = 8*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (8 - 8*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (8 - 8*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (8 - 8*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cachaça1   |  %f   \n", unidades, valor);
    }
    if(codigo==401){
      if (unidades<=5){
        valor = 20*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (20 - 20*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (20 - 20*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (20 - 20*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cachaça2   |  %f   \n", unidades, valor);
    }
    if(codigo==402){
      if (unidades<=5){
        valor = 22*unidades;
      }
      if(unidades>5 && unidades<50){
        valor = (22 - 22*(0.1))*unidades;
      }
      else if (unidades>50 && unidades<100){
        valor = (22 - 22*(0.3))*unidades;
      }
      else if (unidades>=100){
        valor = (22 - 22*(0.35))*unidades;
    }
      printf("\n\nunidades   |     Nome      | Preço");
      printf("\n---------------------------------\n");
      printf("    %i    |   Cachaça3   |  %f   \n", unidades, valor);
    }
 }
return 0;
}
