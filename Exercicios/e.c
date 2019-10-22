#include <stdio.h>

int main()
{
	int p;
	scanf("%d", &p);

	char palavra[9999];

	while(p--)
	{
		scanf("%s", palavra);

		int ordenado = 1;
		char charAnterior = palavra[0];
		for(int i = 1; palavra[i] != '\0'; i++)
		{
			char charAtual = palavra[i];

			if(charAtual >= 'A' && charAtual <= 'Z')
				charAtual += 32;

			if(charAnterior >= charAtual)
			{
				ordenado = 0;
				break;
			}
			charAnterior = palavra[i];
		}

		printf("%s: ", palavra);
		if(ordenado)
			printf("O\n");
		else
			printf("N\n");

	}

	return 0;
}
