#include <stdio.h>
#include <stdlib.h>

struct TCoordenada{
    double x;
    double y;
};

struct TFisica{
    struct TCoordenada r;
    struct TCoordenada a;
    struct TCoordenada v;
};

struct TNave{
    double vida;
    int ammo;
    struct TFisica fisica;
};


int main(int argc, char *argv[]){

    return EXIT_SUCCESS;
}
