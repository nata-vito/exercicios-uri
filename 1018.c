#include <stdio.h>

int main(){
	
	int N, cem1, cem=100, cinq1, cinq=50, vinte1, vinte=20, dez1, dez=10, cinco1, cinco=5, dois1, dois=2, um1, um=1;
	scanf("%d", &N);
	cem1 = N/cem;
	cinq1 = (N%cem)/cinq;
	vinte1 = ((N%cem)%cinq)/vinte;
	dez1 = (((N%cem)%cinq)%vinte)/dez;
	cinco1 = ((((N%cem)%cinq)%vinte)%dez)/cinco;
	dois1 = (((((N%cem)%cinq)%vinte)%dez)%cinco)/dois;
	um1 = ((((((N%cem)%cinq)%vinte)%dez)%cinco)%dois)/um;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, cem1, cinq1, vinte1, dez1, cinco1, dois1, um1);
	
	
	
	return 0;
}
