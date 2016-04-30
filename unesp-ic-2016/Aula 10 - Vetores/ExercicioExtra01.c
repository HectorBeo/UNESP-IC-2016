#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	
	int ra, media=0, i, cont=0, sair=0, n=0;
	char resp[8], gab[] = {'a', 'a', 'b', 'c', 'd', 'a', 'b', 'a'};
	float perc;
	
	setlocale(LC_ALL, "");
	
	do
	{
		//Adicionando contador de alunos que responderam
		n++;
		
		printf("Digite seu n�mero de aluno: ");
		scanf("%d", &ra);
		fflush(stdin);
		
		//Guardando as respostas do aluno
		for(i = 0; i < 8; i++)
		{
			printf("Digite a resposta da quest�o %d [a, b, c, d]:  ", i+1);
			scanf("%c", &resp[i]);
			fflush(stdin);
		}
		
		//Comparando o gabarito do aluno com o vetor que cont�m as respostas certas
		for(i = 0; i < 8; i++)
		{
			
			if(resp[i] == gab[i])
				media += 1; //Caso a resposta seja certa, add +1 na media
		}
		
		//Condicional de aprova��o
		if(media >= 6)
		{
			printf("\nRA n�mero %d \nMedia final: %d. Aprovado\n", ra, media);
			cont++;	
		}
		else
			printf("\nRA n�mero %d \nMedia final: %d. Reprovado\n", ra, media);
		
		//Continuar loop	
		printf("Deseja continuar? 0-Sim  1-N�o");
		scanf("%d", &sair);
		
		//Zerando contador m�dia
		media = 0;
		system("cls");
	}
	while(sair == 0);
	

	
	//Calculo da porcentagem
	perc = ((float)cont/(float)n)*100;
	
	printf("Porcentagem de aprova��o: %.2f%%.", perc);
		
	getch();
	
}
