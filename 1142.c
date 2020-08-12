#include <stdio.h>

int main(){
	
	int N, i, a=0;
	scanf(" %d", &N);
	for(i = 0; i<N; i++)
	{
		printf("%d %d %d PUM\n", a+1, a+2, a+3);
		a+=4;
	}
	
	return 0;
}
