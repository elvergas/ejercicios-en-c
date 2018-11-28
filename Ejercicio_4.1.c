/*Ejercicio 4.1, Unidad 3 SOLUCION DE PROBLEMAS CON BUCLES
Programador:HECTOR ALFONSO CASAS TORRES*/

#include<stdio.h>

int main()
{
	float AU,SB;
	int C;
	const float IN = 0.10;
        C = 1;
	SB = 1500;
	while ( C <= 6 )
	{
		AU = ( SB * IN );
		SB = ( SB + AU );
		printf("%s %s %f %s","\n\n Este es tu Sueldo Anual\n\n", "$", SB, "PESOS\n\n");
		C = C+1;
	}
	printf("%s %s %f %s","\n\nEste es tu Salario total de tus 6 años trabajados \n\n", " $", SB,"PESOS\n\n");
			return 0;
			}


	
