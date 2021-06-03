#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int a[20],b[20],tam=20,x=0,i,j,pesq,acha;
	char opcao;
	// Pedir A.
	printf("Digite 20 elementos de A.\n");
	for (i=0;i<tam;i++){
		printf("\n%do: ",i+1);
		fflush(stdin); scanf("%d",&a[i]);
		b[i]=a[i]+2;
	}
	// B na crescente.
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (b[i]<b[j]){
			x=b[i];
			b[i]=b[j];
			b[j]=x;
			}
		}
	}
		system("cls");
	printf("Elementos de B(A+2) em ordem crescente.\n\n");
		for (i=0;i<tam;i++){
		printf("%d: %d\n",i+1,b[i]);
	}
	// Exibir B.
	// pesquisa.
	printf("\n");
	opcao='s';
	while (opcao == 's' || opcao == 'S'){
	printf("\n\nDigite o elemento a ser pesquisado: ");
	fflush(stdin); scanf("%d",&pesq);
	printf("\n");
	acha=0;
	i=0;
	while (i<tam && acha==0){
		if (pesq == b[i]){
			acha=1;
		}else printf("%d nao foi encontrado na posicao: %d\n",pesq,i+1);
		if (acha == 1){
		printf("\n%d foi encontrado na posicao: %d\n",pesq,i+1);
		}else i+=1;
	}
		printf("\nDeseja continuar pesquisando? S/N: ");
		fflush(stdin); opcao = getchar();
	}
	system("cls");
	return 0;
}
