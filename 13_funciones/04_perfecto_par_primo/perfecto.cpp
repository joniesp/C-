#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int a){

    int suma = 0; 
    int divisor;

    for(int i = 1; i < a; i++){
	divisor = a % i;
	  if(divisor == 0)
	      suma += i;
    }

    if(a == suma)
	return true;
    else
	return false;
}


int main(int argc, char *argv[]){

  int numero;

  printf("Numero: ");
  scanf(" %i", &numero);
  printf(" %i %sperfecto.\n", numero, es_perfecto(numero)? "es ": "no es ");

    return EXIT_SUCCESS;
}
