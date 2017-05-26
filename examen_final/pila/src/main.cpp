#include <stdio.h>
#include <stdlib.h>

#include "pila.h"

int main(int argc, char *argv[]){

    struct TPila pila;
    struct TVector vector;

    pila.cima = 0;

    vector.x = 10;
    vector.y = 10;

    push(&pila, &vector);

    printf("x: %i\n", pila.pila[pila.cima - 1]->x);
    printf("y: %i\n", pila.pila[pila.cima - 1]->y);

    vector.x = 20;
    vector.y = 20;

    push(&pila, &vector);


    printf("x: %i\n", pila.pila[pila.cima - 1]->x);
    printf("y: %i\n", pila.pila[pila.cima - 1]->y);

    while(pop(&pila));

    return EXIT_SUCCESS;
}
