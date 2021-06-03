#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int i, a[30], b[30];

int leituraa(){
// Pedir e ler A.
	system("cls");
	printf("Digite 30 elementos de A\n\n");
	for (i=0;i<30;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
	}
	return 0;
}

int leiturab(){
	system("cls");
	// Pedir e ler B.
	printf("Digite 30 elementos de B\n\n");
	for (i=0;i<30;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&b[i]);
	}
	return 0;
}

int juncao(int tam, int *c){
		for (i=0;i<30;++i){
		c[i]=a[i];
		}
		for (i=0;i<30;++i){
		c[i+30]=b[i];
		}
		return 0;
}
int exibir(int tam, int *a){
	juncao(60, a);
	system("cls");
	for (i=0;i<tam;++i){
	printf("%do valor de C: %d\n", i+1,a[i]);
	}
	return 0;
}
int main(){
	int a[60];
	leituraa();
	leiturab();
	juncao(60, a);
	exibir(60, a);
	return 0;
}
