/* Ejercicio 2.6:Calcular la hipotenusa de un triangulo rectangulo, Unidad 2,
 SOLUCION DE PROBLEMAS SECUENCIALES 
Programador: HECTOR ALFONSO CASAS TORRES */



#include <stdio.h>
#include <math.h>
void var();
void Cal();
int main()
{
	var();
	Cal();
	return 0;
}
/* Se le pide los datos al Usuario */
float altura,base,hip,h;
void var()
	
{
	printf("\n\nDame la Altura del triangulo\n");
	scanf("%f",&altura);
	printf("\n\nDame la Base del triangulo\n");
	scanf("%f",&base);
	
}
/*Calculo de la operacion*/
void Cal()
{
	hip = ((altura * altura) + (base * base));
	h = sqrt(hip);
	printf("%s %f %s", "\n\nLa Hipotenusa de tu triangulo es: \n", h, "METROS CUADRADOS\n");

}

