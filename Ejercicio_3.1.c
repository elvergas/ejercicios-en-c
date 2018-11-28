/*Ejercicio 3.1: Determinar si una persona puede votar con base a su edad, Unidad:3 SOLUCION DE PROBLEMAS CON ESTRUCTURAS SELECTIVAS. 
Programador: HECTOR ALFONSO CASAS TORRES*/

#include <stdio.h>
void ed();
int x;
int main()
{ 
	ed();
	if ( x >= 18)
		puts("Usted puede votar");
	if(x< 18)
		puts("Usted es menor de edad, No puede votar");
	
}
int x;
void ed()
{
	printf("\n\nDame tu edad en años\n");
	scanf("%i",&x);
}


