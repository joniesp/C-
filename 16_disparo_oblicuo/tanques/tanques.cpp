#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

#define XC2 40

struct TCoordenada {
      double x;
      double y;
};

int main(int argc, char *argv[]){
      double t =   0.;
      struct TCoordenada a1 = {  0., -10. },
	           s1 = {  0.,   0. },
       v1;

      struct TCoordenada a2 = {  0., -10. },
	   s2 = {  0.,   0. },
       v2;

      system("clear");
      printf("Introduce la velocidad en x del primer disparo\n");
      scanf(" %lf", &v1.x);

      printf("Introduce la velocidad en y del primer disparo\n");
      scanf(" %lf", &v1.y);

      printf("Introduce la velocidad en x del segundo disparo\n");
      scanf(" %lf", &v2.x);

      printf("Introduce la velocidad en y del segundo disparo\n");
      scanf(" %lf", &v2.y);


      initscr();
      curs_set(0);



      for (t=0.; s1.y >= 0. && s2.y >= 0. ; t+= DELTA){

	  /*  actualizar velocidades y recorrido */
	    v1.y += a1.y * DELTA;
	    s1.y += v1.y * DELTA;

	    v1.x += a1.x * DELTA;
	    s1.x += v1.x * DELTA;


	    v2.y += a2.y * DELTA;
	    s2.y += v2.y * DELTA;

	    v2.x += a2.x * DELTA;
	    s2.x += v2.x * DELTA;

	    /*  Pintar recorridos */

	    clear();

	    mvprintw(YC, XC,"(0000)");
	    mvprintw(YC + 1, XC + 1,"=======)");
	    mvprintw(YC + 2, XC,"(000)");

	    mvprintw(YC, XC2,"(0000)");
	    mvprintw(YC + 1, XC2 - 3,"(=======");
	    mvprintw(YC + 2, XC2,"(000)");

	    mvprintw(YC-s1.y, XC+s1.x, "O");
	    mvprintw(YC-s2.y, XC2-s2.x, "O");

	    refresh();
	    usleep(100000);
          }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}

