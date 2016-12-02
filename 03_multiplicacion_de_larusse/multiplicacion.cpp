#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


    // declaro las variables op1, op2 y resultado
    // pedir op1 y op2 al usuario
    // declaro que resultado = 0
    //
    //	      si op2 es impar acumulular op1 en resultado
    //	      divide op2 entre 2 y multiplica op1 por 2 o duplicar op1 por 2
    //	      half es la mitad
    //	      repetir si op1 > 0

    int op1, o1,
        op2, o2,
        resultado = 0 ;

    printf("Operando 1: ");
    scanf(" %i", &op1);
    o1 = op1;

    printf("Operando 2: ");
    scanf(" %i", &op2);
    o2 = op2;

    do {
	if (op2 % 2 == 1)
	    resultado += op1;
	op2 >>= 1; // dividir es desplazar a la derecha una posicion de ahi el >>=
	op1 <<= 1; // multiplicar por dos es desplazar a la izquierda una posicion con <<=
    } while (op2 > 0);

    printf(" %i x %i = %i\n", o1, o2, resultado);

    return EXIT_SUCCESS;
}
