#include <stdio.h>

int main(){
	
	int vetor[100], i, maior=0, posi=0;
	for(i=0; i<100; i++)
	{
		scanf("%d", &vetor[i]);
		if(vetor[i]>maior)
		{
			maior=vetor[i];
			posi=i+1;
		}
	}
	printf("%d\n%d\n", maior, posi);
		
	return 0;
}
