#include<stdio.h>
#include<conio.h>

int main()
{
	float A,B,C;
	printf("Entre com o valor de um numero A:\n");
	scanf("%f",&A);
	printf("Entre com o valor de outro um numero B:\n");
	scanf("%f",&B);
	printf("Entre com o valor de mais um numero C:\n");
	scanf("%f",&C);
	A=A*A;
	B=B*B;
	C=C*C;
	if (C>=1000)
	{
		return 0;
	}
	else
	printf("A: %f,B: %f,C: %f",A,B,C);
	return 0;
	
}
