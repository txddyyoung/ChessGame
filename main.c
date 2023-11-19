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

// Function to print the checkers board
void printBoard(char board[BOARD_SIZE][BOARD_SIZE])
{
    printf("\n  a b c d e f g h\n");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d ", BOARD_SIZE - i);
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("%d\n", BOARD_SIZE - i);
    }
    printf("  a b c d e f g h\n\n");
}

// Function to make a move on the checkers board

    // Simple move - no jump
   

    // Implement logic for capturing opponent's pieces and kinging(this game logic takes away from the directed graph decide if it's necessary!)


int main()
{
    char checkersBoard[BOARD_SIZE][BOARD_SIZE];

    // Initialize the checkers board
    initializeBoard(checkersBoard);

    // Display the initial checkers board
    printBoard(checkersBoard);

    // Make a move

    // Display the board after the move

    // Execute other necessary functions

    return 0;
}