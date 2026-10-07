#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, quantAlunos;
	float nota;
	
	printf("-------------------COLÉGIO-------------------\n");
	
	do
	{
    	printf("Digite a quantidade de alunos da turma A: ");
    	scanf("%d", &quantAlunos);
    }while (quantAlunos <= 0);
	
	for (i = 1; i <= quantAlunos; i++)
	{
		printf("-------------------ALUNO %d-------------------\n", i);
		
		do
		{
    		printf("NOTA: ");
    		scanf("%f", &nota);
        }while (nota < 0);
        
		printf("\n");
		printf("NOTA DECLARADA: %.1f\n", nota);
		
		if (nota >= 7)
		{
			printf("NOTA MAIOR OU IGUAL A 7\n");
		}
		else
		{
			printf("NOTA MENOR QUE 7\n");
		}
	}
	
	printf("---------------------------------------------\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
