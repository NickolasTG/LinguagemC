#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int tam=12,a[12],b[12],c[12],x,i,j;
	
	printf("Digite 12 elementos de A.\n\n");
	// Entrada A.
	for (i=0;i<tam;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
	}
	system ("cls");
	// Crescente de A.
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (a[i]<a[j]){
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
		}
	}
	printf("Digite 12 elementos de B.\n\n");
	// Entrada B.
	for (i=0;i<tam;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&b[i]);
	}
	system ("cls");
	// Crescente de B.
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (b[i]<b[j]){
			x=b[i];
			b[i]=b[j];
			b[j]=x;
			}
		}
	}
	// Calculo de C.
	for (i=0;i<tam;i++){
		c[i]=a[i]+b[i];
	}
	// Crescente de C.
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (c[i]<c[j]){
			x=c[i];
			c[i]=c[j];
			c[j]=x;
			}
		}
	}
	// Exibição.
	printf("Numeros de C (A+B) na crescente.\n\n");
	for (i=0;i<tam;i++){
		printf("%do: %d\n",i+1,c[i]);
	}
	return 0;
}
