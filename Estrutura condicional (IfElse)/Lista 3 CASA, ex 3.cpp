#include<stdio.h>

int main (){
	int i=1;
	while (i>0 && i<=20){
		if (i%2==0){
		printf("%d >>> Par\n",i);
		i++;
		}
		if (i%2!=0){
		printf("%d >>> Impar\n",i);
		i++;
		}
		else
		i++;
	}
	return 0;
}
