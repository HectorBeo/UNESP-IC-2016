//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   prof� Veronica   LISTA DE LA�OS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "");
	
	int idade=1, alt, i=0, cont_alt=0;
	float media;
	
	//la�o principal
	do
	{
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		if(idade > 0) //Se a idade for menor ou igual a zero, ela pular� todo o programa e finaliza o la�o while
		{
			printf("Digite sua altura em cent�metros[ex. 172]: ");
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
	printf("A altura m�dia � de %.2f metros.\n", media);
	}
	else
		printf("N�o h� usuarios com idade superior a 50 anos.");

	getch();	
}
