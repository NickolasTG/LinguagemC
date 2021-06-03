#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
 float dis,lu,t,vm;
 printf ("Digite o valor do tempo gasto:");
 scanf ("%f", &t);
 printf ("Digite a velocidade media:"); 
scanf ("%f", &vm);
dis=t*vm;
lu=dis / 12;
printf ("Velocidade media: %f, Tempo gasto: %f, Distancia: %f, Quantidade de litros usados: %f", vm,t,dis,lu);
getch();
return 0;   
}

