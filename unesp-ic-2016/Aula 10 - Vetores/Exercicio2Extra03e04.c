#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i, j, tam = 8, v1[tam], v2[tam], aux, opc, sair=0, num, cont=1;
	
	do
	{
		printf("Digite a opção desejada: ");
		printf("\n1. Inserir vetor. \n2. Inserir um valor do vetor. \n3. Deletar um valor no vetor. \n4. Mostrar vetor \n5. Sair.");
		scanf("%d", &opc);
		fflush(stdin);
		
		switch(opc)
		{
			case 1:
				for(i = 0; i < tam; i++)
				{
					printf("Insira um valor: ");
					scanf("%d", &v1[i]);
				}
				
				system("cls");
				
				for(i = 0; i < tam; i++)
				{
					for(j = 0; j < tam; j++)
					{
						if(v1[i] < v1[j])
						{
							aux = v1[j];
							v1[j] = v1[i];
							v1[i] = aux;
						}
					}
				}
				
				break;
			
			case 2:
				printf("Digite o número a ser inserido: ");
				scanf("%d", &num);
				fflush(stdin);
				
				break;
			
			case 3:
				break;
				
			case 4:
				for(i = 0; i < tam; i++)
					printf("%d ", v1[i]);
				getch();
				break;
			
			case 5:
				sair = 5;
				break;
			
			default:
				printf("Opção inválida.\n");
				system("pause");
				break;
		}
		
		system("cls");
	}
	while(sair != 5);
	
}
