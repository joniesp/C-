#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int resultado = 0, i, j, dimensiones = 0;

      printf("Introduce las dimensiones que tiene el vector\n");
      scanf(" %i", &dimensiones);

      for (int b = 0; b < dimensiones; ++b){
	    printf("Introduce la coordenada del vector 1\n");
	    scanf(" %i", &i);
	    printf("Introduce la coordenada del vector 2\n");
	    scanf(" %i", &j);

	    resultado += i*j;
      }

      printf("El resultado es %i\n", resultado);

    return EXIT_SUCCESS;
}
