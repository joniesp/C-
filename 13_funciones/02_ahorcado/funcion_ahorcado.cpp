#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 20

char usuario(){

  char letra;

  printf("Introduce una letra\n");
  scanf(" %c", &letra);

  return letra;

}

char *comprobar(char letra, char letras[max]){

  for(int i = 0; i < max; i++){
      if(letras[i] == letra)
	printf("Error letra repetida introduce otra letra :\n");
	letras[i] = usuario();
  }
}

int almacenar(char letra, int a){

  char letras[max];
  char letra_1 = letra;

  letras[a] = letra_1;

  if(a >= 1){
    comprobar(letra_1, letras);
  }
  a++;
  return a;
}

int main(int argc, char *argv[]){

  int a = 0;

  for(int i = 0; i < max; i++){
      char letra = usuario();
      a = almacenar(letra, a);
  }
    return EXIT_SUCCESS;
}
