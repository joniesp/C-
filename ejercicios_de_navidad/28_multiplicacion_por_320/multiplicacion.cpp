#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero, aux = 0, resultado = 0;

    printf("Introduce el numero a multiplicar\n");
    scanf(" %i", &numero);

    aux = numero << 6;
    for(int i = 0; i < 5; i++)
	resultado += aux;
    printf(" %i\n", resultado);


    return EXIT_SUCCESS;
}
