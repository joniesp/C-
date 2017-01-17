#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

	printf("Introduce el numero: ");
	scanf(" %i", &numero);

	if(numero % 2 == 0)
	   printf("el numero es par");

	else
	  printf("el numero es impar");

  return EXIT_SUCCESS;
}
