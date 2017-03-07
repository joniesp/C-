#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  double entrada;
  double *vector = NULL;
  int terminos = 0;

  printf("Introduce las coordenadas de un vector separadas por comas\n");

  while(scanf("%*[,] %lf", &entrada)){
	vector = (double *) realloc (vector, ++terminos * sizeof(double));
	vector[terminos - 1] = entrada;
  }

  for (int i = 0; i < terminos; i++)
	printf(" %lf", vector[i]);

    return EXIT_SUCCESS;
}
