//@Hector beo - Aula IC 2016 Noturno   EX 04
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Fun��o main ***********************
int main(){
    
    //Arrumando acentua��o em C ***********************
    setlocale(LC_ALL, "");
    
    //Delcara��o de variaveis ***********************
    int num1, num2, num3;

    //Entrada de dados ***********************
    printf("Insira tr�s n�meros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    system("cls");
    
    //Condicional principal ***********************
	if(num1 >= num2 && num1 >= num3)
    	printf("Maior n�mero � %d", num1);
	else if(num2 > num1 && num2 >= num3)
			printf("Maior n�mero � %d", num2);
		else if(num3 > num1 && num3 >= num2)	
			printf("Maior n�mero � %d", num3);
    
    //Fun��o para aguardar encerramento **********************************
    getch();

}
