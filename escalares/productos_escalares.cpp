#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

const char *letras_vectores[] = {

  "i",
  "j",
  "k",
  "l",
  "m",
  "n",
  "o",
  "p",
  "q",
  "r",
  NULL

};

int dimensiones(){

    int dimensiones;

    printf("Cuantas dimensiones tienen los vectores: ");
    scanf(" %i", &dimensiones);

    return dimensiones;
}

int valores_vectores(){

  int coordenada;

  printf("Introduce las coordenadas del vector : ");
  scanf(" %i", &coordenada);
  return coordenada;

}

int main(int argc, char* argv[]){

    int numero_dimensiones;
    int *vector_1;
    int *vector_2;
    int *vector_resultado;
    char *letras_coordenadas;

    numero_dimensiones = dimensiones();

    vector_1 = (int *) malloc(numero_dimensiones);
    vector_2 = (int *) malloc(numero_dimensiones);
    vector_resultado = (int *) malloc(numero_dimensiones);
    letras_coordenadas = (char *) malloc(numero_dimensiones);

    /* asigno datos del vector */

    for(int i = 0; i < numero_dimensiones; i++)
	vector_1[i] = valores_vectores();

    printf("\nAhora las del segundo vector\n\n");

    for(int i = 0; i < numero_dimensiones; i++)
	vector_2[i] = valores_vectores();

    /* ahora calculo el producto escalar */

    for(int i = 0; i < numero_dimensiones; i++)
	vector_resultado[i] = vector_1[i] * vector_2[i];

    /* ahora lo imprimo por pantalla */

    for(int i = 0; i < numero_dimensiones; i++){
	if (i == 0)
	    printf("El producto escalar es : %i %s", vector_resultado[i], letras_vectores[i]);
	if ( i =! 0)
	    printf(", %i %s\n", vector_resultado[i], letras_vectores[i]);
    }

    printf("\n");

    for(int i = 0; i < numero_dimensiones; i++){
	free(vector_1);
	free(vector_2);
	free(vector_resultado);
    }

    return EXIT_SUCCESS;

}
