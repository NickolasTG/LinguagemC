#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B,C;
	A=0;
	B=0;
	C=0;
	printf("Entre com um numero inteiro positivo A:");
	scanf("%d",&A);
	printf("Entre com outro numero inteiro positivo B:");
	scanf("%d",&B);
	printf("Entre com mais um numero inteiro positivo C:");
	scanf("%d",&C);
	if (A<0 || B<0 || C<0)
	{
		printf("Um ou mais dos valores digitados sao negativos");
	}
	else if (A==B && A<C)
	{
	    printf("A e B sao iguais e menor:%d",A);
	}
	else if (B==C && B<A)
	{
		printf("B e C sao iguais e menor:%d",B);
	}
	else if (A==C && A<B)
	{
		printf ("A e C sao iguais e menor:%d",A);
	}
	else if (A<B && A<C)
	{
		printf("O valor A:%d",A);
	}
		else if (B<A && B<C)
	{
		printf("O valor B:%d",B);
	}
		else if (C<B && C<A)
	{
		printf("O valor C:%d",C);
	}
    else 
    printf("Todos os valores digitados sao iguais:%d",A);
    getch();
    return 0;
}
