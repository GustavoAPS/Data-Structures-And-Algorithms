#include <stdio.h>
#include <stdlib.h>

int main (){

int d1,m1,a1;
int d2,m2,a2;
int r1,r2,r3;
int dias_a = 0;
int dias_b = 0;
int soma;
int anos,meses,dias;

scanf ("%d %d %d %d %d %d",&d1,&m1,&a1,&d2,&m2,&a2);

dias_a = (31 - d1) + (31*m1-1) + (372*a1);
dias_b = d2 + (31*m2-1) + (372*a2);

soma = (dias_b - dias_a + 1);

anos  = soma/372;
meses = (soma%372)/12;
dias  =  ((soma%372)%12);

printf("voce esta vivo a %d anos\n",  anos);
printf("voce esta vivo a %d meses\n",meses);
printf("voce esta vivo a %d dias\n",  dias);
return 0;
}
