/* Ejercicio 2.5, Unidad 2, SOLUCION DE PROBLEMAS SECUENCIALES.
Programador: HECTOR ALFONSO CASAS TORRES*/

#include <stdio.h>

float M2_P;
float CM2_P;
float T_P;

int main()
{
	printf("¿Cual es el precio por M2 de pintura?\n");
	scanf("%f",&CM2_P);
	printf("¿Cuantos M2 Pintara?\n");
	scanf("%f",&M2_P);
	T_P = (M2_P * CM2_P);
	printf("%s %s %f %s", "Usted debe de cobrar\n ","$ ", T_P, " Pesos Mexicanos\n");
	return 0;
}



