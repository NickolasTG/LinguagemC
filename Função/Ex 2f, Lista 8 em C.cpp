#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fibo(int a){
	int i,soma,ant1=1,ant2=1, res;
	printf("na sub rotina: \n");
	for (i=0;i<a;++i){
	    soma=ant1+ant2;                    
        ant1=ant2;                           
        ant2=soma;
		printf("%d\n", soma);	
	}
}
int main(){
	int n;
	printf("Digite a quantidade de termos que deseja: ");
	scanf("%d",&n);
	fibo(n);
	printf("main: %d\n", n);
	return 0;
}
