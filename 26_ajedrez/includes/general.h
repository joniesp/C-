#ifndef __GENERAL_H__
#define __GENERAL_H__

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <errno.h>

#define BOARD_FN "whites_board"
#define SIZE     8

#define IN_LIMITS(x) (x)>=0 && (x)<SIZE

#define USAGE "\
    Usage: %s \n\
           Shows the board contained in <" BOARD_FN "> \n\
           and checks for tower possibilities.\n\
"

enum TPiece {pawn, rook, knight, bishop, queen, king, nop };

struct Color {
    const char *white;
    const char *black;
};

struct TVector {
    int x;
    int y;
};

struct Piece {
    enum TPiece class_number;
    char symbol;
    struct Color bs;   /* Board Symbol */
    const char *name;
    int (*pf)(int, int, struct TVector, char board[SIZE][SIZE]);
};

#define PIECES 7
extern struct Piece set[PIECES];


#endif

