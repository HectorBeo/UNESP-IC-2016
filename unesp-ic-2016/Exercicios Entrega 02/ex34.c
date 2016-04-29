//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	int cand1=0, cand2=0, cand3=0, cand4=0, voto, i=0;
	float nulo=0.00, branco=0.00;
	
	setlocale(LC_ALL, "");

	//Laço principal
	do
	{
		printf("\n  MENU\n\n  Digite 1 para Fulano.\n  2 para Ciclano \n  3 para Beltrano \n  4 para Deltrano\n  5 para votar em branco \n  6 para voto nulo \n  7 para finalizar\n");
		scanf("%d", &voto);
		
		switch(voto) //Em cada caso é add 1 ao contador respectivo e ao contador geral 'i' para calculo das medias
		{
			case 1:
				cand1++;
				i++;
			break;
			
			case 2:
				cand2++;
				i++;
			break;
			
			case 3:
				cand3++;
				i++;
			break;
			
			case 4:
				cand4++;
				i++;
			break;
			
			case 5:
				nulo++;
				i++;
			break;
			
			case 6:
				branco++;
				i++;
			break;
			
			case 7: //Caso seja sair, opção em branco
			break;
			
			default:
				printf("\nOpção inválida.\n\n");
				system("pause");
			break;
		}
		
		system("cls");
	}
	while(voto != 7);
	
	//Calculos das porcentagens de votos nulos e brancos
	nulo = (float)(nulo/i)*100.00;
	branco = (float)(branco/i)*100.00;
	
	//Impressão dos resultados
	printf("TOTAL DE VOTOS \n\nCandidato 1: %d. \nCandidato 2: %d. \nCandidato 3: %d. \nCandidato 4: %d", cand1, cand2, cand3, cand4);
	printf("\nVotos nulos: %.2f%%.", nulo);
	printf("\nVotos brancos: %.2f%%.", branco);
	
	getch();
}
