#include <stdio.h>

int main(){
	
		int N[5], i, pares=0, impar=0, positivo=0, negativo=0;
		for(i=0; i<5; i++)
		{
			scanf("%d", & N[i]);
			if(N[i]%2 == 0)
			{
				++pares;
			}
			else if(N[i]%2 != 0)
			{
				++impar;
			}
			if(N[i] > 0)
			{
				++positivo;
			}
			else if(N[i] < 0)
			{
				++negativo;
			}
		}
		printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impar, positivo, negativo);
	
	
	
	
	return 0;
}
