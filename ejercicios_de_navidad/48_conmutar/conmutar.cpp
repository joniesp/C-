#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, conmutado = 0, i=7, bin[7] = {00000000};

    printf("Introduce un numero\n");
    scanf(" %i", &numero);

    do{
      bin[i] = numero % 2;
      numero /= 2;
      i--;
    }while(numero > 0);

    for(int a = 0; a < 8; a++)
	printf("%i", bin[a]);

    printf("\nDe los bits cual quieres conmutar indica la posicion de 0 a 7\n");
    scanf("%i", &conmutado);

    if(bin[conmutado == 1])
	bin[conmutado] = 0;
    else
      bin[conmutado] = 1;

    for(int b = 0; b < 8; b++)
	printf("%i", bin[b]);

    return EXIT_SUCCESS;
}
