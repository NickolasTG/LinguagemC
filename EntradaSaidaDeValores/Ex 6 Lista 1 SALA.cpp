#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float prestacao,valor,t,taxa;
	printf ("Digite o valor:");
	scanf ("%f", &valor);
	printf ("Digite o tempo:");
	scanf ("%f", &t);
	printf ("Digite a taxa:");
	scanf ("%f",&taxa);
	prestacao=valor+(valor*(taxa/100)*t);
	printf ("O valor da Prestacao e: %f",prestacao);
	getch();
	return 0;
}
