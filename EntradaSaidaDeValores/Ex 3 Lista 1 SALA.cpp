#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float v,a,raio;
	printf("Digite o Raio da lata:");
	scanf ("%f", &raio);
	printf("Digite a altura da lata:");
	scanf ("%f",&a);
	v=3.14159*raio*raio*a;
	printf("Volume da lata: %f",v);
	getch();
	return 0;
}
