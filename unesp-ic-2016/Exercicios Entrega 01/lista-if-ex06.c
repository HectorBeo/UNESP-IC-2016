//@Hector beo - Aula IC 2016 Noturno ex 06
#include <stdio.h>
#include <conio.h>
#include <locale.h> 

//Fun��o main ***********************
int main()
{
    
    //Arrumando acentua��o em C ***********************
    setlocale(LC_ALL, "");
 
    //declara��o de variaveis *************************
    float num1, num2, resp;
    int opc;
    
    //Entrada de dados  *************************
    printf("Insira dois n�meros: "); 
    scanf("%f%f", &num1, &num2);
    
    printf("Escolha uma das opera��es a seguir: \n\n1. M�dia entre os dois n�meros. \n2. Diferen�a do maior pelo menor \n3. Produto entre os dois n�meros. \n\nDigite o n�mero da op��o desejada: ");
    scanf("%d", &opc);
       
    system("cls");
    
    switch(opc)
    {
        case 1: //Media entre dois numeros ****************************   
            resp = (num1 + num2) / 2;
            printf("A media entre os n�meros � %.2f.", resp); 
        break;
        
        case 2: //diferen�a entre a divis�o dos n�meros. ****************************
            if(num1 > num2) //Condicional para verificar qual n�mero � maior **************************** 
                resp = num1 - num2;
            else
                resp = num2 - num1;
            printf("A diferen�a do maior pelo menor � %2.f.", resp);    
        break;
        
        case 3: //Produto entre os numeros ****************************
            resp = num1 * num2;
            printf("O produto entre os dois n�meros � %.2f.", resp);
        break;
        
        default:  //Caso a op��o seja nula ****************************
            
            printf("Op��o inv�lida, digite qualquer tecla para encerrar o programa."); 
            
       
    }
    
    getch();

}
