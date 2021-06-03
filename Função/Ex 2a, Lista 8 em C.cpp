#include <stdio.h>
#include <conio.h>
/*                              || \\         */
int i;
int somatorio(int a){
	int i, soma=0;
	for (i=0;i<=a;++i){
		soma+=i;
	}
	printf("na sub rotina: %d\n",soma);
}

int main (){
	int n;
	printf("digite o numero:");
	scanf("%d",&n);
	somatorio(n);
	printf("\nna main: %d",n);
	return 0;
}
