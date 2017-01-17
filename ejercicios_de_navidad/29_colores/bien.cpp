#include <stdio.h>
#include <stdlib.h>

#define si 1
#define no 2

int main(){

    int color_1, color_2, color_3;

    system("clear");
    printf("¿Ves el color azul?: indica el numero \n"
	  "\t1. si \n"
	  "\t2. no \n"
	  );

    scanf(" %i", &color_1);
    system("clear");

    printf("¿Ves el color rojo?: indica el numero \n"
	  "\t1. si \n"
	  "\t2. no \n"
	  );

    scanf(" %i", &color_2);
    system("clear");

    printf("¿Ves el color amarillo?: indica el numero \n"
	  "\t1. si \n"
	  "\t2. no \n"
	  );

    scanf(" %i", &color_3);
    system("clear");

    if (color_1 == si and color_2 == si and color_3 == no){
	printf("tu color es morado \n");
    }
    if (color_1 == si and color_2 == no and color_3 == si){
	printf("tu color es verde \n");
    }
    if (color_1 == no and color_2 == si and color_3 == si){
	printf("tu color es naranja \n");
    }
    if (color_1 == si and color_2 == si and color_3 == si){
	printf("tu color es marron \n ");
    }
    if (color_1 == no and color_2 == no and color_3 == no){
	printf("tu color es negro \n ");
    }
    if (color_1 == si and color_2 == no and color_3 == no){
	printf("tu color es azul");
    }
    if (color_1 == no and color_2 == si and color_3 == no){
	printf("tu color es rojo");
    }
    if (color_1 == no and color_2 == no and color_3 == si){
	printf("tu color es amarillo");
    }
    return EXIT_SUCCESS;



}
