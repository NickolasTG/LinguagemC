#include <stdio.h>
#include <conio.h>
/*                              || \\         */
int somatorio(int *a, int *soma){
	int i;
	for (i=0;i<=*a;++i){
		*soma+=i;
	}
	printf("na sub rotina: %d\n",*soma);
}
int main (){
	int n, t=0;
	printf("digite o numero:");
	scanf("%d",&n);
	somatorio(&n, &t);
	printf("\nna main: %d",t);
	return 0;
}
