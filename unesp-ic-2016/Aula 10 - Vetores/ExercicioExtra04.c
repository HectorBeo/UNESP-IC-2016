#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int vet[10], i, aux, j;
	
	//Captura dos dados do vetor
	for( i = 0 ; i < 10 ; i++ )
	{
		printf("Insira um número inteiro: ");
		scanf("%d", &vet[i]);
	}
	
	//Vetor principal
	for( i = 0 ; i < 10 ; i++ ) //Laço que selecionado uma posição do vetor por vez
		for( j = 0; j < 10 ; j++ )//Laço que verifica se cada vetor é menor ou maior que os demais
			if(vet[i] > vet[j])
			{
				aux = vet[i]; 
				vet[i] = vet[j]; 
				vet[j] = aux; 
			}
	
	//Imprimindo dados
	printf("\n\nOrdem decrescente: \n");
	for( i = 0 ; i < 10 ; i++ )
	{
		printf("%d, ", vet[i]);	
	}
	
	system("pause");
	
}
