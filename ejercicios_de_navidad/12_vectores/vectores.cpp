#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

  double iv1, jv1, iv2, jv2, modulo1, modulo2, angulo, resultado;

  printf("Introduce la coordenada i del vector 1:\n");
  scanf(" %lf", &iv1);

  printf("Introduce la coordenada j del vector 1:\n");
  scanf(" %lf", &jv1);

  printf("Introduce la coordenada i del vector 2:\n");
  scanf(" %lf", &iv2);

  printf("Introduce la coordenada j del vector 2:\n");
  scanf(" %lf", &jv2);

  printf("Introduce el angulo que forman en radianes:\n");
  scanf(" %lf", &angulo);

  // Bloque de operaciones

  modulo1 = iv1 * iv1 + jv1 * jv1;
  modulo1 = sqrt(modulo1);

  modulo2 = iv2 * iv2 + jv2 * jv2;
  modulo2 = sqrt(modulo2);

  resultado = (modulo1 * modulo2) * cos(angulo);

  printf("El producto escalar es : %lf\n", resultado);

     return EXIT_SUCCESS;
}
