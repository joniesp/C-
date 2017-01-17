#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero, acumulador = 0, divisor = 1;

    printf("Introduce un numero:\n");
    scanf(" %i", &numero);

    do{
      if(numero % divisor == 0){
	acumulador = acumulador + divisor;
      }
      ++divisor;
    }while(divisor < numero);

    if(acumulador == numero)
	printf("El numero %i es perfecto\n", numero);

    else
	printf("El numero %i no es perfecto\n", numero);

    return EXIT_SUCCESS;
}
