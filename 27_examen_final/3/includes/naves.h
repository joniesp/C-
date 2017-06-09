#ifndef __NAVES_H__
#define	__NAVES_H__

#define MAX 10

struct TCoordenada{
  int x;
  int y;
};

struct TNave{
  char letra;
  int vida;
  struct TCoordenada coordenadas;
};

#ifdef __cplusplus
extern "C"{
#endif

  void crear_nave(struct TNave *);
  struct TNave mover_nave(struct TNave);
  void pintar_naves(struct TNave[MAX]);

#ifdef __cplusplus
}
#endif

#endif
