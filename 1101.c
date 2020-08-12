#include <stdio.h>

int main(){
	
	int M, N, i, a, b, c, s=0;
	for(i=0; i<3; i++)
	{
		scanf("%d %d", &M, &N);
		if(M>0 && N>0)
		{
			if(M>N)
			{
				a=M;
				b=N;
			}
			else
			{
				a=N;
				b=M;				
			}
			for(c=b; c<=a; c++)
			{
				printf("%d ", c);
				s+=c;
			}
			printf("Sum=%d\n", s);
		}
		else if(M<=0 || N<=0)
		{
			break;
		}
		s=0;
	}
	
	
	
	
	return 0;
}
