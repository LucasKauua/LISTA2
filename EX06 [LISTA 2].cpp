#include <stdio.h>
#include <locale.h>

int main( )
{
	setlocale(LC_ALL, "");
	
	int i, quantProdutos, codigoProduto;
	float precoProduto;
	
	printf("-------------------MERCADO DO ZÉ-------------------\n");
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &quantProdutos);
	
	for (i = 1; i <= quantProdutos; i++)
	{
		printf("---------------------Produto %d---------------------\n", i);
		printf("Digite o código: ");
		scanf("%d", &codigoProduto);
		
		do
		{
		    printf("Digite o preço: R$");
		    scanf("%f", &precoProduto);
    	}while (precoProduto <= 0);
    	
	    printf("\nProduto %d | Código: %d | Preço: R$%.2f\n", i, codigoProduto, precoProduto);
	}
	
	getchar( );
	printf("\nPROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar( );
	
	return 0;
}
