#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int par[10], impar[10], verPar=0, verImpar=0, i, num;
	
	//La�o de repeti��o principal
	do
	{
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &num);
		fflush(stdin);
		
		//Caso o n�mero seja igual -1 ele pula todo o conte�do do lado e finaliza
		if(num != -1)
		{	
			//Caso o n�mero seja par e existe espa�o no vetor
			if(num%2 == 0 && verPar < 10)
			{
				par[verPar] = num;
				verPar++;
			}
			//Caso seja par, mas n�o haja espa�o no vetor
			else if(num%2 ==0 && verPar == 10)
					printf("\nO vetor par est� cheio!\n");
				//Caso seja impar e haja espa�o no vetor
				else if(num%2 != 0 && verImpar < 10)
				{
					impar[verImpar] = num;
					verImpar++;
				}
					//caso seja impar e n�o haja mais espa�o no vetor
					else if(num%2 != 0 && verImpar == 10)
						printf("\nO vetor �mpar j� est� cheio!\n");
		}
			
	}
	while(num != -1);
	
	//Sa�da de dados
	for(i=0; i < 10; i++)
	{
		printf("\nPosi��o %d \nVetor par %d \nVetor �mpar %d.\n", i ,par[i], impar[i]);	
	}	
	
	system("pause");
}
