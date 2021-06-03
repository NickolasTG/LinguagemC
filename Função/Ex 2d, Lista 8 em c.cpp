#include <stdio.h>
#include <conio.h>
#include <math.h>
/*                              || \\         */
int pot, n;
int potencia(int res){
	res=pow(n,pot);
	printf("na sub rotina: %d\n",res);
}

int main (){
	printf("digite o numero:");
	scanf("%d",&n);
	printf("digite a potencia:");
	scanf("%d",&pot);
	potencia(n);
	printf("\nna main: %d",n);
	return 0;
}
