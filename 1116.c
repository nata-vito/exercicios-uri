#include <stdio.h>

int main(){
	int N, X, Y;
	double d;
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d %d", &X, &Y);
		if(Y==0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			d=(double) X/Y;
			printf("%.1lf\n",d);
		}
	}
	return 0;
}
