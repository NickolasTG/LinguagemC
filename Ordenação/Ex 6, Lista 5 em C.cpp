#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int a[30],b[30],x=0,pesq,i,acha;
	char opcao;
	
	printf("Digite 30 numeros a serem elevados ao cubo.\n");
	for (int i=0;i<30;i++){
	 	printf("\n%do: ", i+1);
		fflush (stdin); scanf("%d",&a[i]);
		b[i]=a[i]*a[i];
	}
	system("cls");
	printf("Valores de B(A*A).\n");
	for (int i=0;i<30;i++){
	printf("%do: %d\n", i+1, b[i]);
	}
	printf("\n");
	opcao='s';
	
	while (opcao=='s' || opcao=='S'){
	
	printf("\nDigite o numero a ser pesquisado: ");
	fflush (stdin); scanf("%d",&pesq);
	printf("\n");
	i=0;
	acha=0;
	while (i<30 && acha==0){
	if (pesq==b[i]){
		acha=1;
	}else{
	printf("%d nao foi encontrado na posicao: %d.\n",pesq,i+1);
	i+=1;
	}
		if (acha==1){
		printf("\n%d foi localizado na posicao: %d\n",pesq,i+1);
		}
	}
	printf("\nDeseja continuar pesquisando? S/N.");
	fflush(stdin); opcao=getchar();
	}
	system("cls");
	return 0;
}
