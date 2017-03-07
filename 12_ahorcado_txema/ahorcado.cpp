#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define maxerrores 6

/********************************************************

		    AHORCADO


********************************************************/

const char *lista[] = {
  "hidroavion",
  "grefusa",
  NULL
};

const char *elegir(){
  int n_palabras;
  int random;

  for(n_palabras = 0; lista[n_palabras] != NULL; n_palabras++);

  random = rand() % n_palabras;

  return lista[random];
}

int resta(const char *adivinado, const char *ayuda, int vidas){

  int x;

  x = strcmp(adivinado, ayuda);

  if(x == 0){
    vidas -= 1;
    return vidas;
  }
  else
    return vidas;

}

bool distinta(const char *palabra1, const char *palabra2){

  return !!strcmp(palabra1, palabra2);

}

void titulo(){
  system("toilet -fpagga AHORCADO");
  printf("\n");
}

void muestra(const char *frase){
    char imprimir[100];
    sprintf(imprimir, "toilet -fpagga \" %s\"", frase);
    titulo();
    system(imprimir);
    printf("\n");
}

char usuario(){

  char letra_usuario;
  printf("Introduce una letra\n");
  scanf(" %c", &letra_usuario);
  return tolower (letra_usuario);

}

int main(int argc, char* argv[]){

  srand(time(NULL));
  const char *palabra = elegir();
  char *adivinado = (char*) malloc(strlen(palabra) + 1);
  char *ayuda = (char*) malloc(strlen(palabra) + 1);
  int vidas = maxerrores;
  int longitud = strlen(palabra);
  int w;

  memset(adivinado, '-', longitud);
  memset(ayuda, '-', longitud);

  adivinado[longitud] = '\0';
  ayuda[longitud] = '\0';

  do{
    char letra = usuario();

    for(int i = 0; i < strlen(palabra); i++){ // podemos poner tambien palabra[i] =! '\0';
      if(letra  == palabra[i])
	adivinado[i] = letra;
    }

  muestra(adivinado);
  vidas = resta(adivinado, ayuda, vidas);

  for(int i = 0; i < strlen(palabra); i++)
      ayuda[i] = adivinado[i];

  printf("Te quedan: %i vidas\n", vidas);

  }while(distinta(palabra, adivinado) && vidas);

  w = strcmp(adivinado, palabra);

  if(w == 0)
    printf("Has ganado\n");
  if(w != 0)
    printf("Has perdido\n");

  free(adivinado);
  free(ayuda);

  return EXIT_SUCCESS;

}


/***************************************************************
 *		  Esto es el algoritmo
 */

// 1.- Elegir una palabra.
// 2.- Poner un celda vacia por cada letra.
// 3.- Preguntarle una letra al usuario.
// 4.- Comparas la letra del usuario n con la letra de la palabra referencia y si son iguales lo pones en la celda n de la buscada
// 5.- nxx => paso 4(hasta la ultima letra)
// 6.- => Paso 1 hasta que la palabra este adivinada o lleguemos al limite de errores



