#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a[8], b[8];
	
	printf("Digite 8 elementos da matriz A\n\n");
	
	for(i=0;i<8;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&a[i]);
	
	}
	system ("cls");
	
	for (i=0;i<8;i++){
		
		b[i]=a[i]*a[i];
		printf("%do elemento da matriz B: %d\n",i+1,b[i]);
		
	}
	return 0;
}
