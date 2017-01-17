#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  FILE *tubo;

  tubo = fopen("iberos.txt", "a" );

  printf("esta es mi prueba madafucka\n");
  fprintf(stdout, "funcionara o no\n");
  fprintf(tubo, "esto ya es por escribir alguna tonteria en memoria");

  fclose(tubo);
    return EXIT_SUCCESS;
}
