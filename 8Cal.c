#include <stdio.h>
int main()
{
	int Cal[8];
	int i = 0;
	int cals =0;
	for (i=0; i<8; i++)
	{ 
		printf ("Dame las Calificaciones \n\n");
		scanf ("%d",&Cal[i]);
		cals += Cal[i];
		
	}
	
	printf("%s %d ","\n\n Este es tu promedio\n\n",(cals/8));
return 0;
}

