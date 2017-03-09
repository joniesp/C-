#include <stdio.h>
#include <stdlib.h>

#define N 3

int colocar_matriz(int matriz[N][N]){

  int i = 0;
  int j = 0;

  do{
      scanf(" %i", &matriz[i][j]);
      ++j;
	if(j > 2){
	  j = 0;
	  ++i;
	}
  }while(i <= 2);

  return matriz[N][N];
}

int main(int argc, char *argv[]){

    int matriz[N][N];
    int operador[N][N];
    int resultado[N][N];
    int numero;
    int i = 0;
    int j = 0;

  //Entrada de datos

  printf("Introduce la primera matriz en orden\n");
  matriz[N][N] = colocar_matriz(matriz);
  printf("Introduce la segunda matriz en orden\n");
  operador[N][N] = colocar_matriz(operador);

  //Operacion de la matriz

  for(i = 0; i < 1; ++i){
      resultado[0][0] = matriz[0][0] * operador[0][0] + matriz[0][1] * operador[1][0] + matriz[0][2] * operador[2][0];
      resultado[0][1] = matriz[0][0] * operador[0][1] + matriz[0][1] * operador[1][1] + matriz[0][2] * operador[2][1];
      resultado[0][2] = matriz[0][0] * operador[0][2] + matriz[0][1] * operador[1][2] + matriz[0][2] * operador[2][2];
  }

  for(i = 1; i < 2; i++ ){
      resultado[1][0] = matriz[1][0] * operador[0][0] + matriz[1][1] * operador[1][0] + matriz[1][2] * operador[2][0];
      resultado[1][1] = matriz[1][0] * operador[0][1] + matriz[1][1] * operador[1][1] + matriz[1][2] * operador[2][1];
      resultado[1][2] = matriz[1][0] * operador[0][2] + matriz[1][1] * operador[1][2] + matriz[1][2] * operador[2][2];
  }

  for(i = 2; i < 3; ++i){
      resultado[2][0] = matriz[2][0] * operador[0][0] + matriz[2][1] * operador[1][0] + matriz[2][2] * operador[2][0];
      resultado[2][1] = matriz[2][0] * operador[0][1] + matriz[2][1] * operador[1][1] + matriz[2][2] * operador[2][1];
      resultado[2][2] = matriz[2][0] * operador[0][2] + matriz[2][1] * operador[1][2] + matriz[2][2] * operador[2][2];
  }

  system("clear");
  printf("\nRESULTADO: \n");

  for(i = 0; i <= 2; ++i){
      printf("\n %i", resultado[i][0]);
      printf("\t %i", resultado[i][1]);
      printf("\t %i", resultado[i][2]);
   }

 printf("\n");

    return EXIT_SUCCESS;
}
