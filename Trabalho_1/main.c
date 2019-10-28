#include <stdio.h>
#include<stdlib.h>
//#include "fila_vetor_tamanho_fixo.h"
#include "fila_circular_redimensionavel.h"
//#include "fila_lista_encadeada_circular.h"

int main(){

  int opc, n;
  printf("\n 1- Inserir n elementos na fila");
    printf("\n 2- Remover n elementos na fila.");
    printf("\n 3- Imprimir a fila.");
    printf("\n 4 - Reiniciar a fila.");
    printf("\n 5 - Sair");
    printf("\n OPÇÃO =  ");
    scanf("%d", &opc);
  
do
    {

       switch (opc)
       {
         
       case 1:

          //CriarFila();
        printf("Digite quantos elementos voce deseja inserir:\n");
                scanf("%d", &n);
               InserirFila(n);
         break;
       
       case 2:
        
         printf("Digite quantos elementos voce deseja remover:\n");
          scanf("%d", &n);
          RemoverFila(n);
          //printf("Elemento removido: %d\n", n);  

         break;
       
         case 3:
           
          
          ImprimirFila(5);
      
         break;
         
         case 4:
           
         
            break;
         
       }
       }while(opc!=5);
       
  
    return 0;
       }