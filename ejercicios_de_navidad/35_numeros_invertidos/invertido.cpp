#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int numero;

	printf("Introduce un valor;\n");
	scanf(" %i",&numero);
	printf("El numero invertido es:\n");
	do{
		printf("%i", numero % 10);
		numero /= 10;
	}while(numero != 0);

	return EXIT_SUCCESS;

}
