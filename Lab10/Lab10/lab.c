#include "lab.h"

void draw_board (char board[][8], int num_rows, int num_col)
{
	int r = 0, c = 0;

	for (r = 0; r < num_rows; r++)
	{
		for (c = 0; c < num_col; c++)
		{
			if (board[r][c] == '\0')
			{
				board[r][c] = '-';
			}

			printf ("%c", board[r][c]);
		}
	}

	return;
}

int get_turn (char board[][8], int player)
{
	int r = 0, c = 0;

	printf ("Enter coordinates for your turn: ");
	scanf ("%d %d", &r, &c);

	if (player % 2 == 0)
	{
		board [r-1][c-1] = 'X';
	}
	if (player % 2 == 1)
	{
		board [r-1][c-1] = 'O';
	}
	player++;

	return player; 
}

int get_winner (char board[][8], int num_row, int num_col)
{
	
}