#include <stdio.h>

int main(){
	
	int N, i, a;
	scanf("%d", &N);
	
	for(i = 0; i<N; i++)
	{ 
		scanf("%d", &a);
		if((a % 2 == 0) && a>0)
		{
			printf("EVEN POSITIVE\n");
		}
		else if((a % 2 == 0) && a<0)
		{
			printf("EVEN NEGATIVE\n");
		}
		else if((a % 2 != 0) && a>0)
		{
			printf("ODD POSITIVE\n");
		}
		else if((a % 2 != 0) && a<0)
		{
			printf("ODD NEGATIVE\n");
		}
		else if(a == 0)
		{
			printf("NULL\n");
		}					
	}
	
	return 0;
}
