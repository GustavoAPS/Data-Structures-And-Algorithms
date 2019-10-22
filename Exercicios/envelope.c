#include <stdio.h>
#include <stdlib.h>

int main (){

    int n,k; //fazer um vetor do tamanho de int do tamanho de k 
    int menor_valor;

    scanf("%d",&n);
    scanf("%d",&k);

    int vetor[k];

    for (int i = 0 ; i < k ; i++)
        vetor[i] = 0;
    
    for (int i = 0 ; i < n ; i++){
        int a;
        scanf("%d",&a);
        vetor[a-1] += 1;
    }

    menor_valor = vetor[0];

    for (int i = 0 ; i < k ; i++){
        if(vetor[i] < menor_valor){
            menor_valor = vetor[i];
        }
    }
    
    printf("%d\n", menor_valor);

return 0;
}    