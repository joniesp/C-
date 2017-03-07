#include <stdio.h>
#include <stdlib.h>

bool es_par(int n){

  if(n % 2 == 0)
  return true;

  else
    return false;
}

int main(int argc, char *argv[]){

    int numero;

    printf("Numero: ");
    scanf(" %i", &numero);
    printf("Tu numero %ses par\n", es_par(numero) ?"": "no ");

    return EXIT_SUCCESS;
}
