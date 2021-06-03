#include<stdio.h>
int main (){
	int n,m,t,resultado=1;
	printf("Digite o valor a ser potenciado:");
	scanf("%d",&n);
	printf("Digite o expoente:");
	scanf("%d",&m);
	t=m;
	 while (m>0){
	resultado=resultado*n;
	m--;
	}
	printf("O numero %d elevado a %d, resulta em: %d",n,t,resultado);
	return 0;
}
