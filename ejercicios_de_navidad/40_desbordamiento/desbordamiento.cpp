#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	char nombre[15];
	
	printf("Introduce tu nombre y apellidos\n");
	fgets(nombre, 15, stdin);
	
	printf("Tu nombre es %s\n", nombre);
	
	return EXIT_SUCCESS;
}
