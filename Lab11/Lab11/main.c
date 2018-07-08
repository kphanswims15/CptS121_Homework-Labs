#include "header.h"

int main (void)
{
	int result = 0;
	char word[100] = "levol";
	char board[8][8] = {{'x', '-', '-', 'x', 'x', 'x', 'x', 'x'},
						{'x', 'x', '-', 'x', 'x', 'x', 'x', 'x'},
						{'x', 'x', '-', '-', '-', 'x', 'x', 'x'},
						{'x', 'x', 'x', 'x', '-', '-', 'x', 'x'},
						{'x', 'x', 'x', 'x', 'x', '-', 'x', 'x'},
						{'x', 'x', 'x', 'x', '-', '-', 'x', 'x'},
						{'x', 'x', 'x', 'x', '-', 'x', 'x', 'x'},
						{'x', 'x', 'x', 'x', '-', '-', '-', '-'}};

	result = maze (board, 0, 1, 8, 8);

	display_message (result);

	/*result = panlindrome(word, 0, 5);

	printf ("%d\n", result);*/


}