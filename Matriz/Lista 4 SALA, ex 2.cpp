#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,a[6],b[6],fat;
	
	printf("Digite 6 elementos da matriz A\n\n");
	
	for (i=0;i<6;i++){
		
		printf("%do: ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("\n\n");
	for (i=0;i<6;i++){
		
		for (fat=1;a[i]>1;a[i]=a[i]-1){
		
			fat=fat*a[i];
			b[i]=fat;
	
		}
	printf("%do elemento da matriz B: %d \n\n",i+1,b[i]);
	}
	return 0;
}
