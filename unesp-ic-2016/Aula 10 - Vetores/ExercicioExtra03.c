#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int par[10], impar[10], verPar=0, verImpar=0, i, num;
	
	//Laço de repetição principal
	do
	{
		printf("Digite um número inteiro: ");
		scanf("%d", &num);
		fflush(stdin);
		
		//Caso o número seja igual -1 ele pula todo o conteúdo do lado e finaliza
		if(num != -1)
		{	
			//Caso o número seja par e existe espaço no vetor
			if(num%2 == 0 && verPar < 10)
			{
				par[verPar] = num;
				verPar++;
			}
			//Caso seja par, mas não haja espaço no vetor
			else if(num%2 ==0 && verPar == 10)
					printf("\nO vetor par está cheio!\n");
				//Caso seja impar e haja espaço no vetor
				else if(num%2 != 0 && verImpar < 10)
				{
					impar[verImpar] = num;
					verImpar++;
				}
					//caso seja impar e não haja mais espaço no vetor
					else if(num%2 != 0 && verImpar == 10)
						printf("\nO vetor ímpar já está cheio!\n");
		}
			
	}
	while(num != -1);
	
	//Saída de dados
	for(i=0; i < 10; i++)
	{
		printf("\nPosição %d \nVetor par %d \nVetor ímpar %d.\n", i ,par[i], impar[i]);	
	}	
	
	system("pause");
}
