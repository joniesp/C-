#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 12345678;
    char dni[8];

    sprintf(dni, "%i", numero);

    return EXIT_SUCCESS;
}
