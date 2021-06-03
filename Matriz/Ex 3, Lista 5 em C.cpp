#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int tam=15,a[15],b[15],i,j,fat,x;
	// Pedir e armazenar.
	for (i=0;i<tam;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
		
	}
	// Cálculos.
	for (i=0;i<tam;i++){
	
		for (fat=1;a[i]>1;a[i]=a[i]-1){
			
			fat=fat*a[i];
			b[i]=fat;
		}
	}
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			
			if (b[i]<b[j]){
			x=b[i];
			b[i]=b[j];
			b[j]=x;
			}
		}
	}
	printf("Numeros em fatorial e ordenados na crescente.\n\n");
	for (i=0;i<tam;i++){
	printf("%do: %d\n",i+1,b[i]);
	}
	return 0;	
}
