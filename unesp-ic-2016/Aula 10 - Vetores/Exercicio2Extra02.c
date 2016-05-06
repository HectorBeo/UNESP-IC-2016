#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "");	
	
	//Declara��o de variaveis e constantes
	const int tam = 10;
	int v1[tam], v2[tam], i, j, achar=0, pos=0;
	
	//La�o para limapr o lixo de mem�ria contido nos vetores
	for(i = 0; i < tam; i++)
	{
		v1[i] = -1;
		v2[i] = -1;
	}
	
	//La�o para captura dos dados do vetor v1
	for(i = 0; i < tam; i++)
	{
		printf("Digite um n�mero inteiro positivo: ");
		scanf("%d", &v1[i]);
		fflush(stdin);	
	} 
	
	//La�o para verificar para posi��o do vetor v1	
	for(i = 0; i < tam; i++)
	{
		//La�o para verificar cada posi��o do v1 com cada posi��o do v2
		for(j = 0; j < tam; j++)
		{
			//Caso o n�mero j� esteja no v2
			if(v1[i] == v2[j])
			achar++;
		}
		
		//Se achar=0 quer dizer que a posi��o i de v1 n�o se encontra no v2
		if(achar == 0)
		{
			v2[pos] = v1[i];
			//Controle da quantidade de n�meros adicionados ao v2
			pos++;
		}
		
		//Zerando vari�veis para proximo loop
		achar = 0;
	}
	
	//Saida de dados
	for(i = 0; i < pos; i++)
	{
		printf("%d ", v2[i]);
	}
	
	getch();
}
