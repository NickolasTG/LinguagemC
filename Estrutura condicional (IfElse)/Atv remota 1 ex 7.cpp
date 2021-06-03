#include <stdio.h>
#include <conio.h>

int main()
{ 
    int e;
    printf("digite a quantidade de erros encontrados:");
    scanf("%d",&e);
    if (e<2 && e>0)
    {
    	printf("%d erro encontrado",e);
	}
	else
    printf("%d erros encontrados",e);
    return 0;
}
