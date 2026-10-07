#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, num;
	
	for (i = 1; i <= 10; i++)
	{
		printf("Digite o %dº número: ", i);
		scanf("%d", &num);
		printf("NÚMERO ");
		
		if (num > 0)
		{
			printf("POSITIVO\n");
		}
		else if (num < 0)
		{
			printf("NEGATIVO\n");
		}
		else
		{
			printf("ZERO\n");
		}
	}
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
