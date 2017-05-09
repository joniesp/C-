#include "algorithms.h"

#define UP         direction[0]
#define UP_RIGHT   direction[1]
#define RIGHT      direction[2]
#define RIGHT_DOWN direction[3]
#define DOWN       direction[4]
#define DOWN_LEFT  direction[5]
#define LEFT       direction[6]
#define LEFT_UP    direction[7]

#define UP_C         direction_c[0]
#define UP_RIGHT_C   direction_c[1]
#define RIGHT_C      direction_c[2]
#define RIGHT_DOWN_C direction_c[3]
#define DOWN_C       direction_c[4]
#define DOWN_LEFT_C  direction_c[5]
#define LEFT_C       direction_c[6]
#define LEFT_UP_C    direction_c[7]


struct TVector direction[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};

struct TVector direction_c[]= {

  {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {2, 1}, {1, 2}, {1 , -2}, {2, -1}

};

struct TVector *pawn_mv[] = { &RIGHT_DOWN, &DOWN_LEFT, NULL };
struct TVector *rook_mv[] = { &RIGHT, &LEFT, &UP, &DOWN, NULL };
struct TVector *knight_mv[] = {&UP_C, &UP_RIGHT_C, &RIGHT_DOWN_C, &RIGHT_C, &DOWN_C, &DOWN_LEFT_C, &LEFT_C, &LEFT_UP_C, NULL };
struct TVector *bishop_mv[] = { &UP_RIGHT, &LEFT_UP, &RIGHT_DOWN, &DOWN_LEFT, NULL };
struct TVector *king_mv[] = {&UP, &UP_RIGHT, &RIGHT, &RIGHT_DOWN, &DOWN, &DOWN_LEFT, &LEFT, &LEFT_UP, NULL};
struct TVector *queen_mv[] = {&UP, &UP_RIGHT, &RIGHT, &RIGHT_DOWN, &DOWN, &DOWN_LEFT, &LEFT, &LEFT_UP, NULL};


struct TVector **movements[] = {
    pawn_mv, rook_mv, knight_mv, bishop_mv, king_mv, queen_mv
    };

struct Piece set[] = {
   {pawn,   'P', {"♙", "♟"}, "Peón", &check_position},
   {rook,   'T', {"♖", "♜"}, "Torre", &check_direction},
   {knight, 'C', {"♘", "♞"}, "Caballo", &check_position},
   {bishop, 'A', {"♗", "♝"}, "Alfil", &check_direction},
   {queen,  'Q', {"♕", "♛"}, "Reina", &check_direction},
   {king,   'K', {"♔", "♚"}, "Rey", &check_position},
   {nop,    ' ', {" ", " "}, "Espacio", NULL}
};


int is_empty (int row, int col, char board[SIZE][SIZE]){
  return board[row][col] == ' ';
}

int check_direction (int row, int col, struct TVector dir, char board[SIZE][SIZE]){

  int offs;
  struct TVector cell = { col, row };
  ADD (cell, dir);

  for (offs = 0; IN_LIMITS (cell.x) && IN_LIMITS (cell.y); ADD (cell, dir))
    if (!is_empty (cell.y, cell.x, board))
      {
	print_possibility (cell.y, cell.x, board);
	return 1;
      }
  return 0;
}

int check (int row, int col, char board[SIZE][SIZE], enum TPiece piece, int(*pf)(int, int, struct TVector, char board[SIZE][SIZE])){
  int i;

  prepare_win (OUT_LIN);
  printf (BOLD_ON
	  "\tCOMPROBANDO EL %s\n" "\t====================\n\n" BOLD_OFF, set[piece].name);

  for (i=0; movements[piece][i] != NULL; i++)
      pf(row, col, *movements[piece][i], board);
}

int check_position(int row, int col, struct TVector dir, char board[SIZE][SIZE]){

  struct TVector cell = { col, row };

  cell.x += dir.x;
  cell.y += dir.y;

    if(!is_empty(cell.y, cell.x, board))
      if(IN_LIMITS(cell.x) && IN_LIMITS(cell.y)){
	print_possibility(cell.y, cell.x, board);
	return 1;
      }

  return 0;
}
