#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, apagar = 0, i=7, bin[7] = {00000000};

    printf("Introduce un numero\n");
    scanf(" %i", &numero);

    do{
      bin[i] = numero % 2;
      numero /= 2;
      i--;
    }while(numero > 0);

    for(int a = 0; a < 8; a++)
	printf("%i", bin[a]);

    printf("\nDe los bits encendidos cual quieres apagar indica la posicion de 0 a 7\n");
    scanf("%i", &apagar);

    bin[apagar] = 0;

    for(int b = 0; b < 8; b++)
	printf("%i", bin[b]);

    return EXIT_SUCCESS;
}
