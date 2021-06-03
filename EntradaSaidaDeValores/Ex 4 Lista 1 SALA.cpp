#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf ("digite um valor:");
	scanf ("%f", &a);
	printf ("digite outro valor:");
	scanf ("%f", &b);
	c=a;
	a=b;
	b=c;
	printf ("%f,%f",a,b);
	getch();
	return 0;
}
