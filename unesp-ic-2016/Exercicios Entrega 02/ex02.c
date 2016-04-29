//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{	
	int i;
	float n, cont=0;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%f", &n);
	
	for(i = 1; i <= n; i++){
		cont += (float)1/i;
	}
	
	printf("%.2f \n\n", cont);
	
	system("pause");
}
