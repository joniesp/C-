#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void instrucciones(){

  printf("Introduce donde vas a colocar la ficha por fila y columna"
	 "El jugador 1 tiene la ficha x y el jugador 2 tiene la ficha o");
  printf("\n\n");

}

void imprimir_tablero(char tablero[3][3], int j){

   for(int i = 0; i < 3; i++)
     for(j = 0; j < 3; j++){
	printf("%c", tablero[i][j]);
	if(j == 2)
	  printf("\n");
     }
}

void titulo(){

  system("clear");
  system("toilet -Fborder --metal -fpagga TRES EN RALLA");

}

void pedir_posicion(int *fila, int *columna){

  printf("Introduce la fila: \n");
  scanf(" %i", fila);
  printf("Introduce la columna: \n");
  scanf(" %i", columna);
  printf("\nFila = %i Columna = %i\n", *fila, *columna);
}

void sustituir(int fila, int columna, char tablero[3][3], char comprobante){

  if(tablero[fila - 1][columna - 1] == '-')
    tablero[fila - 1][columna - 1] = comprobante;
  else{
    printf("Posicion ocupada selecciona una nueva\n");
    pedir_posicion(&fila, &columna);
    sustituir(fila, columna, tablero, comprobante);
  }
}

bool comprobar_vertical(char tablero[3][3], char comprobante){

  for(int i = 0; i < 3; i++)
     if(tablero[0][i] == comprobante && tablero[1][i] == comprobante && tablero[2][i] == comprobante)
       return true;
     else
       return false;
}

bool comprobar_horizontal(char tablero[3][3], char comprobante){

  for(int i = 0; i < 3; i++)
     if(tablero[i][0] == comprobante && tablero[i][1] == comprobante && tablero[i][2] == comprobante)
       return true;
     else
       return false;
}

bool comprobar_cruzado(char tablero[3][3], char comprobante){

if(tablero[0][0] == comprobante && tablero[1][1] == comprobante && tablero[2][2] == comprobante)
	  return true;
	else
	  if(tablero[2][0] == comprobante && tablero[1][1] == comprobante && tablero[2][0])
		  return true;
	      else
		  return false;

}
