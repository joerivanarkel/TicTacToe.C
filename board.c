# include "board.h"
#include <stdio.h>

char* newBoard()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '} 
    };
    char (*)returnBoard[3][3] = &board;
    return returnBoard;
}

// char* addToken(char* board_, int coord1, int coord2, char token)
// {
//     char board[3][3] = board_;
//     if (board[coord1][coord2] == ' ')
//     {
//         board[coord1][coord2] = token;
//     };
//     return board;
// }

// void display(char* board_)
// {
//     char board[3][3] = board_;
//     printf("-----");
//     for (int i = 0; i < 3; i++)
//     {
//         char printArray[3] = { };
//         for (int k = 0; k < 3; k++)
//         {
//             printArray[k] = board[i][k];
//         }
//         printf(printArray[0] + ' ' + printArray[1] + ' ' + printArray[2]);
//     }
//     printf("-----");
// }