#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *s = NULL;
	int sArgv;
	int i;
	int j;
	int a;
	int len;

	sArgv = 0;
	a = 0;


	for(i = 1 ; i < argc ; i++)
	{
		sArgv += strlen(argv[i]);
	}
	
	if(argc > 2)
	{
		sArgv += argc - 2;
	}
	
	s = malloc(sArgv * sizeof(char));//Ajouter 1 pour le \0 --> À vérifier...
	
	if(s == NULL)
	{
		exit(0);
	}
	for(i = argc-1 ; i > 0 ; i--)
	{
		len = strlen(argv[i]);
		for(j = len-1 ; j >= 0 ; j--)
		{
			s[a] = argv[i][j];
			a++;
		}
		s[a] = ' ';
		a++;
	}
	printf("%s\n", s);
	free(s);
	return(0);
}
