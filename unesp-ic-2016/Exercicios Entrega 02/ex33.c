//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   prof� Veronica   LISTA DE LA�OS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "");
	
	int opc, n1, n2, p1, p2;
	float med;
	
	//La�o principal
	do
	{
		printf("MENU PRINCIPAL\n \n1. M�dia Aritm�tica. \n2. M�dia ponderada. \n3. Sair\n");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1: //CASO SEJA MEDIA ARITMETICA
				system("cls");
				printf("Digite dois n�meros: ");
				scanf("%d %d", &n1, &n2);
				fflush(stdin);
				
				system("cls");
				
				med = (float)(n1+n2)/2;
				printf("A m�dia aritm�tica � %.2f.\n", med);
				
				system("pause");
			break;
			
			case 2: //CASO SEJA MEDIA PONDERADA
				system("cls");
				printf("Digite dois n�meros: ");
				scanf("%d %d", &n1, &n2);
				fflush(stdin);
				printf("Digite o peso de cada n�mero, respectivamente: ");
				scanf("%d %d", &p1, &p2);
				fflush(stdin);
				
				system("cls");
				
				med = (float)((n1*p1)+(n2*p2))/(float)(p1+p2);
				printf("A m�dia aritm�tica � %.2f.\n", med);
				fflush(stdin);
				
				system("pause");
			break;
			
			case 3: //SEJA SAIR, OP��O EM BRANCO
			break;
			
			default: //SENAO, OP��O INVALIDA
				system("cls");
				printf("Op��o inv�lida.");
				system("pause");
			break;
				
		}
		
		system("cls");
	}
	while(opc != 3); //ENQUANTO FOR DIFERENTE DE '3. SAIR'

}
