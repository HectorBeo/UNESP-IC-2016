//@BEO  -   HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.25
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//fun��o principal do programa                         <-----
int main(){
	setlocale(LC_ALL, "");
	
	//declara��o de vari�veis                         <-----
	float hExtras, hFaltas, hTotal, premio; 
	
	//Entrada de dados                         <-----
	printf("Insira o n�mero de horas extras: ");
	scanf("%f", &hExtras);
	fflush(stdin);
	printf("Insira o n�mero de faltas: ");//Entrada em dias
	scanf("%f", &hFaltas);
	fflush(stdin);
	
	//Calculo de horas/faltas                         <-----
	hTotal = ((hExtras) - ((2.0/3.0) * hFaltas*8)); //Entrada de faltas � feita em dia, aqui converte em 8 horas por dia
	
	//Condicional principal                         <-----
	if(hExtras < 0 || hFaltas < 0)//verifica��o de dados inv�lidos
		printf("Dados inv�lidos");
	else //Caso os dados sejam v�lidos
	{
		if(hTotal < 600)
			premio = 100;
		else if(hTotal >= 600 && hTotal < 1200)
				premio = 200;
			else if(hTotal >= 1200 && hTotal <= 1800)
					premio = 300;
				else if(hTotal > 1800 && hTotal <= 2400)
						premio = 400;
					else //caso seja maior que 2400
						premio = 500;
		
		
		//Saida de dados                         <-----						
		printf("O valor da gratifica��o � de R$%.2f", premio);
	}
	
	getch();
	
}
