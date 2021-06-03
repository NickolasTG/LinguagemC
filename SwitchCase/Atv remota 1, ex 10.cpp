#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{ 
    int opcao;
    char e;
    printf("----------------------------------\n");
    printf("           Banco IFSP           \n"); 
    printf("----------------------------------\n");
    printf("           1. deposito            \n");
    printf("           2. saque              \n ");
    printf("          3. extrato            \n ");
    printf("          4. transferencia       \n");
    printf("----------------------------------\n");
    printf("           5 = encerrar           \n ");
    printf("---------------------------------\n");
    printf("           Sua escolha:");
    scanf("%d",&opcao);
	switch (opcao)
    {
    	case 1: system("cls"); printf("Operacao de deposito"); break;
    	case 2: system("cls"); printf("Operacao de saque"); break;
    	case 3: system("cls"); printf("Operacao de extrato"); break;
    	case 4: system("cls"); printf("Operacao de transeferencia"); break;
    	case 5: system("cls"); printf("Encerrando operacoes..."); break;
    	default: system("cls"); printf("Opcao invalida");
    }
    printf("\a");
    return 0;
}
