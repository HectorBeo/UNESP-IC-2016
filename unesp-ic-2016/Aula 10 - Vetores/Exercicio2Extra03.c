#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int const tam = 6;
	int i, vet[tam], opc, num, pos, sair;
	
	//Laço principal
	do
	{
		printf("Insira a opção deseada: ");
		printf("\n\n1. Inserir um vetor. \n2. Alterar um número do vetor. \n3. Sair.\n");
		scanf("%d", &opc);
		
		system("cls");
		
		//Escolha de opção desejada
		switch(opc)
		{
			 // 1 para adicionar um vetor
			case 1:
				for(i = 0; i < tam; i++)
				{
					printf("Insira o %dº número do vetor: ");
					scanf("%d", &vet[i]);
					fflush(stdin);
				}
			break;
			
			// 2 para alterar um número no vetor, na posição desejada
			case 2: 
				printf("Qual posição do vetor deseja alterar? ");
				scanf("%d", &pos);
				fflush(stdin);
				printf("Qual o número a ser inserido? ");
				scanf("%d", &num);
				fflush(stdin);
				
				vet[pos] = num;
				
				//Mostra o vetor alterado
				printf("Novo vetor: ");
				for(i = 0; i < tam; i++)
					printf("%d, ", vet[i]);
					
				getch();
			break;
			
			//finalizar laço
			case 3:
				sair = 3;
			break;
			
			default:
				printf("Opção inválida.\n");
				system("pause");
		}
		
		system("cls");
	}
	while(sair != 3);
}
