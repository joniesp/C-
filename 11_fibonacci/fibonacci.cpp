#include <stdio.h>
#include <stdlib.h>

#define N   100
int main(int argc, char *argv[]){

  unsigned f[N];
  f[1] = f[0] = 1;

  for(int i = 2; i < N; i++)
      f[i] = f[i - 1] + f[i - 2];

  for(int i = 0; i < N; i++)
      printf("%i\n", f[i]);

    return EXIT_SUCCESS;
}
