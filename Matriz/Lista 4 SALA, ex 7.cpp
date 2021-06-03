#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,i2=9, a[10], b[10];
	
	printf("Digite 10 elementos da matriz A\n\n");
	
	for(i=0;i<10;i++){
		
	printf("%do: ", i+1);
	scanf("%d",&a[i]);
	
	}
	system ("cls");
	
	for (i=0;i<10;i++){
		
		b[i2]=a[i];
		i2--;
		
	}
		for (i=0;i<10;i++){
		printf("%do elemento da matriz B: %d\n",i+1,b[i]);
		}
	return 0;
}
