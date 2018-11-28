/* EJERCICIO 3.11 Unidad: 3  SOLUCION D EPROBLEMAS CON DESICIONES.
Programador: HECTOR ALFONSO CASAS TORRES*/

#include<stdio.h>

int main()
{
	int AN,B;
	printf("\n\n Dame tus años de Servicio en la empresa, Años cerrados\n");
	scanf("%i",&AN);
	if ( AN >=1 && AN <= 5)
	{
		B = ( AN * 100 );
		printf("%s %s %i %s","\n\nSu Bono en la Empresa es de:\n","$",B,"PESOS\n");
	}
	else
	{ 
		printf("\n\n Tu bono es de $ 1000 PESOS por haber superado 5 años o más\n");
	}
}


