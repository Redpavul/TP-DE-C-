#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
	int a ,b,s;
	//a=1;
	//b=2;
	printf("Table de multiplication de : \n") ;
	printf("Entrez un premier nombre : ");
	scanf("%d",&a);
	printf("Entrez un second nombre : ");
	scanf("%d",&b);
	s=a*b;
	printf("%d * %d = %d",a,b,s);
	return EXIT_SUCCESS ; 
}