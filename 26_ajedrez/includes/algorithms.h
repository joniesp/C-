#ifndef __ALGORITHMS_H__
#define __ALGORITHMS_H__

#include <stdio.h>
#include "general.h"
#include "io.h"

#define ADD(accu, inc) accu.x += inc.x, accu.y += inc.y


#ifdef __cplusplus
extern "C"
{
#endif

  int is_empty (int row, int col, char board[SIZE][SIZE]);
  int check (int row, int col, char board[SIZE][SIZE], enum TPiece piece, int(*pf)(int, int, struct TVector, char board[SIZE][SIZE]));
  int check_direction(int row, int col, struct TVector dir, char board[SIZE][SIZE]);
  int check_position(int row, int col, struct TVector dir, char board[SIZE][SIZE]);

#ifdef __cplusplus
}
#endif

#endif
