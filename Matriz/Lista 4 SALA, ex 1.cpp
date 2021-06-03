#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a[5], b[5];
	
	printf("Digite 5 elementos da matriz A\n\n");
	
	for(i=0;i<5;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&a[i]);
	printf("\n");
	
	}
	system ("cls");
	
	for (i=0;i<5;i++){
		
		b[i]=a[i]*3;
		printf("%do elemento da matriz B: %d\n",i+1,b[i]);
		
	}
	return 0;
}
