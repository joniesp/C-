#include <stdio.h>
#include <stdlib.h>

int main(int argv, char* argc[]){
	
	int numero;
	
	printf("Introduce el numero de asteriscos\n");
	scanf(" %i", &numero);
	
	for(int i = 0; i < numero; ++i)
		printf("*");
		

	return EXIT_SUCCESS;
	
	
	
	
	
	
	
	
	
	
}
