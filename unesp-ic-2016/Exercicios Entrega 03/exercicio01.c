#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	
	//Gerando uma semente aleat�ria para rand()
	srand((unsigned)time(NULL));

	int const tam = 4;
	int codProd[tam], estqProd[tam], i=0, codCliente, codPedido, qntPedido, verifProd=0;
	
	//Defini��o autom�tica de estoque e c�digos do produto;
	for(i = 0; i < tam; i++)
	{
		codProd[i] = i+1;
		estqProd[i] = rand()%80;
	}
	
	do
	{
		//Mostra de estoque para testes e compara��o
		printf("Estoque atual: \n\n");
		for(i = 0; i < tam; i++)
		{
			printf("Produto %d:  %d pe�as em estoque.\n", codProd[i], estqProd[i]);
		}
				
		printf("\nInsira o c�digo de cliente: ");
		scanf("%d", &codCliente);
		fflush(stdin);
		
		//Caso o c�digo seja 0, pula direto para o final do loop e finaliza
		if(codCliente != 0)
		{
			//Defini��o do pedido
			printf("Insira o c�digo do produto desejado: ");
			scanf("%d", &codPedido);
			fflush(stdin);
			
			//Verifica se o c�digo do produto existe no vetor
			for(i = 0; i < tam; i++)
			{
				if(codPedido == codProd[i])
					verifProd++;
			}
			
			//Igualando o c�digo do produto � posi��o do vetor (que inicia em 0)
			codPedido--;
			
			//Caso seja v�lido (1)
			if(verifProd == 1)
			{
				//Defini��o da quantidade desejada
				printf("Insira a quantidade desejada: ");
				scanf("%d", &qntPedido);
				fflush(stdin);
				
				system("cls");
				
				if(qntPedido <= estqProd[codPedido])
				{
					printf("Pedido realizado com sucesso!\n\n");
					estqProd[codPedido] -= qntPedido;
				}
				else
				{
					printf("Pedido cancelado por falta de estoque.\n\n");
				}
				
				//Impress�o de estoque atualizado
				printf("Estoque atual: \n\n");
				for(i = 0; i < tam; i++)
				{
					printf("Produto %d:  %d pe�as em estoque.\n", codProd[i], estqProd[i]);
				}
				getch();
			}
			else //Caso seja inv�lido (0), o la�o volta
			{
				printf("Op��o inv�lida.\n");
				system("pause");
			}
			
			verifProd = 0;
			
			system("cls");
		}
		
	}
	while(codCliente != 0);
}
