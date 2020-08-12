#include <stdio.h>
#include <math.h>

int main()
{
	double A, B, C, delta, r1, r2;
	scanf("%lf %lf %lf", &A, &B, &C);
	delta = pow(B,2) - 4*A*C;
	r1 = (-B + sqrt(delta))/(2*A);
	r2 = (-B - sqrt(delta))/(2*A);
	
	if(A==0.0 || delta<0.0)
	{
		printf("Impossivel calcular\n");
	}
	if (A>0.0 && delta>0.0)
	{
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}
		
	return 0;
}
