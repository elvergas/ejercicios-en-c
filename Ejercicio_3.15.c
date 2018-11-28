/*Ejercicio 3.15 Unidad: 3 SOLUCION DE PROBLEMAS CON ESTRUCTURA DE SELECCION.
Programador: HECTOR ALFONSO CASAS TORRES */

#include <stdio.h>

int main()
{
	int A;
	printf("\n\n Introduzca un numero del (1-7) y pulse Intro: \n\n");
	scanf("%i",&A);
	switch (A)
	{
		case 1:
			puts("\n\nLUNES!!\n\n");
			break;
		case 2 :
			puts("\n\nMARTES!!\n\n");
			break;
		case 3 : 
			puts("\n\nMIERCOLES!!\n\n");
			break;
		case 4 :
		       	puts("\n\nJUEVES!!\n\n");
			break;
		case 5:
			puts("\n\nVIERNES!!\n\n");
		        break;
		case 6 :
 	                puts("\n\nSABADO!!\n\n");
                        break;
		case 7 :
			puts("\n\nDOMINGO!!\n\n");
			break;
		default:
			puts("\n\n FUERA DE RANGO \n\n");
	}
}



	
