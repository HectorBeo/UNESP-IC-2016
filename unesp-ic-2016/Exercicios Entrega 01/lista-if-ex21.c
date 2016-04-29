//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.21
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa                         <-----
int main(){
	
	setlocale(LC_ALL, "");
	
	//declaração de variaveis                         <-----
	float preco;
	int orig;
	
	//Entrada de dados                         <-----
	printf("Insira o preço e origem do produto, respectivamente: ");
	scanf("%f%d", &preco, &orig);
	
	system("cls");
	
	//Condicional principal                         <-----
	if(orig == 1)
		printf("Valor: %.2f. \nProcedência: Sul", preco);
	else if(orig == 2)
			printf("Valor: %.2f. \nProcedência: Norte", preco);
		else if(orig == 3)
				printf("Valor: %.2f. \nProcedência: Leste", preco);
			else if(orig == 4)
					printf("Valor: %.2f. \nProcedência: Oeste", preco);
				else if(orig == 5 || orig == 6)
						printf("Valor: %.2f. \nProcedência: Nordeste", preco);
					else if(orig >= 7 && orig <= 9)
							printf("Valor: %.2f. \nProcedência: Sudeste", preco);
						else if(orig >= 10 && orig <=20)
								printf("Valor: %.2f. \nProcedência: Centro-oeste", preco);
							else if(orig >= 21 && orig <=30)
									printf("Valor: %.2f. \nProcedência: Noroeste", preco); //No PDF, esta opção estava também como Nordeste! Mudei para Noroeste para evitar conflito
								else
									printf("Número de origem inválido.");
	
	getch();
}
