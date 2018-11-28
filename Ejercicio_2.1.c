/*Ejercicio 2.1 Unidad 2, SOLUCION DE PROBLEMAS CON ESTRUCTURAS SECUENCIALES. 
Programador: HECTOR ALFONSO CASAS TORRES */

#include <stdio.h>

     float Base_t;
     float Altura_t;

 int main()
{
	float area;
	printf("¿Cual es la Base del Triangulo?\n");
	scanf("%f",&Base_t);
	printf("¿Cual es la Altura del Triangulo?\n");
	scanf("%f",&Altura_t);
	area = (Base_t * Altura_t) / 2;
	printf("%s %f %s","El Area de su Triangulo es\n", area," METROS CUADRADOS\n");
	
	return 0;
}

