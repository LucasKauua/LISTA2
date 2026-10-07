#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, num, prod;
	
	printf("Digite a tabuada escolhida: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		prod = num * i;
		
		printf("%d x %d = %d\n", i, num, prod);
	}
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
