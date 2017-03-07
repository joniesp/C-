#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  double nota = 0;
  double *notas = NULL;
  double media = 0;
  int terminos = 0;

  printf("Introduce notas para terminar introduce una nota negativa\n");

  while(nota >= 0){
      scanf(" %lf %*1[,]", &nota);
	if(nota >= 0){
	  notas = (double *) realloc (notas, ++terminos * sizeof(double));
	  notas[terminos - 1] = nota;
	}
  }

  for(int i = 0; i < terminos; i++)
      media += notas[i];

  media /= terminos;

  printf("La nota es : %lf\n", media);

  free(notas);
  return EXIT_SUCCESS;
}

