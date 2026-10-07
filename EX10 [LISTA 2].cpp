#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, senha, senhaCorreta = 1234;
	
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	while (senha != senhaCorreta)
	{
		printf("SENHA INCORRETA!\n");
		printf("Digite a senha novamente: ");
		scanf("%d", &senha);
	}
	
	printf("ACESSO PERMITIDO!\n");
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
