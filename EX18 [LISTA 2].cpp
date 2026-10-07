#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, opcao, AT_software = 0, AT_hardware = 0, AT_rede = 0, AT_total = 0;
	
	for (i = 1; i <= 10; i++)
	{
        printf("-----------------ATENDIMENTO %d-----------------\n", i);
        printf("[ 1 ] SOFTWARE\n");
        printf("[ 2 ] HARDWARE\n");
        printf("[ 3 ] REDE\n");
        
        do
        {
            printf("Digite uma opção: ");
            scanf("%d", &opcao);
        }while (opcao != 1 && opcao != 2 && opcao != 3);
        
        switch (opcao)
        {
            case 1:
                 AT_software++;
                 break;
                
            case 2:
                 AT_hardware++;
                 break;
                 
            case 3:
                 AT_rede++;
                 break;             
        }
        
        AT_total++;
	}
	
	printf("------------------------------------------------\n", i);
	printf("Quantidade de atendimentos para Software: %d\n", AT_software);
	printf("Quantidade de atendimentos para Hardware: %d\n", AT_hardware);
	printf("Quantidade de atendimentos para Rede: %d\n", AT_rede);
	printf("Quantidade de atendimentos totais: %d\n", AT_total);
	
	printf("\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
