#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{


	int somme ;
	char bon = '0';
	if (argc != 4)
	{
		printf("Erreur, recommencez entier (operation) entier \n");
	}
	else
	{
		
	
		if(argv[2][0]=='+')
		{
			somme = atof(argv[1])+atof(argv[3]);
		}
		else if(argv[2][0]=='-')
		{
			somme = atof(argv[1])- atof(argv[3]);
		}
		else if(argv[2][0]=='x')
		{
			somme = atof(argv[1])*atof(argv[3]);
		}
		else if(argv[2][0]=='/')
		{
			somme = atof(argv[1])/atof(argv[3]);
		}
		else
		{
			printf("Erreur, recommencez entier (operation) entier \n");
			bon = '1';
		}
		if(bon=='0')
		{
		printf("%s %s %s = %d \n",argv[1],argv[2],argv[3],somme);
		}
	}
	return(0);
	
}