#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cod;
	
	printf("Tecle o C�digo:");
	scanf("%d",&cod);
	printf("\n");
	switch (cod){
		
		case 1: printf("Engenharia"); break;
		case 2: printf("Edifica��es"); break;
		case 3: printf("Turismo"); break;
		case 4: printf("An�lise de Sistemas"); break;
		case 5: printf("Sistemas El�tricos"); break;
		default: printf("Invalido.");
	}
	return 0;
}
