#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int tam=40,i,j,acha;
	float a[40],pesq,x=0;
	char opcao;
	// Pedir A.
	printf("Digite 40 notas.\n");
	for (i=0;i<tam;i++){
		printf("\n%do: ",i+1);
		fflush(stdin); scanf("%f",&a[i]);
	}
	// A na crescente.
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			if (a[i]<a[j]){
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
		}
	}
	// Exibir A.
		system("cls");
	printf("Notas em ordem crescente.\n\n");
		for (i=0;i<tam;i++){
		printf("%d: %.2f\n",i+1,a[i]);
	}
	// Pesquisa.
	printf("\n");
	opcao='s';
	while (opcao == 's' || opcao == 'S'){
	printf("\n\nDigite o notas a ser pesquisado: ");
	fflush(stdin); scanf("%f",&pesq);
	printf("\n");
	acha=0;
	i=0;
	while (i<tam && acha==0){
		if (pesq == a[i]){
			acha=1;
		}else printf("%.2f nao foi encontrado na posicao: %d\n",pesq,i+1);
		if (acha == 1){
		printf("\n%.2f foi encontrado na posicao: %d\n",pesq,i+1);
		}else i+=1;
	}
		printf("\nDeseja continuar pesquisando? S/N: ");
		fflush(stdin); opcao = getchar();
	}
	system("cls");
	return 0;
}
