#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

	FILE* fichero;
	long int comienzo, fin, distancia;

	fichero = fopen("imprimir.txt", "ra");

	comienzo = ftell(fichero);
	fseek(fichero, 0L, SEEK_END);

	fin = ftell(fichero);

	distancia = fin - comienzo;

	distancia -= 1; //esto es porque si no imprimiria el \0 y no quiero que lo haga

	fseek(fichero, 0L, SEEK_SET);

	for(int i = 0; i <= distancia; ++i){
		printf("%c", fgetc(fichero));
	}
	printf("\n");
	fclose(fichero);

	return EXIT_SUCCESS;
}
