#include <stdio.h>
#include <stdlib.h>

int main (){
  int entrada;
  scanf("%d",&entrada);

  for(int i = 0 ; i < entrada + 1 ; i++){

    for(int j = 1 ; j < i+1 ; j++ ){

      if(i<10)
      {
        printf("0");
      }
      printf("%d",i);

      if(j > 0 && j < i)
      {
        printf(" ");
      }
      if( j == i)
      {
        printf("\n");
      }
    }
  }

  printf("\n");

  for(int i = 0 ; i < entrada + 1 ; i++){

    for(int j = 1 ; j < i+1 ; j++ ){

      if(j<10)
      {
        printf("0");
      }
      printf("%d",j);

      if(j > 0 && j < i)
      {
        printf(" ");
      }
      if( j == i)
      {
        printf("\n");
      }
    }
  }
  return 0;
}
