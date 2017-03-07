#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero;

  printf("Tu polinomio tiene termino independiente?",
	 "\t Si = 1",
	 "\t No = 0");

  scanf(" %i", &numero);

  if(numero == 1)
    polinomio_termino();
  else
    polinomio();

    return EXIT_SUCCESS;
}
