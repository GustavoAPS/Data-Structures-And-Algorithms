#include <stdio.h>
#include<stdlib.h>

//#include "fila_vetor_tamanho_fixo.h"
//#include "fila_circular_redimensionavel.h"
#include "fila_lista_encadeada_circular.h"

int main(){

  int opc = 0;
  int num = 0;
  CriarFila();

  while(opc != 5){

    printf("\n 1- Inserir n elementos na fila");
    printf("\n 2- Remover n elementos na fila.");
    printf("\n 3- Imprimir a fila.");
    printf("\n 4 - Reiniciar a fila.");
    printf("\n 5 - Sair");
    printf("\n OPÇÃO =  ");

    scanf("%d", &opc);
  
    if(opc == 1){

      printf("Digite quantos elementos voce deseja inserir:\n");
      scanf("%d", &num);

      for (int j = 0 ; j < num ; j++)
      {
        int n;
        printf("\nDigite o numero para inserir:");
        scanf("%d", &n);
        InserirFila(n);
      }
    }

    if(opc == 2){

      printf("Digite quantos elementos voce deseja remover:\n");

      scanf("%d", &num);

      for(int ii=0; ii < num; ii++)
      {
        RemoverFila();
      }
           
    }

    if(opc == 3)
    {
      ImprimirFila();
    }

    if(opc == 4)
    {
      libera();
    }

    if(opc == 5)
    {

    }
  }
  return 0;
  }