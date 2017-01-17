#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	char nombre[20];
	
	printf("Introduce tu nombre:\n");
	gets(nombre);
	
	printf("tu nombre es %s", nombre);
	
	return EXIT_SUCCESS;
}
