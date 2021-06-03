#include<stdio.h>
#include<conio.h>

int main()
{
	int ano;
	printf("digite um ano (com 4 digitos):");
	scanf("%d",&ano);
	if (ano%4==0 && (ano%100!=0 || ano%400==0))
	{
		printf("%d, bissexto",ano);
	}
	else 
	printf("%d, nao bissexto",ano);
	return 0;
}
