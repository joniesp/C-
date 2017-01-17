#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, valor_mayor;

    for(int i=0; i<10; i++){
	printf("introduce un numero\n");
	scanf(" %i", &numero);
	  if(valor_mayor < numero)
	    valor_mayor = numero;
    }
    printf("El numero mayor es %i\n", valor_mayor);
    return EXIT_SUCCESS;
}
