/* Ejercicio 3.3, el 14 de febrero una persona desea comprarle un regalo al ser querido que más aprecia en ese momento su dilema radica en que regalo puede hacerle, las alternativas que tiene son las siguientes: 
 * Regalo                    costo
 * Tarjeta                  $10 o menos 
 * Chocolates               $11 a 100
 * Flores                   $101 a 250
 * Anillo                   $251 a mas
 */

#include <stdio.h>

int main()
{
	float R;
	printf("\n\n¿Con Cuanto Dinero tiene Ahora mismo para gastar\n");
	scanf("%f",&R);
	if (R <= 10 )
	{
		printf("\n\nusted solo puede comprar una Tarjeta de Amor\n");
	}
	else if (R>=11 && R<=100)
	{
		printf("\n\nUsted Solo le puede comprar unos Chocolates\n");
	}
	else if (R >= 101 && R <= 250)
	{
		printf("\n\n Usted solo puede comprar unas Flores\n");
	}
	else
	{
		printf("Usted Puede Comprarle Un Anillo!!\n");
	}

}

