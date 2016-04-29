//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   prof� Veronica   LISTA DE LA�OS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int i, mat, n1, n2, n3, freq, rep_total=0; 
	float media, maior_n=0.00, menor_n=10.00,rep_freq=0.00, rep_porc=0.00;
	
	setlocale(LC_ALL, "");
	
	for(i = 1; i <= 10; i++)
	{
		system("cls");
		
		//Entrada de dados manualmente
		printf("Digite o n�mero de matr�cula [3 d�gitos]: ");
		scanf("%d", &mat);
		fflush(stdin);
		
		printf("Digite tr�s notas respectivamente: ");
		scanf("%d %d %d", &n1, &n2, &n3);
		fflush(stdin);
		
		printf("Digite o n�mero de presen�as: ");
		scanf("%d", &freq);
		fflush(stdin);
		
		system("cls");
		//Calculo da m�dia
		media = (float)(n1+n2+n3)/3.00;
		//Mostra numero de alunos que responderam, para facilitar a visualiza��o apeans
		printf("Entrada n� %d.\n\n", i);
		
		//Condicional para determinar aprova��o
		if(media >= 6 && freq >= 40)
			printf("Matricula %d \nNota final %.2f \nAprovado!\n\n", mat, media);
		else if(media < 6 || freq < 40)
			{	
				printf("Matricula %d \nNota final %.2f \nReprovado!\n\n", mat, media);
				rep_total++;
				if(freq < 40)//Caso o aluno seja reprovado por faltas, � add tbm ao contador de reprova��o por frequencia
					rep_freq++;			
			}
		
		//Calculo de porcentagem de alunos reprovados (� dividido pelo 'i', total de alunos, mostra a cada entrada a reprova��o atual
		rep_porc = (float)(rep_freq/i)*100.00;
		
		//Maior e menor m�dia
		if(media > maior_n)
			maior_n = media;
			
		if(media < menor_n)
			menor_n = media;

		//saida de dados
		printf("Maior nota: %.2f. Menor Nota: %.2f\n", maior_n, menor_n);
		
		printf("Total de alunos reprovados: %d.\n", rep_total);
		
		printf("Porcentagem de alunos reprovados por falta: %.1f%%\n", rep_porc);
		
		system("pause");
	}
	
	getch();
	
}
