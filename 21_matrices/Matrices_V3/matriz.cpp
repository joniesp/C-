#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 3
#define M 4
#define K 2

int pedir_matrizA(int matriz[N][K]){

  int n = 0;
  int k = 0;

  printf("Introduce Matriz 1 3x2 en orden\n");

  do{
    scanf(" %i", &matriz[n][k]);
    ++k;
      if(k > 1){
	k = 0;
	++n;
      }
  }while(n < 3);

  return matriz[N][K];

}

int pedir_matrizB(int matriz[K][M]){

  int k = 0;
  int m = 0;

  printf("Introduce Matriz 2 2x4 en orden\n");

  do{
    scanf(" %i", &matriz[k][m]);
    ++m;
      if(m > 3){
	m = 0;
	++k;
      }
  }while(k < 2);

  return matriz[K][M];

}


int main(int argc, char* argv[]){

  int A[N][K];
  int B[K][M];
  int C[N][M];

  A[N][K] = pedir_matrizA(A);
  B[K][M] = pedir_matrizB(B);

  bzero(C, sizeof(C));

  // Opero las matrices;

  for(int f = 0; f < N; f++)
    for(int c = 0; c < M; c++)
      for(int k = 0; k < K; k++)
	  C[f][c] += A[f][k] * B[f][k];


  for(int i = 0; i < N; i++){
    printf("\n%i", C[i][0]);
    printf("\t%i", C[i][1]);
    printf("\t%i", C[i][2]);
    printf("\t%i", C[i][3]);
  }

  printf("\n");

  return EXIT_SUCCESS;
}
