//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.09
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//fun��o principal do programa *******************************
int main(){
	
	//Arrumando acentua��o em C
	setlocale(LC_ALL, "");

	//declara��es de variaveis *******************************
	float salMed, cred;
	
	//Entrada de dados *******************************
	printf("Insira o valor do saldo m�dio anual: ");
	scanf("%f", &salMed);
	
	system("cls");
	
	
	//Condicional principal do programa **********************************	
	if(salMed <= 200) //At� R$200, credito de 10% do saldo medio	
	{ 
		cred = salMed * 0.10; 
		printf("Saldo m�dio: %.2f. \nCredito especial dispon�vel: %.2f.", salMed, cred);
		
	}
	else if(salMed > 200 && salMed <= 300 ) //Entre R$200 e R$300, credito de 20% do saldo medio
		{
			cred = salMed * 0.20; 
			printf("Saldo m�dio: %.2f. \nCredito especial dispon�vel: %.2f.", salMed, cred);				
		}
		else if(salMed >= 300 && salMed <= 400) //Entre R$300 e R$400, credito de 25% do saldo medio
			{		
				cred = salMed * 0.25; 
				printf("Saldo m�dio: %.2f. \nCredito especial dispon�vel: %.2f.", salMed, cred);
			}
			else if(salMed > 400) // caso maior que R$400, credito concedido de 30%
				{
					cred = salMed * 0.30; 
					printf("Saldo m�dio: %.2f. \nCredito especial dispon�vel: %.2f.", salMed, cred);	
				}
				else //Condi��o de seguran�a (numeros negativos ou dados nulos para a opera��o
					printf("Desculpe, os dados informados s�o inv�lidos. Precione qualquer tecla para finalizar.");
				
	getch();
}		
