//Autor @HectorBeo  -- Exercicios de aprendizado C - Aulas Unesp IC 2016
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, cont1[4], cont2[4];
	

		for(i = 0; i < 4; i++)
		{
			printf("Digite um número: ");
			scanf("%d", &cont1[i]);	
		}
		
		for(i = 0; i < 4; i++)
		{
			printf("Digite outro número: ");
			scanf("%d", &cont2[i]);	
		}
		
		for(i = 0; i < 4; i++)
		{
			printf("%d  ",cont2[i]);
			printf("%d  ", cont1[i]);
		}
		
		getch();
	
}
