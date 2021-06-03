#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B;
	printf("Entre com o Valor de um numero inteiro positivo A:");
	scanf("%d",&A);
	printf("Entre com outro valor de um numero inteiro positivo B:");
	scanf("%d",&B);
    if(A<0 || B<0)
	{
	printf("Um ou mais dos valores digitados sao negativos");
	}
	else if (A>B)
	{
	printf("O valor A: %d",A);
	}
	else if (B>A)
	{
	printf("O valor B: %d",B);
	}
	else
	printf("Os numeros digitados sao iguais:%d",A);
	return 0;
}
