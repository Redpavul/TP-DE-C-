#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]);
float celsius( float f);

int main(int argc, char *argv[])
{
	
	int i ;
	float a;
	float b ;
	
	for(i= argc-1; i>0; i--)
	{
		a = atof(argv[i]);
		b = celsius(a);
		printf("La valeur en celsius de %f F est : %f C\n",a,b);
	}
	return(0);
}


float celsius( float f)
{
	return((f - 32)*(5.0 / 9.0));
}