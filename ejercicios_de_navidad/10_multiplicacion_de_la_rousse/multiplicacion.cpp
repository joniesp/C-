#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num1, num2, resultado = 0;

    printf("Introduce el numero 1:\n"
	   "Introduce el numero 2:\n");
    scanf(" %i %i", &num1, &num2);

    do{
	if(num1 % 2 == 1)
	    resultado += num2;
	num1 = num1 / 2;
	num2 = num2 * 2;
    }while(num1 > 0);

    printf("El resultado es: %i\n", resultado);
    return EXIT_SUCCESS;
}
