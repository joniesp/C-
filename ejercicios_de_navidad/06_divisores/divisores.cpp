#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero, resto, divisor = 2;

    printf("Introduzca el numero: \n");
    scanf(" %i", &numero);

    do{
      resto = numero % divisor;
	if(resto == 0)
	    printf("el numero %i es divisor \n", divisor);
	++divisor;
    }while(divisor < numero);

    return EXIT_SUCCESS;
}
