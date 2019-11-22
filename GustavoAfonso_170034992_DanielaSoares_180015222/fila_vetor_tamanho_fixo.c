#include "fila_vetor_tamanho_fixo.h"
#include <stdio.h>
#include <stdlib.h>

int *fila_ptr;
int tamanho_da_fila = 0;

void CriarFila()
{
    tamanho_da_fila = 5;
    fila_ptr = malloc(tamanho_da_fila * sizeof(int));
}

void InserirFila(int numero_inserido)
{
    for(int i = 0; i < tamanho_da_fila; i++)
    {
        if(fila_ptr[i] == 0)
        {
            fila_ptr[i] = numero_inserido;
            break;
        }
    }
}

void RemoverFila(int n)
{
    for(int i = 0; i < tamanho_da_fila; i++)
    {
        if(fila_ptr[i] != 0)
        {
            fila_ptr[i] = 0;
            break;
        }
    }
}

void FilaCheia(){
}

void FilaVazia()
{
}

void libera()
{
    ReiniciaFila();
}

void ReiniciaFila()
{
    tamanho_da_fila = 0;
}

void ImprimirFila()
{
    for(int i = 0; i < tamanho_da_fila; i++)
    {
        printf("---");
    }

    printf("\n|");

    for(int i = 0; i < tamanho_da_fila - 1; i++)
    {
        printf(" %d ", fila_ptr[i] );
        printf("|");
    }
        printf("\n");


    for(int i = 0; i < tamanho_da_fila; i++)
    {
        printf("---");
    }

}