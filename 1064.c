#include<stdio.h>

int main(){
	
	int i, a=0;
	float valor[5];
	for(i=0; i<5; i++)
	{
		scanf("%f", & valor[i]);
		if((int)valor[i]%2 == 0)
		{
		 ++a;
		}
	}
	printf("%d valores pares\n", a);
	
	return 0;
}
