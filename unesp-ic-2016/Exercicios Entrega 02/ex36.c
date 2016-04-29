//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "");
	
	int idade=1, alt, i=0, cont_alt=0;
	float media;
	
	//laço principal
	do
	{
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		if(idade > 0) //Se a idade for menor ou igual a zero, ela pulará todo o programa e finaliza o laço while
		{
			printf("Digite sua altura em centímetros[ex. 172]: ");
			scanf("%d", &alt);
			
			if(idade > 50)
			{
				cont_alt += alt;
				i++;
			}
		}
		
		system("cls");
	}
	while(idade > 0);
	
	if(cont_alt > 0)
	{
	media = (float)(cont_alt/i)/100;
	
	//Saida de dados do programa
	printf("A altura média é de %.2f metros.\n", media);
	}
	else
		printf("Não há usuarios com idade superior a 50 anos.");

	getch();	
}
