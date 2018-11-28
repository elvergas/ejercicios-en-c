/* Ejercicio 3.13 Unidad:3  SOLUCION DE PROBLEMAS CON ESTRUCTURAS DE SELECCION.
Programador: HECTOR ALFONSO CASAS TORRES  */

#include <stdio.h>

int main()
{
	int Xa,Ct;
	const int C2 = 20;
	const int C3 = 35;
	const int C4 = 40;
	const int C7 = 70;
	
	printf("\n\n ¿Cuantos Alumnos asistiran a la Excursion?\n");
	scanf("%i",&Xa);
	if ( Xa >= 100 )
	{
		Ct = ( Xa * C2 );
		printf("\n\n EL COSTO DEL BOLETO ES DE 20 PESOS CADA UNO\n");
	}
	else if ( Xa >= 50 && Xa <= 99 )
	{
		Ct = ( Xa * C3 );
		printf("\n\n EL COSTO DEL BOLETO ES DE 35 PESOS CADA UNO\n");
	}
	else if ( Xa >=20 && Xa <= 49 )
	{
		Ct = ( Xa * C4 );
		printf("\n\n EL COSTO DEL BOLETO ES DE 40 PESOS CADA UNO\n");
	}
	else if ( Xa <= 19 )
	{
		Ct = (Xa * C7);
		printf("\n\nEL COSTO DEL BOLETO ES DE 70 PESOS CADA UNO\n");
	}
	printf("%s %s %i %s","\n\nEl costo del viaje es de:\n"," $",Ct,"PESOS\n");
	return 0;
}


