/*Ejercicio 3.6, Unidad 3, Programador:Hector Alfonso Casas Torres*/

#include<stdio.h>

int main()
{
	float x;
	float r;
	float k;
	printf("\n ¿Cual es el valor del articulo?\n");
	scanf("%f",&x);
	if (x >= 200)
	{
		r = x * .15;
		k = x - r;}
	else if (x >= 100 && x < 200)
	{
		r = x * .12;
		k = x - r;}
	else if ( x < 100 ) 
	{
		r = x * .10;
		k = x - r;}
printf("%s %1.f %s","\nSu descuento es de: ",r," Pesos\n");
printf("%s %1.f %s","\nEl total de su compra ya aplicando el descuento es de: \n",k," Pesos\n");
return 0;
}


