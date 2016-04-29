//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.19
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa                          <-----
int main(){
	//Declaração de variaveis                          <-----
	float alt;
	char sex;

	setlocale(LC_ALL, "");
	
	//Entrada de dados     
	fflush(stdin);       
	printf("Insira sexo (f ou m) e altura (ex: 164), respectivamente: ");
	scanf("%c%f", &sex, &alt);
	
	system("cls");
	
	//Condicional principal                       <-----
	if(sex != 'm' && sex != 'f')
		printf("Sexo inválido.");
	else 
	{
		if(sex == 'm'){
			alt = (72.7 * (alt/100)) - 58;
			printf("Peso ideal %.2f", alt);		
		}
		else if(sex == 'f'){
			alt = (62.1 * (alt/100)) - 44.7;
			printf("Peso ideal %.2f", alt);		
		}
	}
		
	getch();
}
