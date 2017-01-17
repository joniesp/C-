#include <stdio.h>
#include <stdlib.h>
#define PI 3.141516
#define TRIANGULO 1
#define CUADRADO 2
#define RECTANGULO 3
#define TRAPECIO 4
#define CIRCULO 5

int main(int argc, char *argv[]){

  int opcion;

  printf("\nPosibles opciones:\n\n"
	 "\t1. -TRIANGULO\n"
	 "\t2. -CUADRADO\n"
	 "\t3. -RECTANGULO\n"
	 "\t4. -TRAPECIO\n"
	 "\t5. -CIRCULO\n");
  scanf(" %i", &opcion);
  system("clear");

  switch(opcion){
      case TRIANGULO:
	int base, altura, area;
	  printf("Introduce la base y la altura del triangulo\n");
	  scanf(" %i %i", &base, &altura);
	  area = (base * altura) / 2;
	  printf("El area del triangulo es %i\n", area);
	  break;

      case CUADRADO:
	int lado, area1;
	  printf("Introduce el lado del cuadrado\n");
	  scanf(" %i", &lado);
	  area1 = lado * lado;
	  printf("El area del cuadrado es %i\n", area1);
	  break;

      case RECTANGULO:
	int base1, altura1, area2;
	  printf("Introduce la base y la altura del rectangulo\n");
	  scanf(" %i %i", &base, &altura);
	  area2 = base1 * altura1;
	  printf("El area del rectangulo es %i\n", area2);
	  break;

      case TRAPECIO:
	int b_mayor, b_menor, altura2, area3;
	  printf("Introduce la base mayor, menor y la altura del trapecio\n");
	  scanf(" %i %i %i", &b_mayor, &b_menor, &altura);
	  area3 = (((b_mayor + b_menor) * altura2) / 2 );
	  printf("El area del trapecio es %i\n", area);
	  break;
  
      case CIRCULO:
	int radio, area4;
	  printf("Introduce el radio del circulo\n");
	  scanf(" %i", &radio);
	  area4 = (radio * radio) * PI;
	  printf("El area del circulo es %i\n", area4);
	  break;
  }
    return EXIT_SUCCESS;
}
