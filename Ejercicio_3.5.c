/* Ejercicio: 3.5 PROMEDIO DE INCENTIVO PARA ALUMNOS DEPENDIENDO LA EDAD Y SU PROMEDIO. UNIDAD 3 SOLUCION DE PROBLEMAS CON SELECCION.
Programador: HECTOR ALFONSO CASAS TORRES*/

#include <stdio.h>

int main()
{
	float PR;
	int ED,BC;
	printf("\n\n¿Cual es su edad?\n");
	scanf("%i",&ED);
	printf("\n\n¿Cual es su promedio?(En la escala 1-10)\n");
	scanf("%f",&PR);
	if ( ED > 18 )
	{
		if ( PR >= 9 && PR <= 10)
		{
			BC = 2000;
		}
		else if ( PR >= 7.5 )
		{ 
			BC = 1000;
		}
		else if ( PR >= 6 )
		{
			BC = 500;
		}
		else
		{
			printf("\n\n ECHALE MAS GANAS MIJO O MIJA\n");
		}
	}
	else if ( ED <= 18 )
	{
		if ( PR >= 18 && PR <= 10)
		{
			BC = 3000;
		}
		else if ( PR >=8 ) 
		{ 
			BC = 2000;
		}
		else if ( PR >= 6)
		{
			BC = 100;
		}
		else
		{
			printf("\n\nESTUDIALE MAS MIJO O MIJA\n");
		}
	}
	else 
	{
		printf("\n\nUsted no cuenta con el promedio\n");
	}
 
	printf("%s %s %i %s", "\n\n Esta es tu beca:\n", "$",BC," PESOS\n");
	return 0;
}

