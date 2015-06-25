#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
	
	int len ;
	int p = 0;
	int somme=0 ;
	
	for(len = strlen(argv[1]); len>=0;len--)
	{
		if(argv[1][len]=='1')
		{
			somme += pow(2,p);
			
		}
		p++;
	}
	
	printf("<%s>2\n",argv[1]);
	printf("<%d>10\n",somme);
	return(0);
}