#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float f,c;
	printf ("Digite o valor em Fahrenheit: ");
	scanf("%f", &f);
	c=(((f-32)*5)/9);
	printf ("Valor convertido para Celcius: %f", c);
	getch();
	return 0; 
}

