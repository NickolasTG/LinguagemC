#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float nr_coelhos,custo;
	printf ("Digite o Numero de Coelhos:");
	scanf ("%f", &nr_coelhos);
	custo=(nr_coelhos*0.70)/18+10;
	printf("Custo: %f",custo);
	getch();
	return 0;
}
