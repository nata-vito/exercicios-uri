#include <stdio.h>

int main(){
	
	float salarioAtual, salarioNovo, reajuste;
	scanf("%f", &salarioAtual);
	if(salarioAtual<=400.00)
	{
		salarioNovo = (salarioAtual*0.15)+salarioAtual;
		reajuste = salarioNovo-salarioAtual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salarioNovo, reajuste);
	}
	if(salarioAtual > 400.00 && salarioAtual <= 800.00 )
	{
		salarioNovo = (salarioAtual*0.12)+salarioAtual;
		reajuste = salarioNovo-salarioAtual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salarioNovo, reajuste);
	}
	else if(salarioAtual > 800.00 && salarioAtual <= 1200.00)
	{
		salarioNovo = (salarioAtual*0.10)+salarioAtual;
		reajuste = salarioNovo-salarioAtual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salarioNovo, reajuste);
	}
	else if(salarioAtual > 1200.00 && salarioAtual <= 2000.00 )
	{
		salarioNovo = (salarioAtual*0.07)+salarioAtual;
		reajuste = salarioNovo-salarioAtual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salarioNovo, reajuste);
	}
	if(salarioAtual > 2000.00 ) 
	{
		salarioNovo = (salarioAtual*0.04)+salarioAtual;
		reajuste = salarioNovo-salarioAtual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salarioNovo, reajuste);
	}
	
	
	return 0;
}
