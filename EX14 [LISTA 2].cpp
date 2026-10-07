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
		printf("[ 1 ] SOFTWARE\n");
		printf("[ 2 ] HARDWARE\n");
		printf("[ 3 ] REDE\n");
		printf("[ 0 ] SAIR\n");
		printf("------------------------------\n");
		printf("Digite uma opção: ");
		scanf("%d", &opcao);
		
		switch (opcao)
	{
		case 0:
			printf("OPÇÃO DE SAÍDA SELECIONADA!\n");
			break;
			
		case 1:
			printf("SERVIÇO DE SOFTWARE SELECIONADO!\n");
			break;
		
		case 2:
			printf("SERVIÇO DE HARDWARE SELECIONADO!\n");
			break;
		
		case 3:
			printf("SERVIÇO DE REDE SELECIONADO!\n");
			break;
		
		default:
			printf("SERVIÇO INVÁLIDO!\n");
	}
		
	}while (opcao != 0);
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
