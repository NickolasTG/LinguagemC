#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,v=1,r,i;
	do{
	printf("Digite um numero:");
	scanf("%d",&n);
	if (n>50 || n<1)
	printf("\nValor invalido\n");
	}
	while (n>50 || n<1);
	do{
		printf("%d",n);
		r=n;
	for (i=1;i<=v;i++)
    {
    	printf("*3");
    	r=r*3;
    }
    printf("=%d\n",r);
    v=v+1;
	}
	while (r<250);
    return 0;
}
