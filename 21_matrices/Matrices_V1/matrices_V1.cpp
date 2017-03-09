#include <stdio.h>
#include <stdlib.h>

#define N 3

// esto es una primera version que mejorare

int main(int argc, char *argv[]){

  int matriz[N][N];
  int operador[N][N];
  int resultado[N][N];
  int numero;
  int i = 0;
  int j = 0;

  printf("Introduce la primera matriz en orden pulsa intro a continuacion escribe la segunda terminada en ;\n");

    while(scanf(" %i %*[,] ", &numero)){
      if(j <= 2){
       matriz[i][j] = numero;
       ++j;
    }
      else{
	++i;
	j = 0;
	matriz[i][j] = numero;
	++j;
      }
    }



    while(scanf(" %i %*[,]", &numero)){
	  if(j <= 2){
	    operador[i][j] = numero;
	    ++j;
	  }
	  else{
	    ++i;
	    j = 0;
	    operador[i][j] = numero;
	    ++j;
	  }
    }

  for(i = 0, j = 0; i <= 2; ++i){
    resultado[i][0] = matriz[i][0] * operador[0][i] + matriz[i][0] * operador[1][i] + matriz[i][0] * operador[2][i];
    resultado[i][1] = matriz[i][1] * operador[0][i] + matriz[i][1] * operador[1][i] + matriz[i][1] * operador[2][i];
    resultado[i][2] = matriz[i][2] * operador[0][i] + matriz[i][2] * operador[1][i] + matriz[i][2] * operador[2][i];
  }

  for(i = 0, j = 0; i <= 2; ++i){
    printf("\n %i", resultado[i][j]);
    printf("\t %i", resultado[i][j + 1]);
    printf("\t %i", resultado[i][j + 2]);
  }

  printf("\n");

  return EXIT_SUCCESS;
}

