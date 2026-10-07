#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	
	for (i = 1; i <= 20; i++)
	{
		printf("%d\n", i);
	}
	
	printf("\n");
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
