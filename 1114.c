#include<stdio.h>

int main(){
	
	int senha = 2002, i, login;
	for(i=0; i<1; i++)
	{
		scanf("%d", &login);
		if(login == senha)
		{
			i=1;
		}
		else
		{
			i=-1;
			printf("Senha Invalida\n");
		}
	}
	printf("Acesso Permitido\n");
	
	return 0;
}
