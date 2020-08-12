#include <stdio.h>

int main(){
	
	int N, a, i, in=0, out=0;
	scanf("%d", &N);
	for(i = 0; i<N; i++)
	{
		scanf("%d", &a);
		if(a >= 10 && a<=20)
		{
			in++; 	
		}
		else
		{
			out++;
		}
	}
	printf("%d in\n%d out\n", in, out);
	
	
	
	return 0;
} 
