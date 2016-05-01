#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int vet[10], i, pol=0;
	
	//Captura manual do vetor
	for(i = 0; i < 10; i++)
	{
		printf("Insira um número inteiro");
		scanf("%d", &vet[i]);
	}
	
	//Laço que verifica se cada posição é igual a sua oposta
	for(i = 0; i < 5; i++)
	{
		if(vet[i] == vet[9-i])
			pol++; //Sempre que forem iguais pol adiciona um
	}
	
	system("cls");
	
	//Caso pol seja 5, quer dizer que as 5 primeiras posição são iguais ao inverso das 5 ultimas
	if(pol == 5)
		printf("O vetor é palíndromo.\n");
	else //Se ao menos 1 delas forem diferentes (pol = 4 ou menos) então não é palíndromo.
		printf("O vetor não é palíndromo.\n");
		
		system("pause");
}
