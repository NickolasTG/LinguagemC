#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float imc,massa,h;
	printf ("Entre com a massa(KG): ");
	scanf ("%f",&massa);
	printf ("Entre com a altura(M): ");
	scanf ("%f",&h);
	imc=massa/(h*h);
	printf ("Imc:%f",imc);
	getch();
	return 0;
}
