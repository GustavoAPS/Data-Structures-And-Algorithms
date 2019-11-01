#include <stdio.h>
#include<stdlib.h>
#include "fila_lista_encadeada_circular.h"
 
typedef struct Node
 
{
	int info;
	struct Node *next;
}node;
 
node *front=NULL,*rear=NULL,*temp;
 

  void CriarFila(){

	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the node value : ");
	scanf("%d",&newnode->info);
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
  void InserirFila(){

    }
    void RemoverFila(){

	temp=front;
	if(front==NULL)
		printf("\nUnderflow :");
	else
	{
		if(front==rear)
		{
			printf("\n%d",front->info);
			front=rear=NULL;
		}
		else
		{
			printf("\n%d",front->info);
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
    void ImprimirFila(){
	temp=front;
	if(front==NULL)
		printf("\nEmpty");
	else
	{
		printf("\n");
		for(;temp!=rear;temp=temp->next)
			printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
			printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
	}      
    }

