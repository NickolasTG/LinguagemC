#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a[5], b[5],c[5];
	
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
		
		c[i]=a[i]-b[i];
		printf("%do elemento da matriz B: %d\n",i+1,c[i]);
		
	}
	return 0;
}
