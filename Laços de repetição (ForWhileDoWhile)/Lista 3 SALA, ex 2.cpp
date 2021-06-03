#include<stdio.h>
#include<conio.h>
int main(){
	int num, total=0;
	num=1;
	while (num<=100)
	{
	total=total+num;
	num=num+1;
	}
	printf("Total da soma dos 100 primeiros numeros inteiros: %d",total);
	return 0;
}
