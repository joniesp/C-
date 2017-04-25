#ifndef __ALGORITMOS_H__
#define __ALGORITMOS_H__

#include <stdio.h>
#include "general.h"
#include "io.h"

struct TVector {
    int x;
    int y;
};


#ifdef __cplusplus
extern "C"
{
#endif

  int is_empty (int row, int col, char board[SIZE][SIZE]);
  int tower_check (int row, int col, char board[SIZE][SIZE]);
  int alfil_check (int row, int col, char board[SIZE][SIZE]);

#ifdef __cplusplus
}
#endif

#endif
