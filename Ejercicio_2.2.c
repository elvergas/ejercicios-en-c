/* Ejercicio_2.2: Unidad 2, SOLUCION DE PROBLEMAS CON ESTRUCTURAS SECUENCIALES
Programador: HECTOR ALFONSO CASAS TORRES*/

#include <stdio.h>

float C_P;

int main()
 
{ 
	const float P_D = 19.45;
		float T_D;
            
		printf("Dame la Cantidad de pesos que quiera convertir a Dolares \n");
		scanf("%f",&C_P);
		T_D = (C_P / P_D);
	printf("%s %f %s", "Esta es la Cantidad de dolares obtenidos \n", T_D, " Dollars \n");
		return 0;
}
