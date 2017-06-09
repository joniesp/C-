#include <stdio.h>
#include <stdlib.h>
#include "punteros.h"

int main(int argc, char *argv[]){

  int numero = 4;
  void (*p)(int*);
  char operacion;

  while(1){
    printf("Introduce la operacion\n");
    scanf("%c", &operacion);
    if(operacion == '+')
      p = &incrementa;
    else
      if(operacion == '-')
	p = &decrementa;
      else
	if(operacion == ' ')
	  (*p)(&numero);

    getchar();
    printf("num: %i\n", numero);
  }



  return EXIT_SUCCESS;
}

