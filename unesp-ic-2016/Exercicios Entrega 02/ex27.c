//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "");

	int canal, pessoas, cont4=0, cont5=0, cont7=0, cont12=0, fim=1, total_pessoas=0;
	float media;
	
	do
	{
		//Entrada manual de dados
		printf("Canal assistido [4, 5, 7, 12]: ");
		scanf("%d", &canal);
	
		if(canal != 0)
		{
			printf("Número de pessoas assistindo: ");
			scanf("%d", &pessoas);
			
			//Acumulador para calcular porcentagem posteriormente
			total_pessoas += pessoas;
			
			switch(canal)
			{
				case 4:
					cont4 += pessoas;
				break;
				
				case 5:
					cont5 += pessoas;
				break;
				
				case 7:
					cont7 += pessoas;
				break;
				
				case 12:
					cont12 += pessoas;
				break;
				
				default:
					printf("Canal inválido");
					getch();
				break;
			}
			
			system("cls");
		}
		else //Caso o canal seja ZERO, o laço é finalizado.
			fim = 0;
	}
	while(fim != 0);
	
	system("cls");
	
	//MOSTRANDO A AUDIENCIA EM PORCENTAGEM (REUTILIZANDO A MESMA VARIAVEL MEDIA)
	media = ((float)cont4/(float)total_pessoas)*100.00;
	printf("Audiência do canal 4: %.2f%%.\n", media);
	
	media = ((float)cont5/(float)total_pessoas)*100.00;
	printf("Audiência do canal 5: %.2f%%.\n", media);
	
	media = ((float)cont7/(float)total_pessoas)*100.00;
	printf("Audiência do canal 7: %.2f%%.\n", media);
	
	media = ((float)cont12/(float)total_pessoas)*100.00;
	printf("Audiência do canal 12: %.2f%%.\n", media);
	
	getch();
}
