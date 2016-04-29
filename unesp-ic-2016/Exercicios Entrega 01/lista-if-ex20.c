//@HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.20
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//função principal do programa                         <-----
int main(){
	
	//declaração de variaveis                         <-----
	int idade;
	
	setlocale(LC_ALL, "");
	
	//Entrada de dados                         <-----
	printf("Insira a idade do nadador: ");
	scanf("%d", &idade);	
	
	system("cls");
	
	//Condicional principal                         <-----
	if(idade >= 5 && idade <= 7)
		printf("Categoria: Infantil.");
	else if(idade >= 8 && idade <= 10)
			printf("Categoria: Juvenil.");
		else if(idade >= 11 && idade <= 15)
				printf("Categoria: Adolescente.");
			else if(idade >= 16 && idade <=30)
					printf("Categoria: Adulto.");
				else if(idade > 30)
						printf("Categoria: Sênior.");
					else //Caso idade seja menor que 5 ou qualquer caractere inválido
						printf("Idade inválida.");  
						
	getch();
		
}
