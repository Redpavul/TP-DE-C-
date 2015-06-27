#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ON '*'
#define OFF '.'
#define nb_amp 20
#define temps 200


void Temporisation(int n)
{
	clock_t start, stop ;

	n = n*CLOCKS_PER_SEC/1000 ;
	start = clock() ;           
	stop = start + n ;          

	while(clock() < stop)      
	{
	} 
}

int main(int argc, char *argv[])
{
	int boucle = 1;
	char amp[nb_amp] = {OFF};
	int i = 0;
	int j;
	int g;
	while(boucle == 1)
	{
		while(i<=nb_amp-1)
		{
			for(j = 0 ; j<=nb_amp-1;j++)
			{
				amp[j]=OFF;
			}
			amp[i]=ON;
			
			for(g = 0 ; g<=nb_amp-1; g++)
			{
				printf("%c",amp[g]);
			}
			fflush(stdout);
			Temporisation(temps);
			printf("\r");
			
			i++;
		}
		i =0;
	}
	
	return(0);
	
}



