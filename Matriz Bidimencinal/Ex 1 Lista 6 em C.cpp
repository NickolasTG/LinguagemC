#include<stdio.h>
#include<conio.h>

int main()

{
int a[5][3], b[5][3], c[5][3],i,j;
	for (i=0;i<5;i++){
		for  (j=0;j<3;j++){
			printf("Entre com matriz A:");
			scanf("%d",&a[i][j]);
			printf("Entre com matriz B:");
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j] + b[i][j];
		}
	}
	for (i=0;i<5;i++){
		for  (j=0;j<3;j++){
			printf("A matriz C eh: %d\n", c[i][j]);
		}
	}
return 0; 
}
