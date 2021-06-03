#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a[5], b[5],c[10];
	
	printf("Digite 5 elementos da matriz A\n\n");
	
	for(i=0;i<5;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&a[i]);
	
	}
	
	printf("\n\nDigite 5 elementos da matriz B\n\n");
	
	for(i=0;i<5;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&b[i]);
	
	}
	system ("cls");
	
	for (i=0;i<5;i++){
		c[i]=a[i];
	}
	for (i=0;i<5;i++){
		c[i+5]=b[i];
	}
	for (i=0;i<10;i++){	
		printf("%do elemento da matriz C: %d\n",i+1,c[i]);
	}
	return 0;
}
