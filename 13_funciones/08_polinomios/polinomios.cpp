#include <stdio.h>
#include <stdlib.h>

double potencia(double x, double aux, int exponente){

    for(int i = 0; i < exponente - 1 ; i++)
	  aux *= x;

    return aux;
}

void titulo(){

  system("clear");
  system("toilet -Fborder -fpagga POLINOMIOS");

}

int main(int argc, char *argv[]){

  double incognita;
  double *matriz = NULL;
  double *polinomio = NULL;
  double x;
  double resultado;
  double aux;
  int resta;
  int terminos = 0;
  int exponente;

  //pedir datos y mostrar titulo

  titulo();
  printf("Introduce el valor de x : \n");
  scanf(" %lf", &x);
  printf("Introduce el polinomio en orden separado por y pon 0 si no hay termino independiente al final , para termina introduce ; \n");

  while(scanf(" %lf %*[,]", &incognita)){
	matriz = (double *) realloc (matriz, ++terminos * sizeof(double));
	matriz[terminos - 1] = incognita;
  }

  //operar datos

  resta = terminos;

  polinomio = (double*) malloc(terminos * sizeof(double));

  for(int i = 0; i <= terminos; i++, --resta)
      polinomio[i] = matriz[resta - 1];

  exponente = terminos -1;
  aux = x;

  for(int i = terminos - 1; i >= 0; i--){
      if(exponente == 1){
	  resultado += polinomio[i] * x;
	    exponente--;
      }

      else
	if(exponente == 0){
	    resultado += polinomio[i];
	    exponente--;
	}

	else{
	  resultado += potencia(x,aux,exponente) * polinomio[i];
	  exponente--;

	}
  }

  printf("\n El resultado es : %lf", resultado);
  printf("\n");

  free(matriz);
  free(polinomio);

    return EXIT_SUCCESS;
}
