#include <stdio.h>
#include <stdlib.h>

#define a 0.1

double x_cuant(double x){

  return x * x;

}

int main(int argc, char *argv[]){

  double x;
  double x1;
  double punto;
  double resultado;

  printf("De que distancia quieres calcular la derivada ? : \n");
  scanf(" %lf", &x);

  x1 = x_cuant(x);
  punto = x + a;
  punto = x_cuant(punto);

  resultado = (punto - x1) / a;

  printf("%lf\n", resultado);

    return EXIT_SUCCESS;
}
