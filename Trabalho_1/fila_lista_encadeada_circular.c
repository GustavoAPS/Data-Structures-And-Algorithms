#include <stdio.h>
#include<stdlib.h>
#include "fila_lista_encadeada_circular.h"
 
typedef struct Node
 
{
	int informacao;
	struct Node *next;
}node;
 
node *front=NULL,*rear=NULL,*temp;
 

  void CriarFila(){

  }

  void libera()
  {

  }

  void InserirFila( int numero_para_incerir)
  {
	  node *newnode;
	  newnode=(node*)malloc(sizeof(node));
	  newnode->informacao = numero_para_incerir;
	  newnode->next=NULL;

	  if(rear==NULL)
	    front=rear=newnode;
	  else
	  {
		  rear->next=newnode;
		  rear=newnode;
	  }
	
	rear->next=front;
  }

  void RemoverFila()
  {

	temp=front;
	if(front==NULL)
		printf("\nTentativa invalida de retirada");
	else
	{
		if(front==rear)
		{
			printf("\n%d",front->informacao);
			front=rear=NULL;
		}
		else
		{
			printf("\n%d",front->informacao);
			front=front->next;
			rear->next=front;
		}
 
	temp->next=NULL;
	free(temp);
	}
    }
    void FilaCheia(){
      

    }
    void FilaVazia(){

    }
    void TamanhoFila(){

    }
    void ImprimirFila()
    {
	  temp=front;

	  if(front==NULL)
		  printf("\nFila vazia");
	  else
	  {
		  printf("\n");
		  for(;temp!=rear;temp=temp->next)
		  printf(" %d ",temp->informacao);
		  printf(" %d ",temp->informacao);
		  printf("\n");
	  }      
    }

