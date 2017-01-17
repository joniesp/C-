#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero = 9070478;
    char dni [7];

    sprintf(dni, "%i", numero);

    printf("%s\n", dni);
    return EXIT_SUCCESS;
}
