#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char palin[40];
int longitud;
int inicio=0;
int fin;

int main(int argc, char *argv[]) {
	printf("\Ingrese una palabra:\n\n");
	gets (palin);
	
	longitud=strlen(palin);
	for (fin=longitud-1; palin[fin]==palin [inicio] && fin>=0; inicio++, fin--);
	
	if(inicio==longitud)
	{
		printf("\nEs palindromo");
	}
	else
	   printf("\nNo es palindromo");
}
