#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compteur(int argc, char *argv[])
{
	int i;
	int j;
	int coma=0;
	int comb=0;
	int comc=0;
	int len;
	
for(i = argc-1 ; i > 0 ; i--)
	{
		len = strlen(argv[i]);
		for(j = len-1 ; j >= 0 ; j--)
		{
			if(argv[i][j]>='a' && argv[i][j]<='z')
			{
				coma++;
			}
			else if(argv[i][j]>='A' && argv[i][j]<='Z')
			{
				comb++;
			}
			else
			{
				comc++;
			}
			
		}


	}
	
	printf("Il y a %d miniscules\n",coma);
	printf("Il y a %d majuscules\n",comb);
	printf("Il y a %d autres\n",comc+(argc-2));
	return(0);
}