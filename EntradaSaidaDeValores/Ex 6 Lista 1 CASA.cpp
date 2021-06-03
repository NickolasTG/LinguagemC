#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	
	float r,a,c;
	printf ("Digite o valor do Raio:");
	scanf ("%f",&r);
	a=3.14*(r*r);
	c=2*3.14*r;
    printf ("Area do circulo: %f, Comprimento: %f",a,c);
    getch();
    return 0;
}
