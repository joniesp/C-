#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)

const char *palabra[] = {
    "amalgama",
    "narcolepsia",
    "alcorque",
    "suricato",
    "amapola",
    "parguela",
    "bonita",
    "shuriken",
    "hermoso",
    "panenteismo",
    "nemesis",
    "anabasis",
    "antítesis",
    "origen",
    "artropodo",
    NULL
};

int validar(char adivinado[MAX], char adivinar[MAX], char ayuda[MAX], char letra, int errores){

    char adivinado1[MAX];
    char adivinar1[MAX];
    char ayuda1[MAX];
    char letra1;
    int errores1 = errores;
    int y;

    for(int i = 0; i < strlen(adivinado); i++){
	if(letra == adivinado[i])
	    adivinar[i] = letra;
    }

    y = strcmp(adivinar, ayuda);

    if(y != 0){
      printf("Acierto\n");
      return errores1;
    }
    if(y == 0){
      printf("Error\n");
      errores1 += 1;
      return errores1;
    }
}

int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX];
    char adivinar[MAX];
    char ayuda[MAX];
    char letras[MAX];
    char letra;
    int aleatoria;
    int errores = 0;
    int x;
    int z;
    int a = 0;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    bzero(adivinado, MAX);
    bzero(adivinar, MAX);
    bzero(ayuda, MAX);
    bzero(letras, MAX);
    strcpy(adivinado, elegida);

    for (int i=0; i<(int) strlen(elegida); i++){
        adivinar[i] = '-';
	ayuda[i] = '-';
    }

    for(int i = 0; i < MAX; i++){

	//entrada de datos y comprobacion

	z = strcmp(adivinado, adivinar);

	if(z != 0){
	printf("%s\n", adivinar);
	printf("\nIntroduce una letra\n");
	scanf(" %c", &letra);
	system("clear");
	letras[a] = letra;
	printf("%s\n", letras);
	errores = validar(adivinado, adivinar, ayuda, letra, errores);
	}

	a +=1;
	x = strcmp(adivinado, adivinar);

	//fin o continuacion de juego sustituyendo letra

	  if(x == 0){
	    printf("HAS GANADO\n");
	    return EXIT_SUCCESS;
	  }
	  else
	    if(errores == 5){
	      printf("HAS PERDIDO\n");
	      return EXIT_SUCCESS;
	    }

	    else
	      for(int i = 0; i < strlen(adivinado); i++){
		  if(letra == adivinado[i]){
		      adivinar[i] = letra;
		      ayuda[i] = adivinar[i];
		  }
	      }
    }

    return EXIT_SUCCESS;
}
