#include "header.h"

int panlindrome (char  str[], int index, int size)
{
	if (index >= size - 1)
	{
		return 1;
	}

	if (str[index] != str[size-1])
	{
		return 0;
	}

	return panlindrome (str, index+1, size-1);
}

int maze (char board[][8], int row_index, int col_index, int row_size, int col_size)
{
	if (row_index >= row_size-1 && col_index >= col_size-1)
	{
		return 1;
	}

	if (board[row_index][col_index] != 'x' && row_index != 7)
	{
		return maze (board, row_index + 1, col_index, row_size, col_size);
	}

	if (board[row_index][col_index] != 'x' && col_index != 7)
	{
		return maze (board, row_index, col_index + 1, row_size, col_size);
	}
	
	if (board[row_index][col_index] != 'x' && row_index != 0)
	{
		return maze (board, row_index-1, col_index, row_size, col_size);
	}

	if (board[row_index][col_index] != 'x' && col_index != 0)
	{
		return maze (board, row_index, col_index-1, row_size, col_size);
	}

	return 0; 
}

void display_message (int path)
{
	if (path == 1)
	{
		printf ("A path has been found\n");
	}
	else
	{
		printf ("A path has not been found\n");
	}
}

