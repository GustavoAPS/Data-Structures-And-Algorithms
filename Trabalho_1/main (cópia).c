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
  

      

       switch (opc)
       {
         
       case 1:

          if(CriarFila ==1){
              printf("Digite quantos elementos voce deseja inserir:\n");
                scanf("%d", &n);
               InserirFila(n);
              
          }
          else
          {
            CriarFila();
            printf("Digite quantos elementos voce deseja inserir:\n");
                scanf("%d", &n);
               InserirFila(n);
               
          }
          
          


         break;
       
       case 2:

            if(FilaVazia==1){

              printf("Fila vazia\n");
            }
            else
            {
              printf("Digite quantos elementos voce deseja remover:\n");
          scanf("%d", &n);
          RemoverFila(n);
            }
            

         break;
       
         case 3:
           
            if(FilaVazia==1){

              printf("Fila vazia\n");
            }
            else
            {
              ImprimirFila();
            }
         break;
         
         case 4:
           
         
            break;

            case 5: exit(5);
            default:
					printf("\nOpcao Invalida\n\n");
         
       }
      
       

    

    return 0;
       }