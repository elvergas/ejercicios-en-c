/*Ejercicio 2.9 Determinar el costo que tendra una llamada telefonica con base en el tiempo que dura
 la llamada y en el costo por minuto. Unidad:2. SOLUCION DE PROBLEMAS SECUENCIALES.
Programador: HECTOR ALFONSO CASAS TORRES. */

#include <stdio.h>

void dat();
void inf();

int main()
{
	dat();
	inf();
	return 0;
}
int DU;
float CM,TP;

void dat()
{
	printf("\n\n¿Cuanto duro su llamada? (En Minutos) \n");
	scanf("%i",&DU);
	printf("\n\n¿Cual es el costo de la llamada (Por minuto)?\n");
	scanf("%f",&CM);
}
void inf()
{
	TP = DU * CM;
	printf("%s %s %f %s", "\n\nEl Costo de tu llamada es de: \n","$", TP," PESOS\n\n");
}

