#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a-b;
	if (c<0)
	{
		c = 24+c;
	}
	if(a==b)
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	else 
	printf("O JOGO DUROU %d HORA(S)\n", c);
	
	
	
	return 0;
}
