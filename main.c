#include <stdio.h>

#define BOARD_SIZE 8

// Function to initialize the checkers board
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            // Set up initial positions for black and white pieces
            if ((i + j) % 2 == 0)
            {
                if (i < 3)
                {
                    board[i][j] = 'B'; // Black piece
                }
                else if (i > 4)
                {
                    board[i][j] = 'W'; // White piece
                }
                else
                {
                    board[i][j] = ' '; // Empty square
                }
            }
            else
            {
                board[i][j] = ' '; // Empty square
            }
        }
    }
}

int main()
{
    
    return 0;
}