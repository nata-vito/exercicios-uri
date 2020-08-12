#include <stdio.h>

int main(){
	
	int idadeDias, ano=365, anoIdade, mes=30, dias, mesIdade;
	scanf("%d",&idadeDias);
	anoIdade = idadeDias/ano;
	mesIdade = (idadeDias%ano)/mes;
	dias = (idadeDias%ano)%mes;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anoIdade, mesIdade, dias);
	
	return 0;
}
