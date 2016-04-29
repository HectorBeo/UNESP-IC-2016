#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "");
	
	int opc, meses_trab;
	float sal;
	
	//Laço principal
	do
	{
		system("cls");
		
		//Entrada principal de dados
		printf("Menu de Opções\n\n");
		printf("1. Novo Salário\n2. Férias \n3. Décimo Terceiro \n4. Sair\n");
		scanf("%d", &opc);
		fflush(stdin);
		
		system("cls");
		
		switch(opc)
		{
			case 1://Função Novo salário
				printf("Digite o valor do novo salário: ");
				scanf("%f", &sal);
				fflush(stdin);
				if(sal < 350)
					sal *= 1.15;
				else if(sal >= 350 && sal < 600)
						sal *= 1.10;
					else if(sal >= 600)
							sal *= 1.05;
				
				system("cls");
				printf("O novo salário é de R$%.2f.", sal);
				getch();
			break;
			
			case 2://Função para calcular Férias
				printf("Digite o valor do salário: ");
				scanf("%f", &sal);
				fflush(stdin);
				sal *= 1.33;
				
				system("cls");
				printf("O saldo de férias é de R$%.2f.", sal);
				getch();
			break;
			
			case 3: //Função para calcular Décimo terceiro
				printf("Digite o valor do salário: ");
				scanf("%f", &sal);
				fflush(stdin);
				
				printf("Digite o número de meses trabalhados: ");
				scanf("%d", &meses_trab);
				fflush(stdin);
				
				sal = (sal/12) * (float)meses_trab; 
				
				system("cls");
				printf("O saldo de décimo terceiro é de R$%.2f.", sal);
				getch();
			break;
			
			case 4: //Opção em branco para finalizar o programa caso opc seja 4
			break;
			
			default: 
				printf("Opção inválida.\n\n");
				system("pause");
			break;
		}
	}
	while(opc != 4); //Enquanto a opc for diferente de 4, o laço é rodado
	
}
