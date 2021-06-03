#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,RA[9],RAnovo[9];
	
	for (i=0;i<=8;i++){
		
		printf("Digite o %do digito do RA:",i+1);
		scanf("%d",&RA[i]);
	}
	system ("cls");
	
	printf("\n\nNovo RA eh: ");
	
	for (i=0;i<=8;i++){
		
		if (i==5)
		RAnovo[5]=RA[8];
		if (i==6)
		RAnovo[6]=RA[7];
		if (i==7)
		RAnovo[7]=RA[6];
		if (i==8)
		RAnovo[8]=RA[5];
		if (i!=5 && i!=6 && i!=7 && i!=8)
		RAnovo[i]=RA[i];
		
		printf("%d",RAnovo[i]);
	}
	printf("\n\n");
	return 0;
}
