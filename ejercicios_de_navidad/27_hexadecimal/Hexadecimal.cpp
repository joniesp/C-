#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int numero;
	
	printf("Introduce un numero:\n");
	scanf(" %i", &numero);
	
	printf("%X\n", numero);

	return EXIT_SUCCESS;
}
