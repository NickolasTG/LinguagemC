#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int a[20],b[30],c[50],i,j,x;
	// Pedir e ler A.
	printf("Digite 20 elementos de A\n\n");
	for (i=0;i<20;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
		c[i]=a[i];
	}
	// Pedir e ler B.
	printf("Digite 30 elementos de B\n\n");
	for (i=0;i<30;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&b[i]);
	}
	// Junção de A+B em C.
	for (i=0;i<30;i++){
		c[i+20]=b[i];
	}
	// Calculo para C na crescente.
	for (i=0;i<50;i++){
		for (j=0;j<50;j++){
			if (c[i]>c[j]){
			x=c[i];
			c[i]=c[j];
			c[j]=x;
			}
		}
	}
	// Exibir C na crescente.
	system("cls");
	printf("Elementos de C (A+B) na decrescente.\n\n");
	for (i=0;i<50;i++){
		printf("%do: %d\n",i+1,c[i]);
	}
	printf("\nOs primeiros estao la em cima.\n\n");
	return 0;
}
