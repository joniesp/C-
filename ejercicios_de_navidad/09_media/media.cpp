#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero, suma = 0;
    double media;

    for(int i = 0; i < 10; i++){
	printf("Introduce un numero: \n");
	scanf(" %i", &numero);
	suma += numero;
    }

    media = (double) suma / 10;

    printf("La media es : %lf\n", media);
    return EXIT_SUCCESS;
}
