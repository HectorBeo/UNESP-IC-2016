//Autor @HectorBeo  -- Exercicios de aprendizado C - Aulas Unesp IC 2016
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese"); //Problema, usando setlocale precisa usar 5,6 e nao  5.6
	
	float prec[3], total=0;
	int i, qnt[3], ind=0, ind_pos;
	
	for(i = 0; i < 3; i++)
	{
		printf("Insira o valor do produto %d: ", i+1);
		scanf("%f", &prec[i]);
		fflush(stdin);
		printf("Insira a quantidade vendida do produto %d: ", i+1);
		scanf("%d", &qnt[i]);
		fflush(stdin);
	}
	system("pause");
	system("cls");
	
	for(i = 0; i < 3; i++)
	{	
		printf("Produto %d\n", i+1);
		printf("Quantidade vendida: %d.\n", qnt[i]);
		printf("Valor total: R$%.2f.\n\n", qnt[i]*prec[i]);
		total += (float)qnt[i]*prec[i];
		if(ind < qnt[i])
		{
			ind = qnt[i];
			ind_pos = i;
		}
		
	}
	
	printf("Valor total das vendas: R$%.2f\n\n", total);
	printf ( setlocale ( LC_ALL, "" ));
	
	printf("\nO produto %d foi o mais vendido e seu valor unitário é: R$%.2f\n\n", ind_pos+1, prec[ind_pos]);
	
	getch();
	
}
