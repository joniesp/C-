#include <stdio.h>
#include <stdlib.h>

#define N 20

struct Tpolinomio {

  double coeficiente[N];
  int grado;

};

double eval(struct Tpolinomio polinomio, double x){

    double resultado = 0;
    int potencia = 1;

    for(int i = 0; i <= polinomio.grado; i++, potencia *= x)
       resultado += polinomio.coeficiente[i] * potencia;

    return resultado;
}

void imprime(double resultado){

    printf("El resultado es : %lf\n", resultado);
}

int main(int argc, char *argv[]){

  struct Tpolinomio polinomio;
  double x;

  system("clear");

  //Entrada de datos

  printf("Indicar el grado : ");
  scanf(" %i", &polinomio.grado);

  printf("Introduce los coeficientes : ");

  for(int i = 0; i<polinomio.grado; i++ )
      scanf(" %lf", &polinomio.coeficiente[i]);

  printf("Ahora introduce el valor de la x : ");
  scanf(" %lf", &x);

  //Imprimo resultados

  imprime(eval(polinomio,x));

    return EXIT_SUCCESS;
}
