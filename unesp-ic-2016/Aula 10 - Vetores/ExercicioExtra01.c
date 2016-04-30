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
		
		printf("Digite seu número de aluno: ");
		scanf("%d", &ra);
		fflush(stdin);
		
		//Guardando as respostas do aluno
		for(i = 0; i < 8; i++)
		{
			printf("Digite a resposta da questão %d [a, b, c, d]:  ", i+1);
			scanf("%c", &resp[i]);
			fflush(stdin);
		}
		
		//Comparando o gabarito do aluno com o vetor que contém as respostas certas
		for(i = 0; i < 8; i++)
		{
			
			if(resp[i] == gab[i])
				media += 1; //Caso a resposta seja certa, add +1 na media
		}
		
		//Condicional de aprovação
		if(media >= 6)
		{
			printf("\nRA número %d \nMedia final: %d. Aprovado\n", ra, media);
			cont++;	
		}
		else
			printf("\nRA número %d \nMedia final: %d. Reprovado\n", ra, media);
		
		//Continuar loop	
		printf("Deseja continuar? 0-Sim  1-Não");
		scanf("%d", &sair);
		
		//Zerando contador média
		media = 0;
		system("cls");
	}
	while(sair == 0);
	

	
	//Calculo da porcentagem
	perc = ((float)cont/(float)n)*100;
	
	printf("Porcentagem de aprovação: %.2f%%.", perc);
		
	getch();
	
}
