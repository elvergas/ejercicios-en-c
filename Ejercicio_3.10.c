/*Ejercicio 3.10 Unidad:3 SOLUCION DE PROBLEMAS CON SELECCION.
Programador: HECTOR ALFONSO CASAS TORRES*/

#include <stdio.h>
int main()
{
	float CK,PR;
	printf("\n\nIngrese su presupuesto para viajar\n");
	scanf("%f",&PR);
	printf("\n\n Ingrese el Costo por KM Recorrido\n");
	scanf("%f",&CK);
	if (PR >= ((CK * 750) * 2) && PR < ((CK * 800 ) * 2))
	{
		printf("\n\nUsted Puede ir a Mexico\n");
	}
	 
	
	else if (PR >= ((CK * 800) * 2 )  &&  PR <  ((CK * 1200) * 2))
	{
		printf("\n\n Usted Puede Viajar a Mexico o Acapulco\n");
	}
	else if (PR >= ((CK * 1200) * 2) && PR < ((CK * 1800) * 2))
	{ 
		printf("\n\n Usted Puede Viajar a Mexico, Acapulco o Puerto Vallarta");
	}
	else if (PR >= ((CK * 1800) * 2))
	{
		printf("\n\nUsted puede Viajar a Mexico, Acapulco, Puerto Vallarta o Cancun\n");
	}
	else 
	{
		printf("\n\n USTED NO CUENTA CON EL PRESUPUESTO SUFICIENTE PARA VIAJAR \n");
	}
}

				



	  
