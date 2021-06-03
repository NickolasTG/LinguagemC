#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	int a[8],b[8],x=0,pesq,i,acha;
	char opcao;
	
	printf("Digite 8 numeros a serem multiplicados e ordenados\nem ordem crescente.\n");
	for (int i=0;i<8;i++){
	 	printf("\n%do: ", i+1);
		fflush (stdin); scanf("%d",&a[i]);
		b[i]=(a[i])*5;
	}
	
	for (int i=0;i<8;i++){
	for (int j=0;j<8;j++){	
	
		if (b[i]<b[j]){
			
		x=b[i];
		b[i]=b[j];
		b[j]=x;
		
		}
		
	}
	}
	system("cls");
	printf("Valores ordenados de B(A*5) para Crescente.\n");
	for (int i=0;i<8;i++){
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
	while (i<8 && acha==0){
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
	system("cls");
	printf("Finalizando.");
	}
	return 0;
}
