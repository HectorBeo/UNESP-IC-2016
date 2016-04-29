//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.23
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa                         <-----
int main(){
	setlocale(LC_ALL, "");
	
	//declaração de variaveis globais                         <-----
	int qnt, cod, precUni;
	float precNota, desc, precFinal;
	
	//entrada de dados                         <-----
	printf("Insira o codigo do produto e a quantidade a ser adquirida: ");
	scanf("%d%d", &cod, &qnt);
	
	//condicional principal                         <-----	
	if(cod < 0 || cod > 40) //verificação de codigo inválido
		printf("Codigo do produto inválido.");
	else //Caso seja um codigo válido	
	{
		//Verificação do codigo e calculo valor da nota                         <-----
		if(cod <= 10)
		{
			precUni = 10;
			precNota = qnt * precUni;
		}	
		else if(cod > 10 && cod <= 20)
			{
				precUni = 15;
				precNota = qnt * precUni;
			}	
			else if(cod > 20 && cod <=30)
				{
					precUni = 20;
					precNota = qnt * precUni;
				}		
				else	//codigo de 31 a 40
				{
					precUni = 30;
					precNota = qnt * precUni;
				}
		
		//Valor total da nota e desconto	                         <-----		
		if(precNota < 250)
			desc = 0.05;
		else if(precNota >= 250 && precNota < 500)
				desc = 0.10;
			else //Maior que 500
				desc = 0.15;
		
		//Saida final de dados                         <-----	
		system("cls");	
		printf("Valor unitário do produto: R$%d. \nQuantidade solicitada: %d. \nValor total: R$%.2f.\n", precUni, qnt, precNota);
		printf("Valor do desconto: %.0f%%. \nValor do desconto em cima da nota: R$%.2f.\n", desc*100, desc*precNota);
		printf("Valor a ser pago: R$%.2f.", precNota-(precNota*desc));
	
	}//Fim do condicional principal
	
	
	getch();
}
