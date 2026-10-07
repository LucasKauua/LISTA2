#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
    float venda, vendaTotal = 0, vendaMedia;
	
	for (i = 1; i <= 5; i++)
	{
        printf("--------------VENDA %d--------------\n", i);
        
        do
        {
            printf("Digite o preço: R$");
            scanf("%f", &venda);
        }while (venda < 0);
        
        printf("VENDA DE R$%.2f REGISTRADA!\n", venda);
        
        vendaTotal+=venda;
	}
	
	vendaMedia = vendaTotal / 5;
	
	printf("------------------------------------\n");
	printf("VENDA TOTAL: R$%.2f\n", vendaTotal);
	printf("MÉDIA DE VENDAS: R$%.2f\n", vendaMedia);
	
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
