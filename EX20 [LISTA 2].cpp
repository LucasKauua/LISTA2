#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int quantChamados = 0, opcao, codigo, tipo, prioridade, quantSoftware = 0, quantHardware = 0, quantRede = 0, quantUrgente = 0;
	
	do
	{
        printf("\n-------------------SUPORTE-------------------\n");
        printf("[ 0 ] SAIR\n");
        printf("[ 1 ] REGISTRAR\n");
        printf("[ 2 ] RELATÓRIO\n");
        printf("Digite uma opção válida: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
            case 1:
                 printf("\n------------------REGISTRAR------------------\n");
                 printf("Digite o código: ");
                 scanf("%d", &codigo);
                 printf("\n-------------------SERVIÇO-------------------\n");
                 printf("[ 1 ] SOFTWARE\n");
                 printf("[ 2 ] HARDWARE\n");
                 printf("[ 3 ] REDE\n");
                 
                 do
                 {
                    printf("Digite uma opção válida: ");
                    scanf("%d", &tipo);
                 }while (tipo != 1 && tipo != 2 && tipo != 3);
                 
                 switch (tipo)
                 {
                     case 1:
                          printf("SERVIÇO DE SOFTWARE SELECIONADO!\n");
                          quantSoftware++;
                          break;
                          
                     case 2:
                          printf("SERVIÇO DE HARDWARE SELECIONADO!\n");
                          quantHardware++;
                          break;
                          
                     case 3:
                          printf("SERVIÇO DE REDE SELECIONADO!\n");
                          quantRede++;
                          break;
                          
                     default:
                          printf("SERVIÇO INVÁLIDO!\n");
                 }
                 
                 printf("\n-------------NÍVEL DE PRIORIDADE-------------\n");
                 printf("[ 1 ] URGENTE\n");
                 printf("[ 2 ] PRIORITÁRIO\n");
                 printf("[ 3 ] NORMAL\n");
                 
                 do
                 {
                    printf("Digite uma opção válida: ");
                    scanf("%d", &prioridade);
                 }while (prioridade != 1 && prioridade != 2 && prioridade != 3);
                 
                 switch (prioridade)
                 {
                     case 1:
                          printf("NÍVEL URGENTE SELECIONADO!\n");
                          quantUrgente++;
                          break;
                          
                     case 2:
                          printf("NÍVEL PRIORITÁRIO SELECIONADO!\n");
                          break;
                          
                     case 3:
                          printf("NÍVEL NORMAL SELECIONADO!\n");
                          break;
                          
                     default:
                          printf("NÍVEL INVÁLIDO!\n");
                 }
                 
                 quantChamados++;
                 
                 break;
                 
            case 2:
              printf("\n--------------------TOTAL--------------------\n");  
              printf("TOTAL DE CHAMADOS: %d\n", quantChamados);
              printf("TOTAL DE CHAMADOS DE SOFTWARE: %d\n", quantSoftware);
              printf("TOTAL DE CHAMADOS DE HARDWARE: %d\n", quantHardware);
              printf("TOTAL DE CHAMADOS DE REDE: %d\n", quantRede);
              printf("TOTAL DE CHAMADOS URGENTES: %d\n", quantUrgente);
              break;
              
            case 0:
                 printf("OPÇÃO DE SAÍDA SELECIONADA!\n");
                 break;
            
            default:
                 printf("OPÇÃO INVÁLIDA!\n");   
        }
    }while (opcao != 0);
	
	printf("---------------------------------------------\n");
	getchar();
	printf("PROGRAMA ENCERRADO!\n");
	printf("Pressione ENTER para sair do programa!");
	getchar();
	
	return 0;
}
