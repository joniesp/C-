#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i, nota;
  double media = 0;

  printf("Introduce notas mayores que 0 y menores que 10"
	 "para terminar introduce una nota menor que 0");

  system("clear");

  for(i = 0; nota >= 0; ++i){
    printf("Introduce nota:\n");
    scanf(" %i", &nota);
    media += nota;
  }

  media = media -(nota);
  i -= 1;
  media = media / (double) i;

  printf("La nota media es %lf\n", media);

    return EXIT_SUCCESS;
}
