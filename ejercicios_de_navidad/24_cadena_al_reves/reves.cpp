#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char frase[100];
  int distancia, a = -1;

  printf("Introduce una frase : \n");
  fgets(frase, 100, stdin);

  for(int i = 0; frase[i] != '\0'; ++i){
      ++a;
      distancia = a;
  }

  for(int b = 0; b <= distancia; ++b)
      printf("%c\n", frase[distancia - b]);

    return EXIT_SUCCESS;
}
