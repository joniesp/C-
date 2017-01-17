#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	
	int numero;
	
	do{
		printf("Introduce un numero del uno al diez\n");
		scanf(" %i", &numero);
	}while(numero<10 && numero > 1);
	
	
	return EXIT_SUCCESS;
	
	
	
}
