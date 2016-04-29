//@Hector beo - Aula IC 2016 Noturno ex 06
#include <stdio.h>
#include <conio.h>
#include <locale.h> 

//Função main ***********************
int main()
{
    
    //Arrumando acentuação em C ***********************
    setlocale(LC_ALL, "");
 
    //declaração de variaveis *************************
    float num1, num2, resp;
    int opc;
    
    //Entrada de dados  *************************
    printf("Insira dois números: "); 
    scanf("%f%f", &num1, &num2);
    
    printf("Escolha uma das operações a seguir: \n\n1. Média entre os dois números. \n2. Diferença do maior pelo menor \n3. Produto entre os dois números. \n\nDigite o número da opção desejada: ");
    scanf("%d", &opc);
       
    system("cls");
    
    switch(opc)
    {
        case 1: //Media entre dois numeros ****************************   
            resp = (num1 + num2) / 2;
            printf("A media entre os números é %.2f.", resp); 
        break;
        
        case 2: //diferença entre a divisão dos números. ****************************
            if(num1 > num2) //Condicional para verificar qual número é maior **************************** 
                resp = num1 - num2;
            else
                resp = num2 - num1;
            printf("A diferença do maior pelo menor é %2.f.", resp);    
        break;
        
        case 3: //Produto entre os numeros ****************************
            resp = num1 * num2;
            printf("O produto entre os dois números é %.2f.", resp);
        break;
        
        default:  //Caso a opção seja nula ****************************
            
            printf("Opção inválida, digite qualquer tecla para encerrar o programa."); 
            
       
    }
    
    getch();

}
