#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int i,soma,ant1,ant2;
	for (i=1;i<=15;i++){
	    soma=ant1+ant2;                    
        ant1=ant2;                           
        ant2=soma;
		printf("%d\n", ant2);
	}
	return 0;
}
