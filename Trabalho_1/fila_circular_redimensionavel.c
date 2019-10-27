#include<stdio.h>

int * fila; 
int inic=0 ,fim=0, N; 

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
    if ((fim + 1) %N == inic)// fila cheia 
        if(redimensionar())
        fila [fim]= x;
        fim =(fim +1)% N; return 1; 

}
void RemoverFila(int x){
    if (inic == fim) return 0;// fila vazia 
    *x = fila [inic];
    inic = (inic + 1)%N; return 1;
}
void FilaCheia(){
        return ((fim + 1) % N== inic);
}
void FilaVazia(){
      return (inic==fim);

}
void TamanhoFila(){

}
void ImprimirFila(){
    if(inic == fim){
        printf ("Fila está fazia\n");
    }
    else
    {
        
    }
    
    
}
int redimensionar(){
        int j;
   fila = realloc(fila,2*N*sizeof(int));
	
	if(inic>fim){

	  if(N-inic > fim){
		for(int i = 0; j=N; i>N; i++;j++)
			fila[j]=fila[i];
				fim=N+fim;		
		
		}
		
	}

	else 
		for(int i=N-1; j=2*N-1; i>=inic; i--;j--)
			fila[j]=fila[i]; inic= j+1;//inic=N+inic;
		
}
