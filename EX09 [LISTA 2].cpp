#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i = 1, num;
	
	printf("Digite o %dº número: ", i);
	scanf("%d", &num);
	
	while (num != 0)
	{
		i++;
		printf("Digite o %dº número: ", i);
	    scanf("%d", &num);
	}
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
