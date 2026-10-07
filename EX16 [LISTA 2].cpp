#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, quantidade, codigo, prioridade, servico;
	
	printf("Quantidade de chamados: ");
	scanf("%d", &quantidade);
	
	for (i =1; i <= quantidade; i++)
	{
		printf("\n----------------CHAMADO %d----------------\n", i);
		printf("Código: ");
		scanf("%d", &codigo);
		
		do
		{
			printf("\n-----------NÍVEL DE PRIORIDADE-----------\n");
			printf("[ 1 ] URGENTE\n");
			printf("[ 2 ] PRIORITÁRIO\n");
			printf("[ 3 ] NORMAL\n");
			printf("Digite um número da lista: ");
			scanf("%d", &prioridade);
			
			printf("\n-----------------SERVIÇO-----------------\n");
			printf("[ 1 ] SOFTWARE\n");
			printf("[ 2 ] HARDWARE\n");
			printf("[ 3 ] REDE\n");
			printf("Digite um número da lista: ");
			scanf("%d", &servico);
			
			printf("\n-----------CHAMADO CADASTRADO!-----------\n");
			printf("CÓDIGO: %d\n", codigo);
			printf("NÍVEL: ");
			
			if (prioridade == 1)
			{
				printf("URGENTE\n");
		    }
			else if (prioridade == 2)
			{
				printf("PRIORITÁRIO\n");
		    }
			else if (prioridade == 3)
			{
				printf("NORMAL\n");
		    }	
			else
			{
				printf("INVÁLIDO!\n");
			}
			
			printf("SERVIÇO: ");
			
			if (servico == 1)
			{
				printf("SOFTWARE\n");
		    }
			else if (servico == 2)
			{
				printf("HARDWARE\n");
		    }
			else if (servico == 3)
			{
				printf("REDE\n");
		    }				
			else
			{
				printf("INVÁLIDO!\n");
			}
		} while(servico < 1 || servico > 3);
	}
	
	printf("\n------------------------------------------\n");
	printf("CADASTRO COMPLETO!\n");
	printf("------------------------------------------\n");
		
	getchar();
	printf("\nPROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para encerrar o programa!");
	getchar();
		
	return 0;
}
