#ifndef __PILA_H__
#define __PILA_H__

#define N 100

struct TVector{
  int x;
  int y;
};

struct TPila{
  int cima;
  struct TVector *pila[N];
};


#ifdef __cplusplus
extern "C"{

  bool push(struct TPila *pila, struct TVector *vector);
  bool pop(struct TPila *pila);

#endif

#ifdef __cplusplus
}

#endif

#endif
