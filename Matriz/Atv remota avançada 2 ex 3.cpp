#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
	
	int vet[100],i,menor=vet[0],maior=vet[0],faixa1=0,faixa2=0,
	faixa3=0,faixa4=0,faixa5=0,totalf1=0,totalf2=0,totalf3=0,totalf4=0,totalp=0,totali=0,
	totalf5=0;
	char opcao='a';
	float total=0;
	// Leitura dos numeros digitados
	do{
	system ("cls");
	printf("Digite valores, quando quiser parar de digitar valores aperte 0:\n");
for (i=0;i<100;i++){
	
		printf("\nEste eh o %do numero, voce da o valor de: ",i+1);
		scanf("%d",&vet[i]);
		//
		//
		if (vet[i]==0){break;}//pausa o laço apertando 0.
		//
		//
		total += vet[i];     //média. 
		//
		if( i == 0  )
		maior = vet[i];
        if( menor > vet[i] )
		menor = vet[i];           //maior menor.
        if( maior < vet[i] )
		maior = vet[i]; 
        //
        if (vet[i]<0){
		totalf1+=vet[i];
       	faixa1+=1;
		}
		if (vet[i]>0 && vet[i] <15){
		totalf2+=vet[i];
       	faixa2+=1;
		}
		if (vet[i]>=15 && vet[i] <100){
		totalf3+=vet[i];
       	faixa3+=1;
		}
		if (vet[i]>=1000){
		totalf4+=vet[i];
       	faixa4+=1;
		}
		if (vet[i]>=101 && vet[i] <1000){
		totalf5+=vet[i];
       	faixa5+=1;
		}
		if (vet[i]%2==0)
		totalp+=1;
		if (vet[i]%2!=0)
		totali+=1;
		//
}

	system("cls");
	
	printf("A) Calculo da media aritmetica dos mesmos\n");
	
	//Calculo da media aritmetica: total += vet[i]; media=total/i; 
	// Assim, o total é a soma de todos os numeros digitados, e a                 A)
	//media é o total dividido pela quantidade de numero digitados, o contador.
	
	printf("\nEsta eh a media dos numeros digitados: %.2f\n",total/i);
		
	
	printf("\nB) Calculo do maior e o menor dos mesmos:\n");
	
	//if( i  == 0  )                      B)
	//menor = vet[i];
	//if( menor > vet[i] )
	//menor = vet[i];                    Conta para encontrar o menor e maior.
	//if		                                 (troca de posições)
	//( maior < vet[i] )
	//maior = vet[i]; 
	
     printf("O maior valor eh %d",maior);

     printf("\nO menor valor eh %d",menor);
	
	//Verificar a qual faixa o elemento percente.              C)
	
	printf("\n\nC)\n\nOs elementos pertencentes a Faixa 1:\n");
	for (i=0;i<100;i++){
	if (vet[i]<0){
	printf("\nO elemento: %d",vet[i]);
	}
	if (vet[i]==0){
		break;
	}
	}
	
	printf("\n\nOs elementos pertencentes a Faixa 2:\n");
	for (i=0;i<100;i++){
	if (vet[i]==0){
		break;
	}
	if (vet[i]>=0 && vet[i]<15){
	printf("\nO elemento: %d",vet[i]);
	}
	}
	
	printf("\n\nOs elementos pertencentes a Faixa 3:\n");
	for (i=0;i<100;i++){
	if (vet[i]>=15 && vet[i]<100){
	printf("\nO elemento: %d",vet[i]);
	}
	if (vet[i]==0){
		break;
	}
	}
	
	printf("\n\nOs elementos pertencentes a Faixa 4:\n");
	for (i=0;i<100;i++){
	if (vet[i]>=1000){
	printf("\nO elemento: %d",vet[i]);
	}
	if (vet[i]==0){
		break;
	}
	}
	
    printf("\n\nOs elementos pertencentes a Faixa 5:\n");
	for (i=0;i<100;i++){
	if (vet[i]>=101 && vet[i]<1000){
	printf("\nO elemento: %d",vet[i]);
	}
	if (vet[i]==0){
		break;
	}
	}
	
	//O total de elementos por faixa, e o total da faixa.       D)
	
	printf("\n\nD)/1: Quantidade de elementos de cada faixa:");
	
	printf("\n\nA quantidade de elementos dentro da faixa 1 eh: %d\n",faixa1);
	printf("A quantidade de elementos dentro da faixa 2 eh: %d\n",faixa2);
	printf("A quantidade de elementos dentro da faixa 3 eh: %d\n",faixa3);
	printf("A quantidade de elementos dentro da faixa 4 eh: %d\n",faixa4);
	printf("A quantidade de elementos dentro da faixa 5 eh: %d\n",faixa5);
	
	printf("\nD)/2: Total de cada faixa:");
	
	printf("\n\nO total da faixa 1 eh: %d",totalf1);
	printf("\nO total da faixa 2 eh: %d",totalf2);
	printf("\nO total da faixa 3 eh: %d",totalf3);
	printf("\nO total da faixa 4 eh: %d",totalf4);
	printf("\nO total da faixa 5 eh: %d",totalf5);
	
    //Verificar quais são pares e ímpares    E)
	
	printf("\n\nE)\n\nOs elementos Pares:\n");
	for (i=0;i<100;i++){
	if (vet[i]==0){
	break;
	}
	if (vet[i]%2==0){
	printf("\nO elemento: %d",vet[i]);
	}
	}
	
	printf("\n\nOs elementos Impares:\n");
	for (i=0;i<100;i++){
	if (vet[i]%2!=0){
	printf("\nO elemento: %d",vet[i]);
	}
	if (vet[i]==0){
	break;
	}
	}
	
	//Total de pares e total de ímpares.     F)
	
	printf("\n\nF)\n\nTotal de elementos Pares:%d\n",totalp);
	
	printf("\n\nTotal de elementos Impares:%d\n",totali);
	
	printf("\nSuba o programa para ver as primeira contas.\n\n");
	
	printf("Deseja sair? (s/n):\n\n");
	scanf("%s",&opcao);
	} while (opcao=='n' || opcao=='N');
	return 0;
}
