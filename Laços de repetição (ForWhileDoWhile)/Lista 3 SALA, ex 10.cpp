#include<stdio.h>
int main (){
	int i,soma;
	for (i=1;i<=500;i++){
		if (i%2==0)
		soma=soma+i;
	}
	printf("o resultado da soma: %d",soma);
	return 0;
}
