#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int i,j,a[7],b[7],c[7][2];
	
	printf("Digite 7 numeros de A.\n");
	for (i=0;i<7;i++){
		printf("\n%do elemento de A: ",i+1);
		fflush(stdin); scanf("%d",&a[i]);
	}
	system("cls");
	printf("Digite 7 numeros de B.\n");
	for (i=0;i<7;i++){
		printf("\n%do elemento de B: ",i+1);
		fflush(stdin); scanf("%d",&b[i]);
	}
	system("cls");
	printf("\n\nNumeros de C:\n\n");
	for (i=0;i<7;i++){
		for (j=0;j<2;j++){
			c[i][0]=a[i];
			c[i][1]=b[i];
			printf("\nB [%d][%d]: %d",i,j,c[i][j]);
		}
	}
	printf("\n\nPrimeira coluna de C:\n\n");
	for (i=0;i<7;i++){
		printf("\nB [%d][0]: %d",i,c[i][0]);
	}
	printf("\n\nSegunda coluna de C:\n\n");
	for (i=0;i<7;i++){
		printf("\nB [%d][1]: %d",i,c[i][1]);
	}
	return 0;
}
