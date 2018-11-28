/* Ejercicio 3.14 Unidad:3 SOLUCION DE PROBLEMAS CON ESTRUCTURA DE SELECCION
Programador: HECTOR ALFONSO CASAS TORRES*/

#include<stdio.h>


int main()
{ 
	int X;
	printf("\n\n Deme su calificacion en el rango (0-10)\n");
	scanf("%i",&X);
	if ( X == 10 )
	{
		printf("\n\nFELICIDADES OBTUVISTE UNA A!!\n\n");
	}
	else if ( X == 9 ) 
	{
		printf("\n\nOBTUVISTE UNA B \n\n");
	}
	else if ( X == 8 )
	{
		printf("\n\n OBTUVISTE UNA C\n\n");
	}
	else if ( X >= 6 && X <= 7 )
	{
		printf("\n\n OBTUVISTE UNA D\n\n");
	}
	else if ( X >=0 && X <= 5 )
	{
		printf("\n\nOBTUVISTE UNA F\n\n");
	}
}

