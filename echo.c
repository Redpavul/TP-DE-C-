#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	
	int i;
	for(i=1; i<=argc-1; i++)
	{
		if(i==argc-1){
			printf("%s",argv[i]);
		}
		else
		{
			printf("%s ",argv[i]);
		}
	}
	printf("\n");
	return(0);
}