#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(int argc, char *argv[]){

    int hoy, ayer = 1, antes = 1;

    printf("%i %i", ayer, antes);

    for(int i = 0; i < N; i++){
	hoy = ayer + antes;
	printf("%i", hoy);
	antes = ayer;
	ayer = hoy;
    }
    return EXIT_SUCCESS;
}
