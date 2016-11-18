#include <stdio.h>
#include <stdlib.h>

int main(){
    int decimal;

    printf("Decimal: ");
    scanf(" %i", &decimal); // & se lee la direccion de, y se llama unperchant

    // Hacer
    //	  Imprimir el resto decimal / 2
    //	  decimal = decimal
    // Mientras decimal > 0

    do {
	printf( "%i", decimal % 2);
	decimal /=2;
    } while (decimal>0);

    printf( "\n");

    return EXIT_SUCCESS;
}
