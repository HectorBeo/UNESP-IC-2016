//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   prof� Veronica   LISTA DE LA�OS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int idade, i, resp, idade_med=0, cont_reg=0, cont_bom=0, cont_otimo=0;
	float media_bom;
	
	//La�o principal
	for(i=0; i < 15; i++)
	{
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		printf("Digite opini�o em rela��o ao filme (3 - regular / 2 - bom / 1 - �timo): ");
		scanf("%d", &resp);
		
		if(resp == 1) //caso opiniao seja regular, alem do contador, ser� adicionado a idade a um acumulador para calcular media
		{
			idade_med += idade;
			cont_otimo++;
		}
			
		if(resp == 3) //caso seja otimo
			cont_reg++;
			
		if(resp == 2) //caso seja bom
			cont_bom++;
			
	}
		//calculo da media de pessoas que acharam o filme bom
		media_bom = ((float)cont_bom/(float)i)*100;
		
		//calculo da media da idade das pessoas que acharam o filme otimo
		idade_med = idade_med/cont_otimo;
		
		//saida de dados
		printf("\n\nESTAT�STICAS\n\n");
		printf("M�dia da idade das pessoas que responderam �timo: %d anos.\n", idade_med);
		printf("Quantidade de pessoas que responderam regular: %d \n", cont_reg);
		printf("Percentagem de pessoas que opinaram 'BOM': %.2f%%.", media_bom);
		
	getch();
}
