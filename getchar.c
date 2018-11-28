
/* Funcion getchar() se utiliza para leer caracter por caracter */

#include <stdio.h>
int main()
{
	int car;
	int cuenta = 0;
	while ((car = getchar())!=EOF)
		if (car == 't') ++cuenta;
	printf("\n %d letras t \n", cuenta);
	return 0;
}

