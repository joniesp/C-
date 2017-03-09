#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int matriz[3][3];
  int operador[3][3];
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

  i = 0;
  j = 0;

  printf("La segunda\n");

  do{
      scanf(" %i", &operador[i][j]);
      ++j;
	if(j > 2){
	  j = 0;
	  ++i;
	}
  }while(i <= 2);

  printf("\nMatriz 1");

  for(i = 0; i < 3; i++){
      printf("\n %i", matriz[i][0]);
      printf("\t %i", matriz[i][1]);
      printf("\t %i", matriz[i][2]);
  }

  printf("\nMatriz 2");

  for(i = 0; i < 3; i++){
      printf("\n %i", operador[i][0]);
      printf("\t %i", operador[i][1]);
      printf("\t %i", operador[i][2]);
  }
  
  printf("\n");

    return EXIT_SUCCESS;
}
