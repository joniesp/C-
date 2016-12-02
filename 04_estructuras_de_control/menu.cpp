#include <stdio.h>
#include <stdlib.h>


#define SUMA 1
#define REST 2
#define MULT 3
#define DIVI 4

int main (){

    int op1,
	op2,
	opcion;

    system("clear");
    system("toilet -fpagga --gay MATEMATICAS");


    printf("\n");

    printf("introduce el operando 1: ");
    scanf(" %i", &op1);

    printf("introduce el operando 2: ");
    scanf(" %i", &op2);

    printf("\n Opciones: \n\n"
	   "\t1.-Suma \n"
	   "\t2.-Resta \n"
	   "\t3.-Multiplicacion \n"
	   "\t4.-Division \n"
	   "\n\t Opcion: ");

    scanf(" %i", &opcion);

    switch(opcion){
      case SUMA: printf("%i\n", op1 + op2);
		break;

      case REST: printf("%i\n", op1 - op2);
		break;

      case MULT: printf("%i\n", op1 * op2);
		break;

      case DIVI: printf("%i\n", op1 / op2);
		break;
    }


  return EXIT_SUCCESS;


}


