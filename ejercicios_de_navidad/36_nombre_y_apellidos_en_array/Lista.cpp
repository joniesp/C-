#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	int numero, fila, columna;
	
	printf("Introduce el numero de lista: \n");
	scanf(" %i", &numero);
	
	if(numero > 170)
		printf("Error introduzca un numero igual o menor de 170");
	
	if(numero / 17 <= 1)
		fila = 1;
	
	if(numero == 170)
		fila = 10;
	else
		fila = (numero / 17) + 1;
	
	if(numero % 17 == 0)
		columna = 17;
	else
		columna = numero % 17;
		
	printf("La fila es %i\n y la columa %i", fila, columna);
	
	return EXIT_SUCCESS;
}
