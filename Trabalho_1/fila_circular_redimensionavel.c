#include<stdio.h>

int * fila; 
int inic=0 ,fim=0, N,x,n; 

void CriarFila(){

    inic = 0;
    fim = 0;
    N = 10;

    fila = malloc (N* sizeof(int));
        if (fila == NULL);
        return 0;
        return 1;



}

void InserirFila(int x){
    printf("Digite quantos elementos voce deseja inserir:\n");
            scanf("%d", &x);
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
}
void libera(){
    free(fila);
}
void RemoverFila(int *x){
     printf("Digite quantos elementos voce deseja remover:\n");
      scanf("%d", x);
    if (FilaCheia()) { 
     *x = fila [inic++];
     if (inic == N){
        inic = 0;
     }
     return 1;
     return 0;
    }
   
}
void FilaCheia(){
        return ((fim + 1) % N== inic);
}
void FilaVazia(){
      return (inic==fim);

}
void TamanhoFila(){
     int t = fim-inic;
    if(inic > fim){
        t = N + t;
    }
    return t;
}
void ImprimirFila(  ){
      printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < N; i++){
        if(fila[i] == 0){
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
