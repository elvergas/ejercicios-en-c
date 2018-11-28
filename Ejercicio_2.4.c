/* Ejercicio Estacionamiento 2.4, Unidad 2, 
PROGRAMADOR: HECTOR ALFONSO CASAS TORRES*/

#include<stdio.h>
#include <math.h>
int main()
{ 
	double x;
	float r;
	double  k;
	printf("\n¿Cuanto Vale la Hora del estacionamiento?\n");
	scanf("%f",&r);
	printf("\n¿Cuantas Horas se ocupo el estacionamiento\n");
	scanf("%lf",&x);
	printf("%s %.1lf","\nEstas son las horas ya redondeadas", ceil(x));
	k = (r*x);
	printf("%s %lf %s","\nUsted debe de pagar",k,"Pesos\n");






	return 0;
}
