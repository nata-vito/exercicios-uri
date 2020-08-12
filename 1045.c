#include <stdio.h>

int main(){
	
	double A, B, C, valorMaior, meio, menor;
	scanf("%lf %lf %lf", &A, &B, &C);
	if(A>=B && A>=C)
	{
		valorMaior=A;
		meio=B;
		menor=C;
	}
	if(B>A && B>C)
	{
		valorMaior=B;
		meio=A;
		menor=C;
	}
	else
	{
		valorMaior=C;
		meio=A;
		menor=B;
	}
	if(valorMaior >= meio+menor)
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
	if((valorMaior*valorMaior) == meio*meio + menor*menor)
	{
		printf("TRIANGULO RETANGULO\n");
	}
	if((valorMaior*valorMaior) > meio*meio + menor*menor)
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if((valorMaior*valorMaior) < ((meio*meio) + (menor*menor)))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(A == B && B==C && A == C)
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	else if (A==B || B==C || C==A)
	{
		printf("TRIANGULO ISOSCELES\n");
	}
	}

	
	return 0;
}
