#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int const tam1 = 15, tam2 = 10;
	int i, j, matLog[tam1], matProg[tam2], comp[tam2], find=0;
	
	//Laço de entrada de dados
	for(i = 0; i < tam1+tam2; i++)
	{
		if(i < tam1) //Até o 15, o usuário insere as matrículas de Lógica
		{
			printf("\nInsira a matrícula do aluno do curso de Lógica: ");
			scanf("%d", &matLog[i]);
			fflush(stdin);
		}
		else //do 15 ao 25 insere mais 10 do curso de programação
		{
			system("cls");
			printf("\nInsira a matrícula do aluno do curso de Linguagem de Programação: ");
			scanf("%d", &matProg[i-15]);
			fflush(stdin);
		}
	}
	
	//Compara as matrículas de lógica (i) com as matrículas em programação (j)
	for(i = 0; i < tam1; i++)
	{
		for(j = 0; j < tam2; j++)
		{
			if(matLog[i] == matProg[j])
			{
				comp[find] = matLog[i];
				find++;
			}
		}
	}
	
	system("cls");
	
	//Impressão de dados
	printf("Os alunos que estão matrículas em ambos os cursos são: \n\n");
	
	for(i = 0; i < find; i++)
	{
		printf("Matrícula nº: %d \n", comp[i]);
	}
	
	getch();
	
}
