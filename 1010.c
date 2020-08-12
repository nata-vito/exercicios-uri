#include <stdio.h>

int main()
{
	int codigoPeca1, numeroPecas1, codigoPeca2, numeroPecas2;
	double valorUnitario1, valorUnitario2, valorPagar; 
	scanf("%d%d%lf%d%d%lf", &codigoPeca1, &numeroPecas1, &valorUnitario1, &codigoPeca2, &numeroPecas2, &valorUnitario2);
	valorPagar = valorUnitario1*numeroPecas1+valorUnitario2*numeroPecas2;
	printf("VALOR A PAGAR: R$ %.2lf\n", valorPagar);
	
	return 0;
}
