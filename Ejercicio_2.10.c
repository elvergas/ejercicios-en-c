/*Ejercicio 2.10: La Conagua requiere determinar el pago que debe realizar una persona por el total de metros cubicos que consume. Unidad:2, SOLUCION DE PROBLEMAS SECUENCIALES.
Programador:HECTOR ALFONSO CASAS TORRES.*/

#include<stdio.h>

void dat();
void info();

int main()
{
	dat();
	info();
	return 0;
}
float Mtrc,Cmtrs,Tp;
void dat()
{
	printf("\n\n¿Cual es el Total de Metros Cubicos que usted consumio?\n");
	scanf("%f",&Mtrc);
	printf("\n\n¿Cual es el Costo por Metro Cubico Consumido?\n");
	scanf("%f",&Cmtrs);
}
void info()
{
	Tp = Mtrc * Cmtrs;
	printf("%s %s %f %s","\n\nUsted debe de pagar el Total De: \n","$ ",Tp, " PESOS\n\n");
}


