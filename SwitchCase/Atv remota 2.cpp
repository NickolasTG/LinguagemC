#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
    int main()
{
    char  a;
    printf("Digite a Opcao de pagamento:\n\n");
    printf("c-Cartao\n\n");
    printf("b-Boleto\n\n");
    printf("d-Debito\n\n");
    printf("Sua opcao:");
    scanf("%c", &a);
    switch (a)
{
    case 'c': system ("cls"); printf("O pagamento sera no cartao\n"); break;
    case 'b': system ("cls"); printf("O pagamento sera no boleto\n"); break;
    case 'd': system ("cls"); printf("O pagamento sera no debito\n"); break;
    default: system ("cls"); printf("Opcao invalida\n");
}
    return 0;
}
