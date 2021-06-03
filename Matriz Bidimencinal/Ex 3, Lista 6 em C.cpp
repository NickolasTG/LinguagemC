#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int i,j,a[10],b[10][3],fat[10],fat2[10];
	// Ler A.
	printf("Digite 10 valores de A.\n\n");
	for (i=0;i<10;i++){
	printf("Este eh o %do: ",i+1);
	scanf("%d",&a[i]);
	printf("\n");
	fat2[i]=a[i];
	}
	system ("cls");
	// Fatorial
	for (i=0;i<10;i++){
		for (fat[i]=1;fat2[i]>1;fat2[i]--){
			fat[i]*=fat2[i];
		}
	}
	//
	for (i=0;i<10;i++){
		for (j=0;j<3;j++){
			b[i][0]=a[i]+5;
			b[i][1]=fat[i];
			b[i][2]=a[i]*a[i];
		}
	}
	printf("\n\nNumeros de B:\n\n");
	for (i=0;i<10;i++){
		for (j=0;j<3;j++){
		printf("\nB [%d][%d]: %d",i,j,b[i][j]);
	}
	}
	printf("\n\nPrimeira coluna de B:\n\n");
	for (i=0;i<10;i++){
		printf("\nB [%d][0]: %d",i,b[i][0]);
	}
	printf("\n\nSegunda coluna de B:\n\n");
	for (i=0;i<10;i++){
		printf("\nB [%d][1]: %d",i,b[i][1]);
	}
		printf("\n\nTerceira coluna de B:\n\n");
	for (i=0;i<10;i++){
		printf("\nB [%d][2]: %d",i,b[i][2]);
	}
	return 0;
}
