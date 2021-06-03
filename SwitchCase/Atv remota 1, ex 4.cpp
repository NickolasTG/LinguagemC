#include<stdio.h>
#include<conio.h>

int main()
{
	int mes, ano;
	printf("digite o ano:\n");
	scanf("%d",&ano);
	printf("digite o mes (1 a 12):\n");
	scanf("%d",&mes);
	if (mes>=1 && mes<=12)
	{
			switch (mes)
		{
			case 1: printf("31 dias"); break;
			case 2: printf("28 ou 29 dias (caso bissexto)"); break;
			case 3: printf("31 dias"); break;
			case 4: printf("30 dias"); break;
			case 5: printf("31 dias"); break;
			case 6: printf("30 dias"); break;
			case 7: printf("31 dias"); break;
			case 8: printf("31 dias"); break;
			case 9: printf("30 dias"); break;
			case 10: printf("31 dias"); break;
			case 11: printf("30 dias"); break;
			case 12: printf("31 dias"); break;
			
		}
		return 0;
	}
	else
	printf("mes ou ano invalido");
	
	return 0;
}
