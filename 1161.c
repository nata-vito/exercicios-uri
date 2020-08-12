#include<stdio.h>
/*
int main(){

	int fat, n;
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);
	 
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;
	 
	printf("\nFatorial calculado: %d", fat);

	
	return 0;
}*/

int main(){
	
	int M, N, R, R1;
	scanf("%d %d", &M, &N);
	for( R = 1; M>1; M = M - 1)
	{
		R = R * M;
	}
	for( R1 =1; N>1; N = N - 1)
	{
		R1 = R1 *N;
	}
	printf("%d\n", R+R1);
	
	
	return 0;
}
