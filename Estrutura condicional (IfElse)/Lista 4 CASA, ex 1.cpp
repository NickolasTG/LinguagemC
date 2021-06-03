#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,x[9],y[9];
	
	for (i=0;i<=8;i++){
		printf("Digite o %do digito do RAV:",i+1);
		scanf("%d",&x[i]);
	}
	system ("cls");
	
	for (i=0;i<=8;i++){
	
	if (i!=2 && i!=3 && i!=6 && i!=7)
	y[i]=x[i];
	if (i==2)
	y[2]=x[7];
	if (i==3)
	y[3]=x[6];
	if (i==6)
	y[6]=x[2];
	if (i==7)
	y[7]=x[3];
	
	printf("O %do digito do RAC eh: %d\n",i+1,y[i]);
	
	}
	return 0;
}
