#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int opcao;
	
	do
	{
		printf("------------------------------\n");
		printf("             MENU             \n");
		printf("------------------------------\n");
		printf("[ 1 ] CADASTRAR\n");
		printf("[ 2 ] CONSULTAR\n");
		printf("[ 3 ] RELATÓRIO\n");
		printf("[ 0 ] SAIR\n");
		printf("------------------------------\n");
		printf("Digite uma opção: ");
		scanf("%d", &opcao);
		
		switch (opcao)
		{
			case 0 ... 3:
				printf("OPÇÃO %d ESCOLHIDA!\n", opcao);
				break;
			
			default:
				printf("OPÇÃO INVÁLIDA!\n");
		}
		
	}while (opcao != 0);
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
