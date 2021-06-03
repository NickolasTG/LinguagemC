#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,res;
	char E;
	printf("---------------------\n");
	printf("*Digite uma tecla*\n");
	printf("    (+,-,*,/) \n");
	printf("---------------------\n");
	printf("('s' caso quiser sair)\n");
	printf("---------------------\n    sua escolha:");
	scanf("%c",&E);
	switch (E){
		case '+': system ("cls");
		printf("Digite dois numeros para serem somados\n");
		printf("---------------------\n");
		printf("Numero 1:\n");
		scanf ("%d",&n1);
		printf("Numero 2:\n\n");
		scanf ("%d",&n2);
		res=n1+n2;
		printf("O resultado: %d", res);
		break;
		
		case '-': system ("cls");
		printf("Digite dois numeros, o primeiro sera subtraido do segundo\n");
		printf("---------------------\n");
		printf("Numero 1:\n");
		scanf ("%d",&n1);
		printf("Numero 2:\n\n");
		scanf ("%d",&n2);
		res=n1-n2;
		printf("O resultado: %d", res);
 	    break;
		
		case '*': system ("cls");
		printf("Digite dois numeros para serem multiplicados\n");
		printf("---------------------\n");
		printf("Numero 1:\n");
		scanf ("%d",&n1);
		printf("Numero 2:\n\n");
		scanf ("%d",&n2);
		res=n1*n2;
		printf("O resultado: %d", res);
		break;
		
		case '/': system ("cls");
		printf("Digite dois numeros para serem divididos (O primeiro divide o segundo)\n");
		printf("---------------------\n");
		printf("Numero 1:\n");
		scanf ("%d",&n1);
		printf("Numero 2:\n\n");
		scanf ("%d",&n2);
		res=n1/n2;
		printf("O resultado: %d", res);
		break;
		case 's': system ("cls");
		printf("Fechando o programa ...");
		return 0;
	}
	return 0;
}
