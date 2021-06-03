#include <stdio.h>

int main (){
	int i=20;
	for ( ;i>0;i--){
		if (i%2==0){
		printf("%d >>> Par\n",i);
		}
		if (i%2!=0){
		printf("%d >>> Impar\n",i);
		}
		}
	return 0;
}
