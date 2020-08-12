#include <stdio.h>

int main(){
	double valorDigitado, inter = 0.0, inter1 = 25.0, inter2 = 50.0, inter3 = 75.0, inter4 = 100.0;
	scanf("%lf", & valorDigitado);
	if(valorDigitado<0 || valorDigitado>100.0)
	{
		printf("Fora de intervalo\n");
	}
	else if(valorDigitado >= inter && valorDigitado <= inter1)
	{
		printf("Intervalo [0,25]\n");
	}
	else if(valorDigitado>inter1 && valorDigitado<=inter2)
	{
		printf("Intervalo (25,50]\n");
	}
	else if(valorDigitado>inter2 && valorDigitado<=inter3)
	{
		printf("Intervalo (50,75]\n");
	}
	else if(valorDigitado>inter3 && valorDigitado<=inter4)
	{
		printf("Intervalo (75,100]\n");
	}
	
	return 0;
}
