//Autor Hector Beolchi, Aulas de IC 2016 -UNESP -  **********   profº Veronica   LISTA DE LAÇOS 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{	
	
	int i, n, cont=0, cont2=0;
	
	for(n = 92; n <= 1478; n++)
	{
		
		for(i = 1; i <= n; i++)
		{
			if(n%i == 0)
				cont++;
		}
		
		if(cont <= 2)
			cont2 += n;
		
		cont = 0;
	}
	
	printf("%d", cont2);
	
	
	getch();
		


}
