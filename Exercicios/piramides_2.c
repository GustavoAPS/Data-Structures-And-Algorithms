#include <stdio.h>
#include <stdlib.h>
int main(){
  int entrada;
  int base;
  scanf("%d",&entrada);
  base = (entrada * 2) - 1;

  for (int i = 1; i < entrada+1; i++) // print lines
  {
    for (int a = 0 ; a < ( base - ((i*2) - 1) )/2 ; a ++)
    {
      printf(" ");
    }
    for (int b = 0 ; b < (i*2) - 1 ; b ++)
    {
      printf("*");
    }

    printf("\n");
  }
  return 0;
}
