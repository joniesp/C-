#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero,
      exponente,
      resultado = 0,
      auxiliar = 1,
      acumulador = 0 ;

    printf("Numero: ");
    scanf(" %i", &numero);
    printf("Exponente: ");
    scanf(" %i", &exponente);

    if (exponente == 0)
	printf("1");

    do{
      auxiliar *= numero;
      resultado = auxiliar ;
      ++acumulador;
    }while(acumulador < exponente);

    printf("%i", resultado);

  return EXIT_SUCCESS;
}
