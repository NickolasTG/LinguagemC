#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int vet[12],x=0;
	
	printf("Digite 12 numeros a serem ordenados\nem ordem decrescente.\n");
	for (int i=0;i<12;i++){
	 	printf("\n%do: ", i+1);
		fflush (stdin); scanf("%d",&vet[i]);
	}
	
	for (int i=0;i<12;i++){
	for (int j=0;j<12;j++){	
	
		if (vet[i]>vet[j]){
			
		x=vet[i];
		vet[i]=vet[j];
		vet[j]=x;
		
		}
		
	}
	}
	system("cls");
	
	printf("Valores ordenados para decrescente.\n");
	for (int i=0;i<12;i++){
	printf("%do: %d\n", i+1, vet[i]);
	}
	return 0;
}
