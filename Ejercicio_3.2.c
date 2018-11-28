/* Ejercicio 3.2: Determinar el sueldo de un trabajador con base a las horas trabajadas y el pago por hora, considerando que despues de las 40 horas, cada hora se considera excedente y se paga al doble. Unidad:3 SOLUCION DE PROBLEMAS CON ESTRUCTURAS SELECTIVAS. 
Programador: HECTOR ALFONSO CASAS TORRES.*/

#include<stdio.h>

int main()
{
	int H;
	float Ph,Pt;
	printf("\n\n¿Cuantas Horas usted ah Trabajado?\n");
	scanf("%i",&H);
	printf("\n\n¿Cuanto le pagan por hora?\n");
	scanf("%f",&Ph);
	if (H > 40)
	{
	Pt = (H * Ph) * 2;
	printf("%s %s %f %s"," Esta es tu paga mas tu comision por hora extra\n", " $",Pt," PESOS\n");
	}
	else
	{
	Pt = (H * Ph);
printf("%s %s %f %s","Esta es tu paga\n"," $",Pt," PESOS\n");
	}

}


