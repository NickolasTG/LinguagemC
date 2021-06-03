#include <stdio.h>
#include <conio.h>                   
#include <stdlib.h>
int main()
{   
    float n1,n2,m;
    printf("Digite a primeira nota do aluno:");
    scanf("%f",&n1);
    printf("Digite a segunda nota do aluno:");
    scanf("%f",&n2);
    m=(n1+n2)/2;
    if (m>=7.0)
    {
    	system("color 1");
        printf("Aprovado!");
	}
	else if (m<3)
	{
		system("color 4");
		printf("Reprovado!");
	}
	else if (m<7 && m>=3)
	{
	system("color 6");
	printf("Recuperacao!");
	}
	else
	printf("Nota invalida");
	return 0;
}
