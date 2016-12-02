#include <stdio.h>
#include <stdlib.h>

int main(){

    int dni, pos;
    char letra[] = "TRWAGMYFPDXBNJZSQVHLCKE0";

    printf("Dni: ");
    scanf(" %i", &dni),

    printf("%c\n", letra[dni % 23]);
    
    return EXIT_SUCCESS;

}
