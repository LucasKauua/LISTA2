#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	
	for (i = 20; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	
	printf("FIM DA CONTAGEM!\n");
	printf("\nPROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
