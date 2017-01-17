#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	printf("Codigo\t-\tLetra");
	
	for(int i = 0; i < 256; i++){
		printf("%i\t-\t%c\n", i, i);
	}
	
	return EXIT_SUCCESS;
	
}
