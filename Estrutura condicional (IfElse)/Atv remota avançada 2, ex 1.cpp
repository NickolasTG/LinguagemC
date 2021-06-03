#include <stdio.h>

int main(){
	int time1,time2,time1r,time2r,pontos,aposta,vencedor,r;
	printf("Digite o placar apostado (Formato: 0x0): \n");
	scanf("%dx%d",&time1,&time2);
	printf("Digite o placar do jogo (Formato: 0x0): \n");
	scanf("%dx%d",&time1r,&time2r);
	
	if (time1>time2 && time1r>time2r){
		aposta=vencedor;
	}else aposta=0;
	
	if (time1<time2 && time1r<time2r){
		aposta=vencedor;
	}else aposta=0;
	
    if (time1r==time2r || vencedor == aposta)
	pontos+=10;
	if (time1==time1r)
	 pontos+=5;
	
    if (time2==time2r)
	 pontos+=5;
	
	else if (time1!=time1r && time2!=time2r && aposta != vencedor){
	pontos = 0;
	}
	printf("Seus pontos de apostador: %d",pontos);
	return 0;
}
