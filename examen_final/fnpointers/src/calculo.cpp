#include "calculo.h"
#include <stdio.h>

int suma(int a, int b){return a + b;}
int resta(int a, int b){return a - b;}
int multiplica(int a, int b){return a * b;}
int divide(int a, int b){return a / b;}

void calcula(int a, int b){

  int (*p[])(int, int) = {
    &suma, &resta, &multiplica, &divide, NULL
  };

  for(int i = 0; (*p[i]) != NULL ; i++)
      printf("resultado %i\n", (*p[i])(a,b));
}

