#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	
	//Declaração de variáveis 
	
	int i,cont=0,por;
	float salario[100],aum,novosal[100];
	char fun[100][14], opcao;
	
	//Pedir e armazenar informações.
	
for (i=0;i<100;i++){
	cont++;
	system ("cls");
	printf("\nDigte o nome do %do funcionario, maximo 14 letras (apenas primeiro nome): ",i+1);
	 scanf("%s",fun[i]);
	 
	printf("\nDigite o salario do funcionario %s: R$ ",fun[i]);
	 scanf("%f",&salario[i]);
	
	printf("\n\nQuer adicionar mais um funcionario? (S/N): ");
	 scanf("%s",&opcao);
	 
		if (opcao=='n' || opcao=='N'){
		break;
		}
}
	system("cls");
	
	//		Calculo do novo salário
	// 		E porcentagem de aumento.
	
	for (i=0;i<cont;i++){
		
		if (salario[i]>=0 && salario[i]<=400){
		novosal[i]=salario[i]*1.15;
		aum=salario[i]*0.15;
		por=15;
		}
	
		if (salario[i]>=401 && salario[i]<=700){
		novosal[i]=salario[i]*1.12;
		aum=salario[i]*0.12;
		por=12;
		}
	
		if (salario[i]>=701 && salario[i]<=1000){
		novosal[i]=salario[i]*1.10;
		aum=salario[i]*0.10;
		por=10;
		}	
		
		if (salario[i]>=1001 && salario[i]<=1800){
		novosal[i]=salario[i]*1.07;
		aum=salario[i]*0.07;
		por=7;
		}
		
		if (salario[i]>=1800 && salario[i]<=2500){
		novosal[i]=salario[i]*1.04;
		aum=salario[i]*0.04;
		por=4;
		}
		
		if (salario[i]>2500){
		novosal[i]=salario[i];
		aum=0;
		por=0;
		}
		
	//		Exibição das novas informações.
		
		printf("\nFuncionario: %s\n",fun[i]);
		printf("Aumento de %d por cento: R$ %.2f\n",por,aum);
		printf("Salario atual: R$ %.2f\n",salario[i]);
		printf("novo salario: R$ %.2f\n",novosal[i]);
	}
		printf("Suba para ver os primeiros funcionarios.");
	return 0;
}
