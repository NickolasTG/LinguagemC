#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int i,n;
	for (i=15;i<200;i++){
		n=i*i;
		printf("O quadrado de %d: %d \n",i,n);
	}
	printf("-----------------------------------------------------\n");
	printf("Os primeiros quadrados se encontram no topo da lista\n");
	printf("-----------------------------------------------------\n");
	return 0;
}
