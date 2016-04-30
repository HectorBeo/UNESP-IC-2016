#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	//Declaração de variaveis
	int num, i, resp, vet[10], ind=0;
	char loop = 's';
	
	//Atribuição de acentuação PT-BR
	setlocale(LC_ALL, "");
	
	//Definindo números aleatórios
	srand((unsigned)time(NULL));	
	
	//Laço principal
	do
	{
		for(i = 0; i < 10; i++)//Sorteando 20 numeros aleatórios
		{
			vet[i] = rand()%21;
			//printf("%d ", vet[i]);  //Caso necessário, retirar este comentário para ver os números sorteados
			fflush(stdin);
		}
		
		printf("\nDigite um número entre 0 e 20:  ");
		scanf("%d", &resp);
		fflush(stdin);
		
		for(i = 0; i < 10; i++)
			if(resp == vet[i])
			{
				printf("\nO número %d se encontra na posição %d.\n", vet[i], i);
				ind++;
			}
		
		if(ind == 0)
			printf("\nO número escolhido não está no vetor!\n");
			
		printf("\nDeseja continuar? s/n:  ");
		scanf("%c", &loop);
		
		ind = 0;
		
		system("cls");
	}
	while(loop == 's');
}
