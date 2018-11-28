/*Ejercicio 3.9 Unidad Programador:Hector Casas*/

#include<stdio.h>

int main(){
	char t;
	int x = 1200;
        int y = 950;
        char o;

	printf("\n ¿Que tipo de seguro contratara?\n","A   Cobertura Amplia\n","B  Daños a Terceros\n");
	printf("Pulse Intro");
	scanf("%c",&t);
	switch (t)
	{
		case 'a': puts("\nUsted ah Elegido Cobertura Amplia");
			  puts("\nEl cargo es de $1,200.00");
			  printf("\nUsted Bebe con fecuencia?");
			  puts("\nc) Si");
			  puts("\nd) No");
			  puts("\nPulse Intro");
			  scanf("%c",&o);
			  switch (o){
				  case 'c' : puts("\nSe le aumentara un 10 por ciento al Cargo");
					     w = x * .10;
					     i = x + w;

