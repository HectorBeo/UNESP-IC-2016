//Autor @HectorBeo  -- Exercicios de aprendizado C - Aulas Unesp IC 2016
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, j, vet1[10], vet2[5];
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero");
		scanf("%d", &vet1[i]);
	}
	
	system("cls");
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite outro numero");
		scanf("%d", &vet2[i]);
	}	
	
	system("cls");
	
	for(i = 0; i < 10; i++)
	{
		printf("\nNumero %d.\n", vet1[i]);
		
		for(j = 0; j < 5; j++)
		{
			if(vet1[i]%vet2[j] == 0)
				printf("Divisível por %d, na posição %d.\n", vet2[j], j);
		}
	}
	getch();
}
