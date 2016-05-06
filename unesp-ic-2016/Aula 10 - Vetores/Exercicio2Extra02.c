#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "");	
	
	//Declaração de variaveis e constantes
	const int tam = 10;
	int v1[tam], v2[tam], i, j, achar=0, pos=0;
	
	//Laço para limapr o lixo de memória contido nos vetores
	for(i = 0; i < tam; i++)
	{
		v1[i] = -1;
		v2[i] = -1;
	}
	
	//Laço para captura dos dados do vetor v1
	for(i = 0; i < tam; i++)
	{
		printf("Digite um número inteiro positivo: ");
		scanf("%d", &v1[i]);
		fflush(stdin);	
	} 
	
	//Laço para verificar para posição do vetor v1	
	for(i = 0; i < tam; i++)
	{
		//Laço para verificar cada posição do v1 com cada posição do v2
		for(j = 0; j < tam; j++)
		{
			//Caso o número já esteja no v2
			if(v1[i] == v2[j])
			achar++;
		}
		
		//Se achar=0 quer dizer que a posição i de v1 não se encontra no v2
		if(achar == 0)
		{
			v2[pos] = v1[i];
			//Controle da quantidade de números adicionados ao v2
			pos++;
		}
		
		//Zerando variáveis para proximo loop
		achar = 0;
	}
	
	//Saida de dados
	for(i = 0; i < pos; i++)
	{
		printf("%d ", v2[i]);
	}
	
	getch();
}
