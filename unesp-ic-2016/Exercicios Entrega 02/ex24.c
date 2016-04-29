#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	srand( (unsigned)time(NULL) );
	
	char sex, resp;
	int perc_m, i, num, num2, cont_sim=0, cont_nao=0, cont_nao_m=0, cont_sim_f=0, cont_m=0, cont_f=0;
	
	for(i = 0; i < 10; i++)
	{
		//DEFINIÇÃO DO SEXO ALEATÓRIO
		num = rand()%50;
		if(num < 25)
		{
			sex = 'M';
			cont_m++;
		}
		else
		{
			sex = 'F';
			cont_f++;
		}
		
		//DEFINIÇÃO DA NOTA ATRIBUIDA AO PRODUTO
		num2 = rand()%50;
		if(num2 < 25)
		{
			resp = 'S';
			cont_sim++;
		}
		else
		{
			resp = 'N';
			cont_nao++;
		}
		
		if(sex == 'F' && resp == 'S')
			cont_sim_f++;
		
		if(resp == 'N' && sex == 'M')
			cont_nao_m++;
			
			printf("Sexo: %c Resposta: %c\n", sex, resp);
			
	}
	
	perc_m = ((float)cont_nao_m/(float)cont_m)*100.00;
	
	printf("\nESTATÍSTICAS\n\n");
	printf("Numero de respostas positivas: %d.\n", cont_sim);
	printf("Numero de respostas negativas: %d.\n", cont_nao);
	printf("Numero de homens que responderam: %d.\n", cont_m);
	printf("Numero de mulheres que responderam: %d.\n", cont_f);
	printf("Numero de mulheres que responderam sim: %d.\n", cont_sim_f);
	printf("Porcentagem de homens que responderam não: %d%%.", perc_m);
		
	getch();
}
