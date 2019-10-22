#include <stdio.h>
#include <stdlib.h>

int f91(int n)
{
    if(n >= 101)
    {
        return (n - 10);
    }
    if(n <= 100)
    {
        return (f91(f91(n+11)));
    }
}

int main ()
{
    int n = 1,saida;
    while(n != 0)
    {
        scanf("%d",&n);
        saida = f91(n);

        if(n != 0)
        printf("%d\n",saida);
    }
    
    return 0;
}