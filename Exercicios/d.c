#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n;
        scanf("%d", &n);

        char *gabarito, *respostasCandidato;
        gabarito = (char*)malloc(n * sizeof(char));
        respostasCandidato = (char*)malloc(n * sizeof(char));

        scanf("%s", gabarito);
        scanf("%s", respostasCandidato);

        int i;
        int qntAcertos = 0;
        for(i = 0; i < n; i++)
        {
                if(gabarito[i] == respostasCandidato[i])
                        qntAcertos++;
        }

        printf("%d\n", qntAcertos);

        return 0;
}