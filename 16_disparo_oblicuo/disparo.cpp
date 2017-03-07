#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.01
#define x     0
#define y     1
#define a_y   -10
#define DIM   2

// x += vox; vox = a * Delta pero como es cte no hay aceleracion la velocidad no varia
// y += voy; voy = a * Delta aqui la aceleracion es -10 metros por segundo


double pedir_x(){

    double vx;

    printf("Introduce la velocidad inicial en el eje x\n");
    scanf(" %2lf", &vx);

    return vx;
}

double pedir_y(){

    double vy;

    printf("Introduce la velocidad inicial en el eje y\n");
    scanf(" %2lf", &vy);

    return vy;
}


int main(int argc, char *argv[]){

  double incognitas[DIM];
  double vox = pedir_x();
  double voy = pedir_y();

  incognitas[y] = voy;
  voy = a_y * DELTA;

  for(int i = 0; incognitas[y] >= 0; i++ ){
	printf("\tvelocidad en el eje x: %lf\n", vox);
	printf("\tvelocidad en el eje y: %lf", incognitas[y]);
	printf("\t\t\tPosicion de x = %lf", incognitas[x]);
	printf("\n");
	incognitas[x] += vox * DELTA;
	incognitas[y] += voy;
  }

    return EXIT_SUCCESS;
}
