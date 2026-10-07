#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite um número válido: ");
	scanf("%d", &num);
	
	while (num < 0)
	{
		printf("NÚMERO INVÁLIDO!\n");
		printf("Digite novamente: ");
		scanf("%d", &num);
	}
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
