#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float ap,lp,aa,la,x;
	printf ("Digite a altura da parede:");
	scanf ("%f", &ap);
	printf ("Digite a largura da parede:");
	scanf ("%f", &lp);
	printf ("Digite a altura do azulejo:");
	scanf ("%f", &aa);
	printf ("Digite a largura do azulejo:");
	scanf ("%f", &la);
	x=(ap*lp)/(aa*la);
	printf ("Quantidade de azulejos necessarios para azulejar a parede: %f",x);
	getch();
	return 0; 
}
