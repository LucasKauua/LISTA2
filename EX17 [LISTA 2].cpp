#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, opcao, PC_defeito  = 0, PC_funcionando = 0;
	
	for (i = 1; i <= 10; i++)
	{
		printf("----------COMPUTADOR %d----------\n", i);
		printf("[ 1 ] FUNCIONANDO\n");
		printf("[ 2 ] COM DEFEITO\n");
		
		do
		{
			printf("Digite a opção: ");
		    scanf("%d", &opcao);
    	}while (opcao != 1 && opcao != 2);
		
		switch (opcao)
		{
			case 1:
				PC_funcionando++;
				break;
			
			case 2:
				PC_defeito++;
				break;
		}
	}
	
	printf("---------------------------------\n");
	printf("Quantidade de computadores funcionando: %d\n", PC_funcionando);
	printf("Quantidade de computadores com defeito: %d\n", PC_defeito);
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
