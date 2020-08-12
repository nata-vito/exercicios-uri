#include <stdio.h>

int main(){
	
/*	int N, i, a, b;
	scanf("%d", &N);
	float teste[N][N], mediaPonderada[N];
	for(i=0; i<N; i++)
	{	
		for(a=0;  a<N; a++)
		{
			scanf("%f", & teste[i][a]);
		}
		
	}
	for(b=0; b<N; b++)
	{
		mediaPonderada[b] = (teste[b][0]*2+teste[b][1]*3+teste[b][2]*5)/10;
		printf("%.1f\n", mediaPonderada[b]);
	}
	*/
	
	int N, i;
	double num1, num2, num3, media;
	scanf("%d", &N);
	for (i=0; i<N; i++)
	{
		scanf("%lf %lf %lf", &num1, &num2, &num3);	
		media = (num1*2 + num2*3 + num3*5)/10;
		printf("%.1lf\n", media);
	}
	
	
	
	
	
	return 0;
}
