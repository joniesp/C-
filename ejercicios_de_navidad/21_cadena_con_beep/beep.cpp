#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char cadena[100];
  int aux = 0;

  printf("Introduce una cadena: \n");
  scanf("%s", cadena);

  aux = sizeof(cadena);

  for(int i = 0; i<aux; i++)
      printf("%c\r", cadena[i]);
    return EXIT_SUCCESS;
}
