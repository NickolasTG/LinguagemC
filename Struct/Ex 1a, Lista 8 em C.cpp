#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
/*                              || \\         */
int cadastro();
int pesquisa();
int classificacao();
int alteracao();
int remocao();

	struct cad
	{
		char nome[90];
		char endereco[120];
		int idade;
		int tel;
	}; struct cad a[5];

int i, j, acha;

char pesq[90], aux[90];

int main(){
	int resp;
	
	resp=0;
	
	while (resp<6){
		printf("Programa Agenda.\n\n\n1- Cadastro e registros\n2- Pesquisa de nomes\n3- Classificacao alfabetica\n4- Alteracao de registro\n5- Remocao de elemento cadastrado\n6- Sair\n\nSua escolha:");
		scanf("%d",&resp);
		
		switch (resp){
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: classificacao(); break;
			case 4: alteracao(); break;
			case 5: remocao(); break;
		}
	}
	return 0;
}

int cadastro(){
			system("cls");
			printf("Cadastro e registros\n");
			for (i=0;i<5;++i){
			printf("\nDigite o nome: ");
			fflush(stdin); fgets(a[i].nome,90,stdin);
			printf("\nDigite a idade: ");
			scanf("%d",&a[i].idade);
			printf("\nDigite o endereco: ");
			fflush(stdin); fgets(a[i].endereco,120,stdin);
			printf("\nDigite o telefone: ");
			scanf("%d",&a[i].tel);
			system ("cls");
			}
}
int pesquisa(){
			system("cls");
			printf("Pesquisa de registro\n");
			printf("\nDigite o nome que sera procurado: ");
			fflush(stdin); fgets(pesq,90,stdin);
			i=0;
			acha=0;
			while(i<5 && acha==0)
			{
				if (strcmp(a[i].nome,pesq)==0){acha=1;}else{i+=1;}
			}
			if (acha==1)
			{
				printf("\nO nome foi encontrado na posicao %d",i+1);
				printf("\nInformacoes: \n");
				printf("\nEndereco: ");
				puts(a[i].endereco);
				printf("%d anos\n\n",a[i].idade);
				system("pause");
				system ("cls");
			}
			else
			printf("\nNao foi encontrado.");
}
int classificacao(){
			system("cls");
			printf("Classificacao alfabetica\n");
			for (i=0;i<4;++i){
				for (j=i+1;j<5;++j){
					if (strcmp(a[i].nome,a[j].nome)>0){
						strcpy(aux,a[i].nome);
						strcpy(a[i].nome,a[j].nome);
						strcpy(a[j].nome,aux);
					}
				}
			}
			for (i=0;i<5;++i)
			puts(a[i].nome);
			system("pause");
			system("cls");
}
int alteracao(){
	int mod;
			system("cls");
			printf("Diga o nome com os dados a serem alterados\n");
			fflush(stdin); fgets(pesq,90,stdin);
			i=0;
			acha=0;
			while (i<5 && acha==0){
				if (strcmp(a[i].nome,pesq)==0)
				acha=1;
				else
				i=i+1;
			if (acha==1)
			{
				printf("\nO nome foi encontrado na posicao %d",i+1);
				printf("\nInformacoes: \n");
				printf("\nEndereco: ");
				puts(a[i].endereco);
				printf("%d anos\n\n",a[i].idade);
				printf("Digite o que deseja alterar: \n\n1-Nome\n2-Idade\n3-Endereco\n4-Telefone\nSua escolha: ");
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
							printf("\nDigite a novo idade: ");
							scanf("%d",a[i].idade);
							printf("\nMudanca feita.");	
				system("pause");
				system ("cls");
						}
						break;
					case 3:
						{
							system("cls");
							printf("\nDigite o novo endereco: ");
							fflush(stdin); fgets (a[i].endereco,90,stdin);
							printf("\nMudanca feita.");
				system("pause");
				system ("cls");							
						}
						break;
					case 4:
						{
							system("cls");
							printf("\nDigite o novo telefone: ");
							scanf("%d",a[i].tel);
							printf("\nMudanca feita.");
				system("pause");
				system ("cls");
						}
						break;
						default: printf("\nDesculpe, nao foi escolhido certo.");
				system("pause");
				system ("cls");
				}
			}
			else
			printf("\nNao foi encontrado.");
				system("pause");
				system ("cls");
			}
}
int remocao(){
		int mod;
			system("cls");
			printf("Diga o nome com os dados a serem deletados\n");
			fflush(stdin); fgets(pesq,90,stdin);
			i=0;
			acha=0;
			while (i<5 && acha==0){
				if (strcmp(a[i].nome,pesq)==0)
				acha=1;
				else
				i=i+1;
			if (acha==1)
			{
				printf("\nO nome foi encontrado na posicao %d",i+1);
				printf("\nInformacoes: \n");
				printf("\nEndereco: ");
				puts(a[i].endereco);
				printf("%d anos\n\n",a[i].idade);
				printf("Digite o que deseja deletar: \n\n1-Nome\n2-Idade\n3-Endereco\n4-Telefone\nSua escolha: ");
				scanf("%d",&mod);
				switch (mod){
					
					case 1:
						{
							system("cls");
							strcpy(a[i].nome," ");
							printf("\nDelecao feita.");
				system("pause");
				system ("cls");
						}
						break;
					case 2:
						{
							system("cls");
							a[i].idade=0;
							printf("\nDelecao feita.");
				system("pause");
				system ("cls");
						}
						break;
					case 3:
						{
							system("cls");
							strcpy(a[i].endereco," ");
							printf("\nDelecao feita.");
				system("pause");
				system ("cls");							
						}
						break;
					case 4:
						{
							system("cls");
							a[i].idade=0;
							printf("\nDelecao feita.");
				system("pause");
				system ("cls");
						}
						break;
						default: printf("\nDesculpe, nao foi escolhido certo.");
				system("pause");
				system ("cls");
				}
			}
			else
			printf("\nNao foi encontrado.");
				system("pause");
				system ("cls");
			}
}
