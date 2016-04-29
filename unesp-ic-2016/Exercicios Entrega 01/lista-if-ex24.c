//@BEO  -   HECTOR DE MATOS BEOLCHI  -  AULA IC 2016  - LISTA IF PARA ENTREGA EX.24
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//fun��o principal do programa *************************************
int main(){
	setlocale(LC_ALL, "");
	
	//declara��o de vari�veis *************************************
	char sit;
	float prec, precFinal, imp;
	int cat;
	
	//Entrada de dados *************************************
	printf("Insira o pre�o atual do produto: ");
	scanf("%f", &prec);
	fflush(stdin);
	system("cls");
	printf("Categorias \n1 - Limpeza \n2 - Alimenta��o \n3 - Vestu�rio \n\nInsira a categoria do produto: ");
	scanf("%d", &cat);
	fflush(stdin);
	system("cls");
	printf("Insira R para produtos refrigerados ou N caso contr�rio: ");
	scanf("%c", &sit);
	fflush(stdin);
	system("cls");
	
	if(prec < 0 || cat < 1 || cat > 3 || (sit != 'r' && sit != 'R' && sit != 'n' && sit != 'N')) //Verifica��o de dados inv�lidos
	{
		printf("Erro");
	}
	else //Caso sejam dados v�lidos
	{
		//Switch de escolha da categoria *************************************
		switch(cat)
		{
			case 1: //Caso limpeza
				if(prec <= 25)
					prec = prec * 1.05;
				else
					prec = prec * 1.12;
			break;
			
			case 2: //Caso alimentos
				if(prec <= 25)
					prec = prec * 1.08;
				else
					prec = prec * 1.15;
			break;
			
			case 3: //Caso vestu�rio
				if(prec <= 25)
					prec = prec * 1.10;
				else
					prec = prec * 1.18;
			break;
			
			default:
				printf("erro");
			break;	
		}
		
		//Condicional de defini��o do imposto a ser pago *************************************
		if(sit == 'r' || sit == 'R' || cat == 2)
		{
			imp = prec * 0.05;
			precFinal = prec*1.05;
		}
		else
		{
			imp = prec * 0.08;
			precFinal = prec*1.08;
		}
		
		//Condicional de classifica��o do novo pre�o *************************************
		if(precFinal <= 50)
			printf("Nova classifica��o: Barato. \nValor atualizado: R$%.2f. \nImposto a ser pago: R$%.2f \nValor total com imposto: %.2f.", prec, imp, precFinal);
		else if(precFinal > 50 && precFinal < 120)
				printf("Nova classifica��o: Normal. \nValor atualizado: R$%.2f. \nImposto a ser pago: R$%.2f \nValor total com imposto: %.2f. ", prec, imp, precFinal);
			else //Caso seja maior ou igual a 120
				printf("Nova classifica��o: Caro. \nValor atualizado: R$%.2f. \nImposto a ser pago: R$%.2f \nValor total com imposto: %.2f. ", prec, imp, precFinal);
	}
	
	getch();
}
