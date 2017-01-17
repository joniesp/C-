#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num1, num2;

    printf("Cual es el primero numero:\n");
    scanf(" %i", &num1);

    printf("Cual es el segundo numero:\n");
    scanf(" %i", &num2);

    printf("%i, %i\n", num2, num1);

    return EXIT_SUCCESS;
}
