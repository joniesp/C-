#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void almacen(char letra){

	char letras[20];
	char ayuda[20];
	int a = 0;
	int x;
	letras[20] = '\0';

	ayuda[20] = '\0';

	x = strcmp(letras, ayuda);

	if(x == 0){
	  printf("Introduce otra letra esa esta repetida\n");
	}
	
	ayuda[a] = letra;
	letras[a] = letra;
	a++;
}

int main(int argc, char *argv[]){

	char letra;

	for(int i = 0; i < 3; i++){
	printf("Introduce una letra\n");
	scanf(" %c", &letra);

	almacen(letra);

	}
	return EXIT_SUCCESS;
}
