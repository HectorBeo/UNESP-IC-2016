#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int const tam = 6;
	int i, vet[tam], opc, num, pos, sair;
	
	//La�o principal
	do
	{
		printf("Insira a op��o deseada: ");
		printf("\n\n1. Inserir um vetor. \n2. Alterar um n�mero do vetor. \n3. Sair.\n");
		scanf("%d", &opc);
		
		system("cls");
		
		//Escolha de op��o desejada
		switch(opc)
		{
			 // 1 para adicionar um vetor
			case 1:
				for(i = 0; i < tam; i++)
				{
					printf("Insira o %d� n�mero do vetor: ");
					scanf("%d", &vet[i]);
					fflush(stdin);
				}
			break;
			
			// 2 para alterar um n�mero no vetor, na posi��o desejada
			case 2: 
				printf("Qual posi��o do vetor deseja alterar? ");
				scanf("%d", &pos);
				fflush(stdin);
				printf("Qual o n�mero a ser inserido? ");
				scanf("%d", &num);
				fflush(stdin);
				
				vet[pos] = num;
				
				//Mostra o vetor alterado
				printf("Novo vetor: ");
				for(i = 0; i < tam; i++)
					printf("%d, ", vet[i]);
					
				getch();
			break;
			
			//finalizar la�o
			case 3:
				sair = 3;
			break;
			
			default:
				printf("Op��o inv�lida.\n");
				system("pause");
		}
		
		system("cls");
	}
	while(sair != 3);
}
