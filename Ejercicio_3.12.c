/* Ejercicio 3.12, Unidad: 3 SOLUCION DE PROBLEMAS CON DESICIONES 
Programador: HECTOR ALFONSO CASASTORRES */

#include<stdio.h>

int main()
{
	int H;
	float TP,PH;
	printf("\n\n¿Cuantas horas enteras usted ha Laborado?\n");
	scanf("%i",&H);
	printf("\n\n¿Cuanto le pagan la Hora laborada?\n");
	scanf("%f",&PH);
	if ( H >= 1 && H <= 40 ) 
	{
		TP = (H * PH);
	}
	else if (H >= 41 && H <= 45)
	{
		TP = ( H * PH ) * 2 ;
	}
	else if ( H >= 46 && H <= 50)
	{
		TP = ( H * PH) * 3;
	}
	else
	{
		printf("\n\n El Numero de Horas esta Fuera de Rango \n");
	}
	printf("%s %s %f %s","\n\nTu sueldo es:\n","$ ", TP, "PESOS \n");
	return 0;
}

