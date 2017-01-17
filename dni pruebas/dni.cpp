#include <stdio.h>
#include <stdlib.h>

int main(){

    int dni, letra_dni;

    printf("introduce tu dni: ");
    scanf(" %i", &dni);

    letra_dni = dni % 23;

    printf("tu letra del dni ocupa el siguiente lugar \n"
	  " aqui van las letras \n"
	  "la tuya es %i", letra_dni + 1);
    printf("\nsi las letras fuesen en orden la tuya es la: %c\n", 'A' + letra_dni);


return EXIT_SUCCESS;



}
