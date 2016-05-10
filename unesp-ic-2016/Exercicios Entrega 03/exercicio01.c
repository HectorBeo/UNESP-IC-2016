#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	
	//Gerando uma semente aleatória para rand()
	srand((unsigned)time(NULL));

	int const tam = 4;
	int codProd[tam], estqProd[tam], i=0, codCliente, codPedido, qntPedido, verifProd=0;
	
	//Definição automática de estoque e códigos do produto;
	for(i = 0; i < tam; i++)
	{
		codProd[i] = i+1;
		estqProd[i] = rand()%80;
	}
	
	do
	{
		//Mostra de estoque para testes e comparação
		printf("Estoque atual: \n\n");
		for(i = 0; i < tam; i++)
		{
			printf("Produto %d:  %d peças em estoque.\n", codProd[i], estqProd[i]);
		}
				
		printf("\nInsira o código de cliente: ");
		scanf("%d", &codCliente);
		fflush(stdin);
		
		//Caso o código seja 0, pula direto para o final do loop e finaliza
		if(codCliente != 0)
		{
			//Definição do pedido
			printf("Insira o código do produto desejado: ");
			scanf("%d", &codPedido);
			fflush(stdin);
			
			//Verifica se o código do produto existe no vetor
			for(i = 0; i < tam; i++)
			{
				if(codPedido == codProd[i])
					verifProd++;
			}
			
			//Igualando o código do produto à posição do vetor (que inicia em 0)
			codPedido--;
			
			//Caso seja válido (1)
			if(verifProd == 1)
			{
				//Definição da quantidade desejada
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
				
				//Impressão de estoque atualizado
				printf("Estoque atual: \n\n");
				for(i = 0; i < tam; i++)
				{
					printf("Produto %d:  %d peças em estoque.\n", codProd[i], estqProd[i]);
				}
				getch();
			}
			else //Caso seja inválido (0), o laço volta
			{
				printf("Opção inválida.\n");
				system("pause");
			}
			
			verifProd = 0;
			
			system("cls");
		}
		
	}
	while(codCliente != 0);
}
