#include<stdio.h>
#include<stdlib.h>
#include "fila_circular_redimensionavel.h"
int * fila; 
int inic ,fim ,  N,x,n; 

int CriarFila(){

    inic = 0;
    fim = 0;
    N = 10;

    fila = malloc (N* sizeof(int));
        if (fila == NULL);
        return 0;
        return 1;
        
}

int InserirFila(int x){

    int retono=1;
    if (FilaCheia()) {
        retono=redimensionar();
    }
    if(retono){
        fila[fim++]= x;
        if (fim == N)
        {
            fim = 0;
        }
    }
        return retono;
    
}
void libera(){
    free(fila);
}
int RemoverFila(int *x){
    
    if (!FilaVazia()) { 
     *x = fila [inic++];
     if (inic == N){
        inic = 0;
     
     return 1;
     }
     else {

     return 0;
     }
    
    } 
}
int FilaCheia(){
        return ((fim + 1) % N== inic);
}
int FilaVazia(){
      return (inic==fim);

}
int TamanhoFila(){
     int t = fim-inic;
    if(inic > fim){
        t = N + t;
    }
    return t;
}
void ImprimirFila(  ){
      printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < N; i++){
        if(i< inic || i>= fim){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", fila[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(inic == 0 && fim == 0){
        printf("p  u\n");
    }
    else{
        for(int i = 0; i < N; i++){
            if(fila[i] != 0){
                printf(" p ");
                break;
            }
            else{
                printf("    ");
            }
        }
        for(int i = 0; i < N; i++){
            if(fila[i] != 0 && fila[i+1] == 0){
                printf("  u  \n");
                break;
            }
                else{
                printf("     ");
            }
        }
    }
}
    

int redimensionar(){
    int i, j;
    fila = realloc(fila, 2 * N * sizeof(int));
    if(fila == NULL){
        return 0;
    }
    if(fim != N - 1){
        if(fim-1 < N - inic){
            for(i = N, j = 0; j < fim; i++, j++){
                fila[i] = fila[j];
            }
            fim = N + fim;
        }
        else{
            for(i = inic, j = N + inic; i < N; i++, j++){
                fila[j] = fila[i];
            }
            inic = N + inic;
        }
    }
    
    N *= 2;
    return 1;
}
