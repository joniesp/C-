#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int fib[20];

  fib[0] = 1;

  fib[1] = 1;

  for(int i = 2; i<20; ++i)
      fib[i] = fib[i - 2] + fib[i - 1];

  for(int i = 0; i<20; ++i)
      printf("%i\n", fib[i]);

    return EXIT_SUCCESS;
}
