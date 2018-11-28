/* Ejercicio 2.8: Determinar el tiempo que tarda una persona en llegar de una ciudad
 a otra en bicicleta, considerando que lleva una velocidad constante. Unidad:2 
 SOLUCION DE PROBLEMASSECUENCIALES. 
Programador: HECTOR ALFONSO CASAS TORRES */

#include <stdio.h>

void dat();
void op();

int main()
{ 
	dat();
	op();
	return 0;
}
float dkm,h;
int vc;
void dat()
{ 
	printf("\n\nDame la distancia que hay entre usted y la ciudad que ira en KM \n");
	scanf("%f",&dkm);
	printf("\n\nDeme su velocidad Constante a la que recorrera la distancia en Km/h \n");
	scanf("%i",&vc);
}
void op()
{
	h = dkm / vc;
	printf("%s %f %s","Las Horas que usted tardara en recorrer esos Kilometros son \n", h,"Horas \n");
}
