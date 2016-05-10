#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int const tam1 = 15, tam2 = 10;
	int i, j, matLog[tam1], matProg[tam2], comp[tam2], find=0;
	
	//La�o de entrada de dados
	for(i = 0; i < tam1+tam2; i++)
	{
		if(i < tam1) //At� o 15, o usu�rio insere as matr�culas de L�gica
		{
			printf("\nInsira a matr�cula do aluno do curso de L�gica: ");
			scanf("%d", &matLog[i]);
			fflush(stdin);
		}
		else //do 15 ao 25 insere mais 10 do curso de programa��o
		{
			system("cls");
			printf("\nInsira a matr�cula do aluno do curso de Linguagem de Programa��o: ");
			scanf("%d", &matProg[i-15]);
			fflush(stdin);
		}
	}
	
	//Compara as matr�culas de l�gica (i) com as matr�culas em programa��o (j)
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
	
	//Impress�o de dados
	printf("Os alunos que est�o matr�culas em ambos os cursos s�o: \n\n");
	
	for(i = 0; i < find; i++)
	{
		printf("Matr�cula n�: %d \n", comp[i]);
	}
	
	getch();
	
}
