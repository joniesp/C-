#include <stdio.h>
#include <stdlib.h>


int main(int argv, char* argc[]){
	
	int lado, fila, columna;
	
	printf("Introduzca el lado del cuadrado\n");
	scanf(" %i", &lado);
	
	for(fila = 1; fila <= lado ; fila++){
		for(columna = 1; columna <= lado; columna++)
			printf("*");
			printf("\n");
	}
	
	
	return EXIT_SUCCESS;
	
}
