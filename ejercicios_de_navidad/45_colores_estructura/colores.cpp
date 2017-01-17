#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int azul, rojo, amarillo;
	
	printf("Ves el color azul (0/1)\n");
	scanf(" %i", &azul);
	
	printf("Ves el color rojo (0/1)\n");
	scanf(" %i", &rojo);
	
	printf("Ves el color amarillo (0/1)\n");
	scanf(" %i", &amarillo);

	if(rojo)
		if(amarillo)
			if(azul)
				printf("Blanco\n");
			else
				printf("Naranja\n");
		else
			if(azul)
				printf("Morado\n");
			else
				printf("Rojo\n");		
	else
		if(amarillo)
			if(azul)
				printf("Verde\n");
			else
				printf("Amarillo\n");
		else
			if(azul)
				printf("Azul\n");
			else
				printf("Negro\n");
	
	return EXIT_SUCCESS;
}
