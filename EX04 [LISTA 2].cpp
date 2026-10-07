#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	
	for (i = 1; i <= 50; i+=2)
	{
		printf("%d\n", i);
	}
	
	printf("\nPROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
