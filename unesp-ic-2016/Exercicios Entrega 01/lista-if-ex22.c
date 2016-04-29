//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.22
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa                         <-----
int main(){
	setlocale(LC_ALL, "");
	
	//declaração de variaveis                         <-----
	int idade;
	float peso;
	
	//Entrada de dados                         <-----
	printf("Insira sua idade e peso, respectivamente: ");
	scanf("%d%f", &idade, &peso);
	
	system("cls");
	
	//Condicional principal                         <-----
	if(idade < 0 || idade > 120 || peso < 0 || peso > 400) //Verificação de entradas inválidas
		printf("Informações inválidas.");
	else //Caso sejam entradas válidas
	{
		if(idade < 20)
			if(peso <= 60)
				printf("Grupo de risco: 9 ");
			else if(peso > 60 && peso <= 90)
					printf("Grupo de risco: 8 ");
				else
					printf("Grupo de risco: 7 ");
					
		if(idade >= 20 && idade <= 50)
			if(peso <= 60)
				printf("Grupo de risco: 6 ");
			else if(peso > 60 && peso <= 90)
					printf("Grupo de risco: 5 ");
				else
					printf("Grupo de risco: 4");
					
		if(idade > 50)
			if(peso <= 60)
				printf("Grupo de risco: 3 ");
			else if(peso > 60 && peso <= 90)
					printf("Grupo de risco: 2 ");
				else
					printf("Grupo de risco: 1 ");	
	}
		
	getch();
}

