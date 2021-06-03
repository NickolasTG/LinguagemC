#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a[20], b[30],c[50];
	
	printf("Digite 20 elementos da matriz A\n\n");
	
	for(i=0;i<20;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&a[i]);
	
	}
	
	printf("\n\nDigite 30 elementos da matriz B\n\n");
	
	for(i=0;i<30;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&b[i]);
	
	}
	system ("cls");
	
	for (i=0;i<20;i++){
		c[i]=a[i];
	}
	for (i=0;i<30;i++){
		c[i+20]=b[i];
	}
	for (i=0;i<50;i++){	
		printf("%do elemento da matriz C: %d\n",i+1,c[i]);
	}
	return 0;
}
