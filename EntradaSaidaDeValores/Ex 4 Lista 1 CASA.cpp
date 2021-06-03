#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float area,p,a,b;
	printf ("Entre com a medida dos lados de um retangulo:");
	scanf ("%f%f",&a,&b);
	area=a*b;
	p=(2*a)+(2*b);
	printf ("Area do retangulo: %f, Perimetro do retangulo: %f",area,p);
	getch();
	return 0;
}
