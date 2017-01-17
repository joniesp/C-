#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, valor_menor;

    for(int i = 0; i < 10; i++){
	printf("Introduce un numero\n");
	scanf("%i", &numero);
	if(i == 0)
	  valor_menor = numero;
	    if(numero < valor_menor)
	      valor_menor = numero;
    }

    printf("el menor es: %i\n",valor_menor);

    return EXIT_SUCCESS;
}
