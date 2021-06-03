#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,t=0,r;
	printf("Digite um numero para ver sua tabuada:");
	scanf("%d",&n);
	for (t=1;t<=10;t++)
    {
	    r=n*t;
	    printf("\n%d X %d = %d\n",n,t,r);
    }
    return 0;
}
