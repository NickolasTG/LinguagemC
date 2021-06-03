#include<stdio.h>	
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int dia,mes,ano,totald,dias; //Declaração de variáveis usadas.
	int dma;
do
{
printf("Digite o dia de uma certa data: ");
scanf("%d", &dia);
} while ((dia > 31) || (dia < 1));
do
{                                           //Aqui o programa pede a data a ser digitada
printf("Digite o mes de uma certa data: "); //até ela estar dentro das conformidades
scanf("%d", &mes);                          //pedidas.
} while ((mes > 12) || (mes < 1));
do
{
printf("Digite o ano de uma certa data: ");
scanf("%d", &ano);
} while ((ano < 1900) || (ano > 2100));
//------------------------------------------------------------------------------------//

//------------------------------------------------------------------------------------//
//Logo abaixo eu faço um sistema de switch "reverso",
//onde o default que da continuidade ao programa
//e os cases são como a "linha de corte" do programa
//------------------------------------------------------------------------------------//

if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
 {
 	switch (dia){
 		case 32:printf("Data invalida, encerrando..."); 
 		return 0;
		 break;
 		default:
 		system ("cls");
	 }
 	
 }
if (mes==2 && ano%4==0 && (ano%100!=0 || ano%400==0))
  {
  	switch (dia){
 		case 30:printf("Data invalida, encerrando..."); 
 		 return 0;
		 break;
 		case 31:printf("Data invalida, encerrando..."); 
 		 return 0;
		 break;
 		default:
 		system ("cls");
	 }
  }
  if (mes==2 && ano%4!=0 && (ano%100==0 || ano%400!=0)) 
{
	switch (dia){
 		case 29:
		 printf("Data invalida, encerrando..."); 
		 return 0;
		 break;
 		case 30:
		 printf("Data invalida, encerrando..."); 
		 return 0;
		 break;
 		case 31:
		 printf("Data invalida, encerrando..."); 
		 return 0;
		 break;
 		default:
 		system ("cls");
	 }
}
if (mes == 4 || mes == 6 || mes == 9 || mes ==11)
{
	switch (dia){
 		case 31:printf("Data invalida, encerrando..."); 
 		 return 0;
		 break;
 		default:
 		system ("cls");
	 }
}
//------------------------------------------------------------------------------------//

//------------------------------------------------------------------------------------//
//Aqui o programa soma todos os dias
//dos meses passados, soma                  (Condição para ano bissexto)
//com os dias do mes digitado e exibe.                  :)
//------------------------------------------------------------------------------------//

   if (ano%4==0 && (ano%100!=0 || ano%400==0))
   {
   	 switch (mes) {
        case 12: totald += 30;     
        case 11: totald += 31;              
        case 10: totald += 30;             
        case  9: totald += 31;              
        case  8: totald += 31;             
        case  7: totald += 30;                 
        case  6: totald += 31;                  
        case  5: totald += 30;                  
        case  4: totald += 31;                  
        case  3: totald += 29;                 
        case  2: totald += 31;                  
                  }
    dias=totald+dia;
    printf("A data digitada se converte no dia %d, do ano %d",dias,ano);
    return 0;
   }
//------------------------------------------------------------------------------------//

//------------------------------------------------------------------------------------//
//Aqui o programa soma todos os dias
//dos meses passados, soma                  (Condição para ano não bissexto)
//com os dias do mes digitado e exibe.                  :)
//------------------------------------------------------------------------------------//

   else
    switch (mes) {
        case 12: totald += 30;     
        case 11: totald += 31;              
        case 10: totald += 30;             
        case  9: totald += 31;              
        case  8: totald += 31;             
        case  7: totald += 30;                 
        case  6: totald += 31;                  
        case  5: totald += 30;                  
        case  4: totald += 31;                  
        case  3: totald += 28;                 
        case  2: totald += 31;                 
                 }
        dias=totald+dia; 
        printf("A data digitada se converte no dia %d, do ano %d",dias,ano);
        return 0;
//------------------------------------------------------------------------------------//
}
