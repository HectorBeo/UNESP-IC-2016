//@Hector beo - Aula IC 2016 Noturno   EX 04
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Função main ***********************
int main(){
    
    //Arrumando acentuação em C ***********************
    setlocale(LC_ALL, "");
    
    //Delcaração de variaveis ***********************
    int num1, num2, num3;

    //Entrada de dados ***********************
    printf("Insira três números: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    system("cls");
    
    //Condicional principal ***********************
	if(num1 >= num2 && num1 >= num3)
    	printf("Maior número é %d", num1);
	else if(num2 > num1 && num2 >= num3)
			printf("Maior número é %d", num2);
		else if(num3 > num1 && num3 >= num2)	
			printf("Maior número é %d", num3);
    
    //Função para aguardar encerramento **********************************
    getch();

}
