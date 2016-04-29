#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "");
	
	int opc, meses_trab;
	float sal;
	
	//La�o principal
	do
	{
		system("cls");
		
		//Entrada principal de dados
		printf("Menu de Op��es\n\n");
		printf("1. Novo Sal�rio\n2. F�rias \n3. D�cimo Terceiro \n4. Sair\n");
		scanf("%d", &opc);
		fflush(stdin);
		
		system("cls");
		
		switch(opc)
		{
			case 1://Fun��o Novo sal�rio
				printf("Digite o valor do novo sal�rio: ");
				scanf("%f", &sal);
				fflush(stdin);
				if(sal < 350)
					sal *= 1.15;
				else if(sal >= 350 && sal < 600)
						sal *= 1.10;
					else if(sal >= 600)
							sal *= 1.05;
				
				system("cls");
				printf("O novo sal�rio � de R$%.2f.", sal);
				getch();
			break;
			
			case 2://Fun��o para calcular F�rias
				printf("Digite o valor do sal�rio: ");
				scanf("%f", &sal);
				fflush(stdin);
				sal *= 1.33;
				
				system("cls");
				printf("O saldo de f�rias � de R$%.2f.", sal);
				getch();
			break;
			
			case 3: //Fun��o para calcular D�cimo terceiro
				printf("Digite o valor do sal�rio: ");
				scanf("%f", &sal);
				fflush(stdin);
				
				printf("Digite o n�mero de meses trabalhados: ");
				scanf("%d", &meses_trab);
				fflush(stdin);
				
				sal = (sal/12) * (float)meses_trab; 
				
				system("cls");
				printf("O saldo de d�cimo terceiro � de R$%.2f.", sal);
				getch();
			break;
			
			case 4: //Op��o em branco para finalizar o programa caso opc seja 4
			break;
			
			default: 
				printf("Op��o inv�lida.\n\n");
				system("pause");
			break;
		}
	}
	while(opc != 4); //Enquanto a opc for diferente de 4, o la�o � rodado
	
}
