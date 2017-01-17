#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *tubo; /* esto lo que hace es crear un tubo o stream */

    tubo = fopen("iberos.txt", "a" ); /*el tubo puede ser para escribir leer o adjuntar osea
					  las dos el modo w si no existe lo crea y si existe
					  lo borra y crea uno nuevo, si lo abro en modo de
					  lectura podre leer y si lo abro en modo a añadire
					  todo lo que escriba comenzando a escribir desde el final */
    printf("holaaaaaaa\n");
    fprintf(stdout, "hola\n"); // estoy lo muestra por pantalla
    fprintf(tubo, "hola\n");   // y en este imprime en tubo

    fclose(tubo); // esto cierra el tubo
    // hay tres operadores el b para escribir en binario, si no pones especificador se da por hecho
    // que vas a escribir texto

    return EXIT_SUCCESS;
}
