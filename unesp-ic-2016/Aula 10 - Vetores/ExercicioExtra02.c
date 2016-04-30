#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	//Declara��o de variaveis
	int num, i, resp, vet[10], ind=0;
	char loop = 's';
	
	//Atribui��o de acentua��o PT-BR
	setlocale(LC_ALL, "");
	
	//Definindo n�meros aleat�rios
	srand((unsigned)time(NULL));	
	
	//La�o principal
	do
	{
		for(i = 0; i < 10; i++)//Sorteando 20 numeros aleat�rios
		{
			vet[i] = rand()%21;
			//printf("%d ", vet[i]);  //Caso necess�rio, retirar este coment�rio para ver os n�meros sorteados
			fflush(stdin);
		}
		
		printf("\nDigite um n�mero entre 0 e 20:  ");
		scanf("%d", &resp);
		fflush(stdin);
		
		for(i = 0; i < 10; i++)
			if(resp == vet[i])
			{
				printf("\nO n�mero %d se encontra na posi��o %d.\n", vet[i], i);
				ind++;
			}
		
		if(ind == 0)
			printf("\nO n�mero escolhido n�o est� no vetor!\n");
			
		printf("\nDeseja continuar? s/n:  ");
		scanf("%c", &loop);
		
		ind = 0;
		
		system("cls");
	}
	while(loop == 's');
}
