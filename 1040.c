#include<stdio.h>

int main(){
	float n1, n2, n3, n4, notaExame, media, mediaFinal;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
	if(media >= 7.0)
	{
		printf("Media: %.1f\nAluno aprovado.\n", media);
	}
	else if(media < 5.0)
	{
		printf("Media: %.1f\nAluno reprovado.\n", media);
	}
	else if(media>=5.0 && media<=6.9)
	{
		printf("Media: %.1f\nAluno em exame.\n", media);
		scanf("%f", &notaExame);
		printf("Nota do exame: %.1f\n", notaExame);
		mediaFinal = (media+notaExame)/2;
		if(mediaFinal >= 5.0)
		{
			printf("Aluno aprovado.\nMedia final: %.1f\n", mediaFinal);
		}
		else if(mediaFinal <= 4.9)
		{
			printf("Aluno reprovado.\nMedia final: %.1f\n", mediaFinal);
		}
	}
	
	return 0;
}
