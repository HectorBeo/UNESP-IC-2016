//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int main()
{
	
	setlocale(LC_ALL, "");

	int i, idade=0, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;
	float perc;

	//laço for principal
	for(i = 0; i < 5; i++)
	{
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if(idade <= 15)
			cont1++;
		else if(idade > 15 && idade <= 30)
				cont2++;
			else if(idade > 30 && idade <= 45)
					cont3++;
				else if(idade > 45 && idade <=60)
						cont4++;
					else if (idade > 60)
						cont5++;
	}
	
	system("cls");
						
	printf("Menor de 15 anos: %d \nEntre 15 e 30 anos: %d \nEntre 30 e 45 anos: %d \nEntre 45 e 60 anos: %d \nMaior de 60 anos: %d", cont1, cont2, cont3, cont4, cont5);
	
	perc = ((float)cont1/(float)i)*100;
	printf("\n\nA porcentagem da faixa etária até 15 anos é de %.2f%%.", perc);
	
	perc = ((float)cont5/(float)i)*100;
	printf("\n\nA porcentagem da faixa etária acima de 60 anos é de %.1f%%.", perc);
	getch();		
}
