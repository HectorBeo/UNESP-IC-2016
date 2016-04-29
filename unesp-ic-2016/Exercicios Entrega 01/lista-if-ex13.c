//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.13
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa *******************************
int main(){
	
	//Arrumando acentuação em C
	setlocale(LC_ALL, "");

	//declarações de variaveis *******************************
	float prod, classif;
	
	//Entrada de dados ********************************
	printf("Insira o valor do produto a ser reajustado: R$");
	scanf("%f", &prod);
	
	system("cls");
	
	//Condicional de reajuste do valor ******************************
	if(prod > 0 && prod < 50)
		prod *= 1.05;
	else if(prod >= 50 && prod < 100)
			prod *= 1.10;
		else if(prod >= 100)
			prod *= 1.15;
			else
				printf("Informação inválida para efetuar o reajuste.\n");
			
	//Condicional de classificação do novo valor ******************************
	if(prod > 0) //Verificação se o valor do produto é válido
	{
		if(prod <= 80)
			printf("Valor reajustado: R$%.2f \nClassificação: Barato.", prod);
		else if (prod > 80 && prod <= 120 )
				printf("Valor reajustado: R$%.2f \nClassificação: Normal.", prod);
			else if(prod > 120 && prod <=200)
					printf("Valor reajustado: R$%.2f \nClassificação: Caro.", prod);
				else //Caso o valor esteja acima de R$200,00
					printf("Valor reajustado: R$%.2f \nClassificação: Muito caro.", prod);
	}
	else
		printf("Tecle para encerrar o programa.");

	getch();
}
