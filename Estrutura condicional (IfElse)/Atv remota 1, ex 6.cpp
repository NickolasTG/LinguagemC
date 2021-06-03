#include <stdio.h>
#include <conio.h>

int main()
{ 
    int A,B,C;
    printf("digite um numero positivo do primeiro lado de um triangulo:");
    scanf("%d",&A);
    printf("digite um numero positivo do segundo lado de um triangulo:");
    scanf("%d",&B);
    printf("digite um numero positivo do terceiro lado de um triangulo:");
    scanf("%d",&C);
    if (A<=0 || B<=0 || C<=0)
    {
    	printf("Numeros invalidos");
    	return 0;
	}
    else if (A==B || A==C || B==C)
    {
    	printf("O triangulo nao e retangulo");
    	return 0;
	}
    else if (A>B && A>C)
    {
    	if (A*A==B*B+C*C)
    	printf("O triangulo e retangulo");
    	else
    	printf("O triangulo nao e retangulo");
    	return 0;
	}
	else if (B>A && B>C)
	{
		if (B*B==C*C+A*A)
    	printf("O triangulo e retangulo");
    	else
    	printf("O triangulo nao e retangulo");
    	return 0;
	}
	else if (C>A && C>B)
	{
		if (C*C==B*B+A*A)
    	printf("O triangulo e retangulo");
    	else
    	printf("O triangulo nao e retangulo");
    	return 0;
	}
	else
	printf("O triangulo nao e retangulo");
	return 0;
}
