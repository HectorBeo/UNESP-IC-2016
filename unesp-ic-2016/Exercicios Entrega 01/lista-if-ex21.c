//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.21
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//fun��o principal do programa                         <-----
int main(){
	
	setlocale(LC_ALL, "");
	
	//declara��o de variaveis                         <-----
	float preco;
	int orig;
	
	//Entrada de dados                         <-----
	printf("Insira o pre�o e origem do produto, respectivamente: ");
	scanf("%f%d", &preco, &orig);
	
	system("cls");
	
	//Condicional principal                         <-----
	if(orig == 1)
		printf("Valor: %.2f. \nProced�ncia: Sul", preco);
	else if(orig == 2)
			printf("Valor: %.2f. \nProced�ncia: Norte", preco);
		else if(orig == 3)
				printf("Valor: %.2f. \nProced�ncia: Leste", preco);
			else if(orig == 4)
					printf("Valor: %.2f. \nProced�ncia: Oeste", preco);
				else if(orig == 5 || orig == 6)
						printf("Valor: %.2f. \nProced�ncia: Nordeste", preco);
					else if(orig >= 7 && orig <= 9)
							printf("Valor: %.2f. \nProced�ncia: Sudeste", preco);
						else if(orig >= 10 && orig <=20)
								printf("Valor: %.2f. \nProced�ncia: Centro-oeste", preco);
							else if(orig >= 21 && orig <=30)
									printf("Valor: %.2f. \nProced�ncia: Noroeste", preco); //No PDF, esta op��o estava tamb�m como Nordeste! Mudei para Noroeste para evitar conflito
								else
									printf("N�mero de origem inv�lido.");
	
	getch();
}
