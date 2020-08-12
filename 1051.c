#include <stdio.h>

int main(){
	
	float valor, valor1;
	scanf("%f", &valor);
	if (valor <= 2000.00)
	{
		printf("Isento\n");
	}
	else if(valor <= 3000.00)
	{
		valor1 = (valor-2000.0)*0.08;
		printf("R$ %.2f\n", valor1);
	}
	else if(valor <= 4500.00)
	{
		valor1 = (valor-3000.00)*0.18 + 1000*0.08;
		printf("R$ %.2f\n", valor1);
	}
	else
	{
		valor1 = (valor-4500.00)*0.28 + (1500.00*0.18) + (1000.00*0.08);
		printf("R$ %.2f\n", valor1);
	}
	
	
	return 0;
}

