#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){
	
	char palabra1[20], palabra2[20];
	
	char juntas[50];
	
	printf("Introduce la primera palabra\n");
	scanf("%s", &palabra1);

	printf("Introduce la segunda palabra\n");
	scanf("%s", &palabra2);
	
	sprintf(juntas, "Estas son las dos palabras %s %s", palabra1, palabra2);

	printf("%s", juntas);
	
	return EXIT_SUCCESS;	
}
