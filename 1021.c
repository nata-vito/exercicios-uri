#include <stdio.h>

int main(){
	
	int cem=100, cem1, cinq=50, cinq1, vinte=20, vinte1, dez=10, dez1, cinco=5, cinco1, dois=2, dois1, um=1, um1, half1;
	int moedas;
	double N;
	scanf("%lf", &N);
	moedas = N*100;
	cem1= (int)N/cem;
	cinq1 = ((int)N%cem)/cinq;
	vinte1 = (((int)N%cem)%cinq)/vinte;
	dez1 = ((((int)N%cem)%cinq)%vinte)/dez;
	cinco1 = (((((int)N%cem)%cinq)%vinte)%dez)/cinco;
	dois1 = ((((((int)N%cem)%cinq)%vinte)%dez)%cinco)/dois;
	um1 = (((((((int)N%cem)%cinq)%vinte)%dez)%cinco)%dois)/um;
	half1 = (moedas)/50;
	printf("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\nMOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n", cem1, cinq1, vinte1, dez1, cinco1, dois1, um1, half1);
	
	
	return 0;
}
