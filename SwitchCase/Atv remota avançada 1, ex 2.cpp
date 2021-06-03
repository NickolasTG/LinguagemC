#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float n;
	printf("Digite o valor da pressao da caldeira (0.00): ");
	scanf("%f",&n);
	int i;
	i=n*100;
	switch (i){
		case 1 ... 332:
		printf("Pressao baixa");
		break;
		case 333 ... 666:
		printf("Pressao media");
		break;
		case 667 ... 999:
	    printf("PERIGO: Pressao alta");
		break;
		default: printf("Invalido");
		}
		return 0;
	}
