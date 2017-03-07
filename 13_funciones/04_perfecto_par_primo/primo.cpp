#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){

  for(int i = 2; i < n; i++){
      if(n % i == 0)
	  return false;
  }
    return true;
}

int main(int argc, char *argv[]){

  int numero;

  printf("Numero: ");
  scanf(" %i", &numero);
  printf(" %i %sprimo.\n", numero, es_primo(numero)? "es ": "no es ");

    return EXIT_SUCCESS;
}
