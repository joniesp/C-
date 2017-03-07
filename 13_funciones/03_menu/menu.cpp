#include <stdio.h>
#include <stdlib.h>

#define  suma                 1
#define  resta                2
#define  multiplicacion	      3
#define  divide		      4

int menu(){

  int numero;

  printf("Elige un numero\n"
	 "\t1.- SUMA\n"
	 "\t2.- RESTA\n"
	 "\t3.- MULTIPLICA\n"
	 "\t4.- DIVIDE\n");

  scanf("%i", &numero);

  return numero;
}

int main(int argc, char *argv[]){

  int opcion = menu();

  switch(opcion){

      case suma:
	printf("Has elegido la opcion: %i.- suma\n", opcion);
	break;

      case resta:
	printf("Has elegido la opcion: %i.- resta\n", opcion);
	break;

      case multiplicacion:
	printf("Has elegido la opcion: %i.- multiplicacion\n", opcion);
	break;

      case divide:
	printf("Has elegido la opcion: %i.- divide\n", opcion);
	break;
  }


    return EXIT_SUCCESS;
}
