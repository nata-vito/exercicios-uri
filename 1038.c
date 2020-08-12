#include<stdio.h>

int main(){
	int codigo, quantidade;
	float valor;
	scanf("%d %d", &codigo, &quantidade);
	if (codigo == 1)
	{
		valor=4.00*quantidade;
		printf("Total: R$ %.2f\n", valor);
	}
	else if(codigo == 2)
	{
		valor=4.50*quantidade;
		printf("Total: R$ %.2f\n", valor);
	}
		else if(codigo == 3)
	{
		valor=5.00*quantidade;
		printf("Total: R$ %.2f\n", valor);
	}
		else if(codigo == 4)
	{
		valor=2.00*quantidade;
		printf("Total: R$ %.2f\n", valor);
	}
		else if(codigo == 5)
	{
		valor=1.50*quantidade;
		printf("Total: R$ %.2f\n", valor);
	}
	
	return 0;
}
