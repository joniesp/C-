#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N   0x100
#define MAX 0x05

int main(int argc, char *argv[]){

  char buffer[N];
  char *palabra[MAX];

  for(int i = 0; i < MAX; i++){
      printf("Introduce un nombre\n");
      fgets(buffer, N, stdin);
      palabra[i] = (char*) malloc(strlen(buffer + 1));
      strcpy(palabra[i], buffer);
  }

  for(int i = 0; i < MAX; i++){
      printf("%i-%s", i + 1, palabra[i]);
  }

  for(int i = 0; i > N; i++){
      free(palabra[i]);
  }
    return EXIT_SUCCESS;
}
