#include <stdio.h>
#include <math.h>

int main()
{
	double A, B, C, pi=3.14159, trianguloRetangulo, circulo, trapezio, quadrado, retangulo;
	scanf("%lf%lf%lf", &A, &B, &C);
	trianguloRetangulo = A*(C/2);
	circulo = pi*pow(C,2);
	trapezio = (A+B)*C/2;
	quadrado = B*B;
	retangulo = A*B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", trianguloRetangulo, circulo, trapezio, quadrado, retangulo);
	
	return 0;
}
