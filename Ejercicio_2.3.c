/* Ejercicio_2.3 Unidad 2, SOLUCION DE PROBLEMAS CON ESTRUCTURAS SECUENCIALES.
Programador: HECTOR ALFONSO CASAS TORRES*/


#include <stdio.h>

int A_N;

int main()
{
	const int A_C = 2018;
	int E;
	printf("Dame el Año de Naciemiento\n");
	scanf("%d",&A_N);
	E = (A_C - A_N);
	printf("%s %d %s","La Edad del Empleado es \n", E, " Años \n");
			return 0;
			}
			

