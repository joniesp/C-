#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]){

  int datos[N] = {1,2,3,4,5};
  int *pi = datos;
  int *pf = datos + N - 1;
  int x;

  for(int i = 0; *pf > *pi; i++, *pf--, *pi++){
      x = *pi;
      *(pi) = *(pf);
      *(pf) = x;
  }

  for(int i = 0; i < N; ++i)
      printf("datos = %i\n", datos[i]);

  return EXIT_SUCCESS;
}

