#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int leituraa();
int leiturab();
int juncao();
int exibir();

int i, a[30], b[30], c[60];

int main(){
	leituraa();
	leiturab();
	juncao();
	exibir();
}
leituraa(){
// Pedir e ler A.
	system("cls");
	printf("Digite 30 elementos de A\n\n");
	for (i=0;i<30;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&a[i]);
	}
}
leiturab(){
	system("cls");
	// Pedir e ler B.
	printf("Digite 30 elementos de B\n\n");
	for (i=0;i<30;i++){
		printf("%do: ",i+1);
		fflush (stdin); scanf("%d",&b[i]);
	}
}
juncao(){
		for (i=0;i<30;++i){
		c[i]=a[i];
		}
		for (i=0;i<30;++i){
		c[i+30]=b[i];
		}
}
exibir(){
	system("cls");
	for (i=0;i<60;++i)
	printf("%do valor de C: %d\n", i+1, c[i]);
}
