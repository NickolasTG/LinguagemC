#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

	int tempo;
	float valor, taxa;

int prestacao(float prest){
	
	prest=valor*(taxa/100)*tempo;
	printf("na sub rotina: %.2f\n",prest);
}

int main (){
	printf("\ndigite o valor da prestação:");
	scanf("%f",&valor);
	printf("\ndigite a taxa de juros:");
	scanf("%f",&taxa);
	printf("\ndigite o tempo:");
	scanf("%d",&tempo);
	prestacao(valor);
	printf("\nna main: %.2f",valor);
	return 0;
}
