#include <stdio.h>

int main()
{
	int horas, velocidadeMedia;
	float litros;
	scanf("%d%d", &horas, &velocidadeMedia);
	litros=(velocidadeMedia/12.0)*horas;
	printf("%.3f\n", litros);
	return 0;
}
