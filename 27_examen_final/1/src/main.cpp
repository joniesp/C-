#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "pila.h"


int main(int argc, char *argv[]){

  struct TPila pila;
  int numero;
  int cantidad;

  pila.cima = 0;


  do{
    printf("Introduce un numero\n");
    __fpurge(stdin);
    cantidad = scanf("%i", &numero);

    if(cantidad){
      push(&pila, numero);
      imprime_pila(pila);
    } else
	printf("%i\n", pop(&pila));

  }while(1);

  return EXIT_SUCCESS;
}

