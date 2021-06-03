#include <stdio.h>
#include <conio.h>

int main()
{
	float saldo,tarifa;
	printf("Digite seu saldo R$:");
	scanf("%f",&saldo);
	printf("Digite o valor da tarifa R$:");
	scanf("%f",&tarifa);
	if (saldo>=1000.00 && saldo<3000.00)
	{
		tarifa=tarifa-(20*tarifa/100);
		printf("Tarifa reduzida em 20 por cento, tarifa nova:%f",tarifa);
	}
	else if (saldo>=3000.00 && saldo<5000.00)
	{
		tarifa=tarifa-(50*tarifa/100);
	    printf("Tarifa reduzida em 50 por cento, tarifa nova:%f",tarifa);
	}
	else if (saldo>=5000.00)
	{
		tarifa=tarifa-(75*tarifa/100);
		printf("Tarifa reduzida em 75 por cento, tarifa nova:%f",tarifa);
	}
	else
	printf("Tarifa Maxima:");
	return 0;
}
