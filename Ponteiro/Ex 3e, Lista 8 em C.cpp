#include<stdio.h>
#include<stdlib.h>
	
int a[12],b[12],x,i,j;
	
entradaacres(){
	printf("Digite 12 elementos de A.\n\n");
	// Entrada A.
	for (i=0;i<12;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
	}
	system ("cls");
	// Crescente de A.
	for (i=0;i<12;i++){
		for (j=0;j<12;j++){
			if (a[i]<a[j]){
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
		}
	}
}	
entradabcres(){
	printf("Digite 12 elementos de B.\n\n");
	// Entrada B.
	for (i=0;i<12;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&b[i]);
	}
	system ("cls");
	// Crescente de B.
	for (i=0;i<12;i++){
		for (j=0;j<12;j++){
			if (b[i]<b[j]){
			x=b[i];
			b[i]=b[j];
			b[j]=x;
			}
		}
	}
}
juncaoccres(int tam, int *c){
		// Calculo de C.
	for (i=0;i<12;i++){
		c[i]=a[i]+b[i];
	}
	// Crescente de C.
	for (i=0;i<12;i++){
		for (j=0;j<12;j++){
			if (c[i]<c[j]){
			x=c[i];
			c[i]=c[j];
			c[j]=x;
			}
		}
	}
}
exibirc(int tam, int *a){
		// Exibição.
		juncaoccres(60, a);
	printf("Numeros de C (A+B) na crescente.\n\n");
	for (i=0;i<12;i++){
		printf("%do: %d\n",i+1,a[i]);
	}
}
int main(){
	int a[12];
	entradaacres();
	entradabcres();
	juncaoccres(12, a);
	exibirc(12, a);
	return 0;
}
