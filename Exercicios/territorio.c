#include <stdlib.h>
#include <stdio.h>

int main(){


int position = 0;
int n,s;
double soma = 0;
double soma_parcial = 0;

scanf("%d",&n);
int vetor_de_entrada[n];

for (int i=0; i<n;i++){
    scanf("%d",&s);
    soma += s;
    vetor_de_entrada[i] = s;
}

//printf("%lf\n",soma);
double soma_menor = 0;
for(int j = 0 ; j < n ; j++){
    if(soma_menor * 2 == soma){
        position = j;
        j = n;
    }else{
        soma_menor += vetor_de_entrada[j];
    }
}

printf("%d\n",position);

return 0;
}
