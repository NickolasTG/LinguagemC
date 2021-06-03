#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
/*                              || \\         */
int cadastro();
int classificacao();
int correcao();
int pesquisa();
int listaapro();
int listarepro();

	struct aluno
	{
	char nome[90];
	int nota1, nota2;
	float media;
	}; struct aluno a[20];
	
	int acha;
	char pesq[90];
int main(){
	int resp=0;
	
	while(resp<7){
		printf("Menu\n\n\n1- Cadastro de aluno\n2- Classificar alunos\n3- Correcao de notas erradas\n4- Pesquisa por nome\n5- Lista de aprovados\n6- Lista de reprovados\n7- Sair\n\nSua escolha:");
		scanf("%d",&resp);
		switch(resp){
			case 1: cadastro(); break;
			case 2: classificacao(); break;
			case 3: correcao(); break;
			case 4: pesquisa(); break;
			case 5: listaapro(); break;
			case 6: listarepro(); break;
		}
	}
	return 0;
}
int cadastro(){
	system("cls");
	printf("Area de Cadastro\n\n");
	for (int i=0;i<20;++i){	
	printf("Digite o nome do %do aluno: ",i+1);
	fflush (stdin); fgets(a[i].nome,90,stdin);
	printf("Digite a primeira nota do mesmo: ");
	scanf("%d",&a[i].nota1);
	printf("Digite a segunda nota do mesmo: ");
	scanf("%d",&a[i].nota2);
	a[i].media=a[i].nota1+a[i].nota2;
	a[i].media=a[i].media/2;
	system("cls");
	}
}
int classificacao(){
	system("cls");
	printf("Classificacao alfabetica:\n\n");
	char aux[90];
			for (int i=0;i<20;++i){
				for (int j=i+1;j<21;++j){
					if (strcmp(a[i].nome,a[j].nome)>0){
						strcpy(aux,a[i].nome);
						strcpy(a[i].nome,a[j].nome);
						strcpy(a[j].nome,aux);
					}
				}
			}
			for (int i=0;i<20;++i){
			printf("%do Aluno Cadastrado: %s\n\n", i+1,a[i].nome);
			}
			system("pause");
			system("cls");
}
int correcao(){
	int mod;
	system("cls");
	printf("Sistema de correção, por favor, digite o nome do aluno que deseja corrigir.\n\n");
	fflush(stdin); fgets(pesq,90,stdin);
			int i=0;
			int acha=0;
			while (i<20 && acha==0){
				if (strcmp(a[i].nome,pesq)==0)
				acha=1;
				else
				i=i+1;
			if (acha==1)
			{
				printf("\nO nome: %s foi encontrado na posicao %d",a[i].nome,i+1);
				printf("\nMedia de notas: %f\n",a[i].media);
				printf("Digite o que deseja alterar: \n\n1-Nome\n2-Nota 1\n3-Nota 2\\nSua escolha: ");
				scanf("%d",&mod);
				switch (mod){
					
					case 1:
						{
							system("cls");
							printf("\nDigite o novo nome: ");
							fflush(stdin); fgets (a[i].nome,90,stdin);
							printf("\nMudanca feita.");
				system("pause");
				system ("cls");
						}
						break;
					case 2:
						{
							system("cls");
							printf("\nDigite a nova nota 1: ");
							scanf("%d",a[i].nota1);
							printf("\nMudanca feita.");	
								a[i].media=a[i].nota1+a[i].nota2;
								a[i].media=a[i].media/2;
				system("pause");
				system ("cls");
						}
						break;
					case 3:
						{
							system("cls");
							printf("\nDigite a nova nota 2: ");
							scanf("%d",a[i].nota2);
							printf("\nMudanca feita.");
								a[i].media=a[i].nota1+a[i].nota2;
								a[i].media=a[i].media/2;
				system("pause");
				system ("cls");							
						}
						default: printf("\nDesculpe, nao foi escolhido certo.\n\n");
				system("pause");
				system ("cls");
				}
			}
			else
			printf("\nNao foi encontrado.\n\n");
				system("pause");
				system ("cls");
			}
	
}
int pesquisa(){
	system("cls");
	printf("Sistema de pesquisa.\n\n");
	printf("Por favor, digite o nome do aluno que deseja pesquisar.\n\n");
	fflush(stdin); fgets(pesq,90,stdin);
			int i=0;
			acha=0;
			while (i<20 && acha==0){
				if (strcmp(a[i].nome,pesq)==0)
				acha=1;
				else
				i=i+1;
			if (acha==1)
			{
				printf("\nO nome: %s foi encontrado na posicao %d",a[i].nome,i+1);
				printf("\nMedia de notas: %f\n",a[i].media);
}
			else
			printf("\nNao foi encontrado.");
}
			system("pause");
			system("cls");
}
int listaapro(){
	system("cls");
	printf("Esta eh a lista de aprovados (criterio de avaliacao: media maior ou igual a 7).\n\n");
	for (int i=0;i<20;++i){
		if (a[i].media>=7)
			printf("Aluno: %s aprovado\n",a[i].nome);
			system("pause");
			system("cls");
	}
}
int listarepro(){
		system("cls");
	printf("Esta eh a lista de reprovados (criterio de avaliacao: media maior ou igual a 7).\n\n");
	for (int i=0;i<20;++i){
		if (a[i].media<=7)
			printf("Aluno: %s reprovado\n",a[i].nome);
			system("pause");
			system("cls");
	}
}
