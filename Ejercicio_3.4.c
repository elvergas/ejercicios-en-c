/* Ejercicio_3.4: El dueño de un estacionamiento requiere un programa que le permita determinar cuanto tiempo debe cobrar por el uso del estacionamiento de sus clientes. Las tarifas que se tienen son las siguientes: las dos primeras horas a $5.00 c/u. Las siguientes tres a $4.00 c/u . las cinco siguientes a $3.00 c/u. Despues de diez horas el costo por cada una es de $2 pesos*/

#include <stdio.h>

int main()
{
	int Hr,Tt;
	printf("¿Cuantas Horas ocupo el estacionamiento?\n");
	scanf("%i",&Hr);
	if (Hr <= 2)
	{
		Tt = (Hr * 5);
		printf("%s %s %i %s","\n\n Su total es \n","$", Tt, " PESOS\n");
	}
	else if (Hr >= 3 && Hr <= 4)
	{
		Tt = (Hr * 4);
		printf("%s %s %i %s","\n\n Su total es \n", "$", Tt, "PESOS\n");
	}
	else if ( Hr >= 5 && Hr <= 10 )
	{
		Tt = (Hr * 3);
		printf("%s %s %i %s"," \n\nSu total es \n", "$", Tt, "PESOS\n");
	}
	else if ( Hr >= 11 )
	{
		Tt = ( Hr * 2);
		printf("%s %s %i %s","\n\n Su total es \n", "$", Tt, "PESOS\n");
	}
	else
	{ 
		Tt = ( Hr * 10000);
			printf("%s %s %i %s","\n\n Su total por ocupar solo una Hora es de:\n","$",Tt,"PESOS\n");
	}
}

