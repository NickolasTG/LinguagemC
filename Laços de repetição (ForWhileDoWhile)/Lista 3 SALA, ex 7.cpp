#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int i,n,tres=3;
	for (i=0;i<=15;i++){
		if (i==0){
			n=1;
		} else {
			if (n!=0){
				n=i*tres;
			}
		}
		printf("%d elevado a %d = %d\n",tres,i,n);
	}
	return 0;
}
