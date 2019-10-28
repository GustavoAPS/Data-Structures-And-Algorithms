#include "fila_vetor_tamanho_fixo.h"
#include <stdio.h>
#include <stdlib.h>

int *fila_ptr;
int tamanho_da_fila = 0;

void CriarFila()
{
    printf("Qual o tamanho da fila?");
    scanf("%d", &tamanho_da_fila);

    fila_ptr = malloc(tamanho_da_fila * sizeof(int));

    printf("fila de tamanho %d criada\n", tamanho_da_fila);
    printf("fila de tamanho %x criada\n", fila_ptr);
}

void InserirFila(int numero_inserido)
{
    if (tamanho_da_fila == 0)
        CriarFila();

    int elemento;
    int elemento_inserido = 0;

    printf("Qual o elemento para inserir?\n");
    scanf("%d", &elemento);

    for(int i = 0; i < tamanho_da_fila; i++)
    {
        if(fila_ptr[i] == 0)
        {
            fila_ptr[i] = elemento;
            break;
        }
    }
}

void RemoverFila(){

    int elemento;    
    printf("Remover elemento de qual posicao?\n");
    scanf("%d", &elemento);

    if (elemento < tamanho_da_fila - 1)
        fila_ptr[elemento] = 0;
    
}

void FilaCheia(){



}

void FilaVazia()
{

}

void ReiniciaFila()
{
    tamanho_da_fila = 0;
}

void ImprimirFila()
{

    for(int i = 0; i < tamanho_da_fila; i++)
    {
        printf("\nElemento na posicao %d = %d", i, fila_ptr[i] );
    }

}