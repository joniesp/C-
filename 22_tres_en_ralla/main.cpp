#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define N 3

int main(int argc, char *argv[]){


  char tablero[N][N];
  char caracter;
  int j;
  int fila;
  int columna;
  int turno = 1;
  int jugador;
  bool victoria;

  titulo();
  memset(tablero, '-', 9);
  printf("El jugador 1 = x y el jugador 2 = 0\n");

  while(1){

  if(turno % 2 == 1){
    caracter = 'x';
    jugador = 1;
  }

  else{
    caracter = 'o';
    jugador = 2;
  }

  printf("Turno del jugador %i\n", jugador);
  pedir_posicion(&fila, &columna);

  sustituir(fila, columna, tablero, caracter);
  imprimir_tablero(tablero, j);
  victoria = comprobar_vertical(tablero, caracter);

  if(victoria == true){
      printf("El jugador %i ha ganado\n", jugador);
      return EXIT_SUCCESS;
  }
  else
    victoria = comprobar_horizontal(tablero, caracter);
      if(victoria == true){
	  printf("\nEl jugador %i ha ganado\n", jugador);
	  return EXIT_SUCCESS;
      }
      else
	victoria = comprobar_cruzado(tablero, caracter);
	  if(victoria == true){
	      printf("El jugador %i ha ganado\n", jugador);
	      return EXIT_SUCCESS;
	  }

      ++turno;

     if(turno == 10){
       printf("Es un empate\n");
       return EXIT_SUCCESS;
     }
  }
}

