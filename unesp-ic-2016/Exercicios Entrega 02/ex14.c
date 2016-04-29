//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	
	//INICIALIZAÇÃO DE VARIAVEIS
	int i, num, num2, peso, idade, altura, cont_idade=0, cont_idade_med=0, cont_peso=0, cont_olhos=0, cont_cabelo=0;
	char olhos, cabelo;
	float med_olhos=0;
	
	//ADICIONANDO SEMENTE ALEATÓRIA
	srand( (unsigned)time(NULL));
	
	//LAÇO 'FOR' QUE SORTEIO ALEATORIAMENTE IDADE, PESO, COR DE OLHOS E CABELOS.
	for(i = 0; i < 20; i++)
	{
		//DEFIINDO IDADE ALEATÓRIA
		idade = rand()%63 + 10;
		
		//DEFIINDO ALTURA ALEATÓRIA
		altura = rand()%27 + 135;
		
		//DEFININDO PESO ALEATÓRIO
		peso = rand()%27 + 35;
		
		//DEFININDO COR DO CABELO ALEATORIO
		num = rand()%49;
		if(num < 9)
			cabelo = 'L';
		else if(num >= 9 && num < 20)
				cabelo = 'P';
			else if(num >= 20 && num < 30)
					cabelo = 'C';
				else
					cabelo = 'R';
		
		//DEFININDO COR DOS OLHOS ALEATÓRIO
		num2 = rand()%39;
		if(num2 < 9)
			olhos = 'A';
		else if(num2 >= 9 && num2 < 20)
				olhos = 'V';
			else if(num2 >= 20 && num2 < 30)
					olhos = 'C';
				else
					olhos = 'P';
		
		//ADICIONANDO AOS CONTADORES	
		if(idade > 50 && peso < 60)
			cont_peso++;
		
		if(altura < 150)
		{
			cont_idade += idade;
			cont_idade_med++;	
		}	
		
		if(olhos == 'A')
			cont_olhos++;
			
		if(cabelo == 'R' && olhos != 'A')
			cont_cabelo++;
		
		//IMPRIMINDO DADOS PARA COMPARAÇÃO	
		printf("idade: %d  altura: %d   peso: %d   Cabelos: %c   Olhos: %c.\n", idade, altura, peso, cabelo, olhos);
	}
	//CALCULO DA MEDIA DE PESSAOS COM OLHOS AZUIS
	med_olhos = (cont_olhos/20.00)*100.00;
	
	printf("\n\nDados de estatística geral:\n\n");
	
	printf("Numero de pessoas com idade superior a 50 anos e peso menor que 60kg: %d.\n", cont_peso);
	printf("Media da idade de pessoas com altura inferior a 1.50m: %d.\n", cont_idade/cont_idade_med);
	printf("Porcentagem de pessoas com olhos azuis: %.1f%%.\n", med_olhos);
	printf("Quantidade de pessoas ruivas que não possuem olhos azuis: %d.\n", cont_cabelo);
	
	getch();
	
	
}
