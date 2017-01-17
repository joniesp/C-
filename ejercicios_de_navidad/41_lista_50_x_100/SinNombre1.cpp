#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	char nombres[50][100];
	
	for(int i = 0; i < 50; i++){
		printf("Introduce un nombre\n");
		fgets(nombres[i], 100, stdin);
	}
	
	return EXIT_SUCCESS;
}
