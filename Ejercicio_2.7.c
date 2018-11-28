/* Ejercicio_2..7: Determine el costo del boleto de un viaje sencillo esto basado en 
 los KM por recorrer. Unidad: 2, SOLUCION DE PROBLEMAS SECUENCIALES.
Programador: HECTOR ALFONSO CASAS TORRES */

#include <stdio.h>
void var();
void op();

int main()
{
	var();
	op();
	return 0;
}
int km;
float ckm,tc;
void var()
{

	printf("\n\n¿Cuantos Kilometros usted recorrera?\n");
	scanf("%i",&km);
	printf("\n\n¿Cual es el precio por Kilometro?\n");
	scanf("%f",&ckm);
}
void op()
{ 
	tc = (km * ckm);
	printf("%s %s %f %s","\n\nEl precio del boleto es de \n","$ ", tc, " PESOS \n");
}

