//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "");
	
	float i = 0.00, sal = 0.00, filhos=0.00, maior_sal=0.00, sal_150=0.00, med_sal=0.00, med_filhos=0.00;
	
	while(sal >= 0)
	{
		printf("Digite o valor do salário: ");
		scanf("%f", &sal);
		fflush(stdin);
		
		if(sal >= 0) //Ele só acessa o restante do programa caso o salario seja positivo
		{
			printf("Digite a quantidade de filhos: ");
			scanf("%f", &filhos);
			fflush(stdin);
			
			//Guardando maior salario
			if(maior_sal < sal)
				maior_sal = sal;
				
			med_sal += sal; //Acumulo dos salario para fazer media
			med_filhos += filhos; //Acumulo do numero de filhos para fazer a media
			
			if(sal < 150.00) //caso o salario seja menor que 150, adiciona-se ao contador para calcular %
				sal_150++;
				
			i++;
			
			system("cls");
		}
	}
	
	system("cls");
	
	//Calculos para saida de dados
	med_sal = med_sal/i;
	med_filhos = med_filhos/i;
	sal_150 = (sal_150/i)*100;
	
	//Saida de dados
	printf("A média de salário da população é de R$ %.2f.\n", med_sal);
	printf("A média de filhos da população é de %.0f filhos por casal.\n", med_filhos);
	printf("O maior salário é de R$ %.2f.\n", maior_sal);
	printf("A porcentagem de pessoas que ganham até R$ 150,00 é de %.1f%%\n", sal_150);
	
	system("pause");
	
}
