#include<stdlib.h>
#include<stdio.h>

int main(){
  int entrada;

  scanf("%d", &entrada);

  if(entrada <= 10){
    printf("7\n");
  }else
    if (entrada >= 11 && entrada <=30 )
    {
      printf("%d\n", (entrada-10) + 7 );
    }
    else
      if(entrada >= 31 && entrada <= 100)
      {
        printf("%d\n", ((entrada-30)*2) + 20 + 7 );
      }
      else
      {
        printf("%d\n", ((entrada-100) * 5) + 140 + 20 + 7 );
      }

  return 0;
}
