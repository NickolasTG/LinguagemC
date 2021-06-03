#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int i,j,a[4],b[4],c[4][2];
	
	printf("Digite 4 numeros de A.\n");
	for (i=0;i<4;i++){
		printf("\n%do elemento de A: ",i+1);
		fflush(stdin); scanf("%d",&a[i]);
	}
	system("cls");
	printf("Digite 4 numeros de B.\n");
	for (i=0;i<4;i++){
		printf("\n%do elemento de B: ",i+1);
		fflush(stdin); scanf("%d",&b[i]);
	}
	system("cls");
	for (i=0;i<4;i++){
			c[i][0]=a[i]*2;
			c[i][1]=b[i]-5;
	}
	printf("\n\nNumeros de C:\n\n");
	for (i=0;i<4;i++){
		for (j=0;j<2;j++){
		printf("\nB [%d][%d]: %d",i,j,c[i][j]);
	}
	}
	printf("\nPrimeira coluna de C (a).\n\n");
	for (i=0;i<4;i++){
		printf("\nB [%d][0]: %d",i,c[i][0]);
	}
	printf("\nSegunda coluna de C (b).\n\n");
	for (i=0;i<4;i++){
		printf("\nB [%d][1]: %d",i,c[i][1]);
	}
	return 0;
}
