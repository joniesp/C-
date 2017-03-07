#include <stdio.h>
#include <stdlib.h>

int multiplica(int a, int b){

  return a*b;
}

int main(int argc, char *argv[]){

  int a = getchar() - '0';
  int b = getchar() - '0';

  printf("%ix%i=%i\n", a, b, multiplica(a,b));
    return EXIT_SUCCESS;
}
