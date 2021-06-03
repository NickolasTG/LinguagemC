#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float p1,p2,p3,p4,p5,n1,n2,n3,n4,n5,raiz1,raiz2,raiz3,raiz4,raiz5;
	int o;
	int fat1,fat2,fat3,fat4,fat5;
	printf("Digite 5 numeros, depois, escolha uma opereracao:\n");
	printf("Primeiro numero:");
	scanf("%f",&n1);
	printf("Segundo numero:");
	scanf("%f",&n2);
	printf("Terceiro numero:");
	scanf("%f",&n3);
	printf("Quarto numero:");
	scanf("%f",&n4);
	printf("Quinto numero:");
	scanf("%f",&n5);
	system ("cls");
	printf("---------------------------\n");
	printf("1-Calculo da raiz quadrada.\n");
	printf("2-Calculo da potencia de 3.\n");
	printf("3-Calculo do fatorial.\n");
	printf("Sua opcao:");
	scanf("%d",&o);
	switch (o)
	{
		case 1: 
	    system ("cls");
		raiz1=sqrt (n1);
		raiz2=sqrt (n2);
		raiz3=sqrt (n3);
		raiz4=sqrt (n4);
		raiz5=sqrt (n5);
		printf("Raizes dos numeros digitados...\n");
		printf("Primeiro:%f\n",raiz1);
		printf("Segundo:%f\n",raiz2);
		printf("Terceiro:%f\n",raiz3);
		printf("Quarto:%f\n",raiz4);
		printf("Quinto:%f",raiz5);
		break;
		case 2: 
		system ("cls");
		p1=n1*(n1*n1);
		p2=n2*(n2*n2);
		p3=n3*(n3*n3);
		p4=n4*(n4*n4);
		p5=n5*(n5*n5);
		printf("Potencias de 3 dos numeros digitados...\n");
		printf("Primeiro:%f\n",p1);
		printf("Segundo:%f\n",p2);
		printf("Terceiro:%f\n",p3);
		printf("Quarto:%f\n",p4);
		printf("Quinto:%f",p5);
		break;
		case 3:
		system ("cls");	
		for (fat1 = 1;n1>1;n1 = n1-1)
		fat1=fat1*n1;
		for (fat2 = 1;n2>1;n2 = n2-1)
		fat2=fat2*n2;
		for (fat3 = 1;n3>1;n3 = n3-1)
		fat3=fat3*n3;
		for (fat4 = 1;n4>1;n4 = n4-1)
		fat4=fat4*n4;
		for (fat5 = 1;n5>1;n5 = n5-1)
		fat5=fat5*n5;
		printf("Fatorial dos numeros digitados...\n");
		printf("Primeiro:%d\n",fat1);
		printf("Segundo:%d\n",fat2);
		printf("Terceiro:%d\n",fat3);
		printf("Quarto:%d\n",fat4);
		printf("Quinto:%d",fat5);
	    break;
		default: system ("cls"); printf("Opcao invalida...");
	}
	return 0;
}
