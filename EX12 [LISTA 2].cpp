#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int idade;
	
	do
	{
		printf("Digite a idade do usuário: ");
		scanf("%d", &idade);
		
		if (idade < 0)
		{
			printf("IDADE INVÁLIDA!\n");
		}
		else
		{
			printf("IDADE VÁLIDA!\n");
		}
	}while (idade < 0);
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
