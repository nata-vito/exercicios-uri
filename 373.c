#include <stdio.h>

int main(){
	
	int B, i, L, C, a=0;
	scanf(" %d", & B);
	
	for(i = 0; i<B; i++)
	{
		scanf("%d %d", &L, &C);
		if(L>C)
		{
			a+=C;
		}
	}
	printf("%d\n", a);
	
	
	return 0;
}
