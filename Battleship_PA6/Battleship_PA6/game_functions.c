#include "game_functions.h"

/************************************************************************************************
 * Function: void welcome_screen (void)                                                         *
 * Date Created: October 24, 2015                                                               *
 * Date Last Modified: October 26, 2015                                                         *
 * Description: Displays an initial program welcome message along with the rules of Battleship. *
 * Input Parameters: None                                                                       *
 * Returns: None.                                                                               *
 * Preconditions: None                                                                          *
 * Postconditions: A welcome screen is displayed                                                *
 ************************************************************************************************/
int welcome_screen (void)
{
	int option = 0;
	
	printf ("*************************************************Welcome to Battleship!*************************************************\n");
	printf ("* Rules of the game:                                                                                                   *\n");
	printf ("* 1. This is a two player game.                                                                                        *\n");
	printf ("* 2. Player1 is you and Player2 is the computer.                                                                       *\n");
	printf ("* 3. You have five ships: a carrier (5 spaces), a battleship (4 spaces), a cruiser (3 spaces), a submarine (3 spaces), *\n");
	printf ("*    and a destroyer (2 spaces).                                                                                       *\n");
	printf ("* 4. Place your five ships secretly on your board.                                                                     *\n");
	printf ("* 5. You can place each ship in any horizontal or vertical position, but not diagonally.                               *\n");
	printf ("* 6. Type in a location to take a shot and it will either be a hit or a miss.                                          *\n");
	printf ("* 7. To sink a ship you have to hit all of the spaces where player2 placed their ship.                                 *\n");
	printf ("* 8. To win the game have to sink all of player2's ships.                                                              *\n");
	printf ("************************************************************************************************************************\n");
	printf ("Hit enter to start the game!\n");
	getchar ();
	clear_screen ();


	printf ("**************************Option Menu**************************\n");
	printf ("* 1. Enter positions of ships manually.                       *\n");
	printf ("* 2. Allow the program to randomly select positions of ships. *\n");
	printf ("***************************************************************\n");
	printf ("Please select an option from the menu: ");
	scanf ("%d", &option);

	return option; 
}

/********************************************************************************
 * Function: void initalize_board (char board [10][10], int rows, int columns)  *
 * Date Created: October 24, 2015                                               *
 * Date Last Modified: October 26, 2015                                         *
 * Description: Sets each cell in a game board to '~'.                          *
 * Input Parameters: char board [10][10], int rows, int columns                 *
 * Returns: None.                                                               *
 * Preconditions: An array has to exist.                                        *
 * Postconditions: All of the cells on the game board will be initalize to '~'. *
 ********************************************************************************/
void initialize_game_board (char board [10][10], int rows, int columns)
{
	int row_index = 0, column_index = 0;

	for (row_index = 0; row_index < rows; row_index++)
	{
		for (column_index = 0; column_index < columns; column_index++)
		{
			board [row_index][column_index] = '~';
		}
	}
	return;
}

/***************************************************************************
 * Function: void select_who_starts_first (void)                           *
 * Date Created: October 24, 2015                                          *
 * Date Last Modified: November 14, 2015                                   *
 * Description: Determines if Player 1 or Player 2 goes first in the game. *
 * Input Parameters: None.                                                 *
 * Returns: int start.                                                     *
 * Preconditions: None.                                                    *
 * Postconditions: The player who goes first should be chosen.             *
 ***************************************************************************/
int select_who_starts_first (void)
{
	int start = 0;

	start = rand () % 2;

	return start; 
}

/*******************************************************************************************
 * Function: void manually_place_ships_on_board (char board[][10], char ship)              *
 * Date Created: October 24, 2015                                                          *
 * Date Last Modified: November 7, 2015                                                    *
 * Description: Allows the user to place each of the 5 types of ships on their game board. *
 * Input Parameters: char board[][10], char ship                                           *
 * Returns: None.                                                                          *
 * Preconditions: A playing board has to exsist and the letter that represents a ship.     *
 * Postconditions: All five types of ships should be placed on the board by the user.      *
 *******************************************************************************************/
void manually_place_ships_on_board (char board[][10], char ship)
{
	int size = 0, row_index = 0, col_index = 0, count = 0;

	switch (ship)
	{
		case 'c': size = 5;
				  printf ("Please enter the coordinates for the Carrier (size 5): \n");
				  break;
		case 'b': size = 4;
				  printf ("Please enter the coordinates for the Battleship (size 4): \n");
				  break;
		case 'r': size = 3;
				  printf ("Please enter the coordinates for the Cruiser (size 3): \n");
				  break;
		case 's': size = 3;
				  printf ("Please enter the coordinates for the Submarine (size 3): \n");
				  break;
		case 'd': size = 2;
				  printf ("Please enter the coordinates for the Destroyer (size 2): \n");
				  break;
		default: break;
	}

	while (count < size)
	{
		printf ("Enter the coordinates for space %d: ", count + 1);
		scanf ("%d %d", &row_index, &col_index);

		if (board[row_index][col_index] == '~')
		{
			board[row_index][col_index] = ship;
			count++;
		}
		else 
		{
			printf ("Error illegal ship placement. Please enter another set of coordinates.\n");
		}
	}
}

/************************************************************************************************
 * Function: void randomly_place_ships_on_board (char board[][10], char ship)                   *
 * Date Created: October 24, 2015                                                               *
 * Date Last Modified: November 14, 2015                                                        *
 * Description: Randomly places the 5 types of ships on a give board.                           *
 * Input Parameters: char board[][10], char ship                                                *
 * Returns: None.                                                                               *
 * Preconditions: A player board need to exist and a letter representing a ship needs to exist. *
 * Postconditions: The 5 types of ships should be randomly placed on the board.                 *
 ************************************************************************************************/
void randomly_place_ships_on_board (char board[][10], char ship)
{
	int size = 0, row_start = 0, col_start = 0, count = 0, row_test = 0, col_test = 0, direction = 0;

	switch (ship)
	{
		case 'c': //Carrier
				  size = 5;
				  break;
		case 'b': //Battlership
				  size = 4;
				  break;
		case 'r': //Cruiser
				  size = 3;
				  break;
		case 's': //Submarine
				  size = 3;
				  break;
		case 'd': //Destroyer
				  size = 2;
				  break;
		default: break;
	}

	direction = general_direction ();
	get_starting_point (size, direction, &row_start, &col_start); 
	row_test = row_start;
	col_test = col_start;

	//Checking if placement is valid
	while (count < size)
	{
		if (direction == 0) //vertical
		{
			if (board[row_test][col_test] == '~')
			{
				row_test++;
				count++;
			}
			else 
			{
				get_starting_point (size, direction, &row_start, &col_start);
				row_test = row_start;
				col_test = col_start;
				count = 0;
			}
		}
		else if (direction == 1) //horizontal
		{
			if (board[row_test][col_test] == '~')
			{
				col_test++;
				count++;
			}
			else 
			{
				get_starting_point (size, direction, &row_start, &col_start);
				row_test = row_start;
				col_test = col_start;
				count = 0;
			}
		}
	}

	count = 0;

	//Places ship on board
	while (count < size)
	{
		if (direction == 0)
		{
			board [row_start++][col_start] = ship;
		}
		else if (direction == 1)
		{
			board [row_start][col_start++] = ship;
		}
		count++;
	}
}

/******************************************************************************************
 * Function: int check_shot (char board[][10], int target_row, int target_col)           *
 * Date Created: October 24, 2015                                                         *
 * Date Last Modified: November 14, 2015                                                  *
 * Description: checks if the shot taken was a hit or miss.                               *
 * Input Parameters: char board[][10], int target_row, int target_col                     *
 * Returns: int shot = 1 if it was a miss and otherwise 0 if it is a hit.                 *
 * Preconditions: a player board needs to exist and the players would have to get a shot. *
 * Postconditions: Displays a message if it was a hit or miss.                            *
 ******************************************************************************************/
void check_shot (char board[][10], int target_row, int target_col, int player, int *x, int *y, int *shot)
{
	int test_row = 0, test_col = 0;

	if (board[target_row][target_col] == 'm' || board[target_row][target_col] == '*')
	{
		if (player == 1)
		{
			do 
			{
				printf ("Invalid input\n");
				get_target (&test_row, &test_col);
			}
			while (board [test_row][test_col] == 'm' || board[test_row][test_col] == '*');
		}
		else
		{
			do
			{
				random_target (&test_row, &test_col);
			}
			while (board [test_row][test_col] == 'm' || board[test_row][test_col] == '*');
		}

		if (board[test_row][test_col] == '~')
		{
			printf ("Miss...\n");
			*shot = 2;
		}
		else
		{
			printf ("Hit!\n");
			*shot = 1;
		}

		*x = test_row;
		*y = test_col;
	}
	else if (board[target_row][target_col] == '~')
	{
		printf ("Miss...\n");
		*shot = 2;

		*x = target_row;
		*y = target_col;
	}
	else
	{
		printf ("Hit!\n");
		*shot = 1;

		*x = target_row;
		*y = target_col;
	}
}

/******************************************************************************
 * Function: int is_winner (char board[][10])                                 *
 * Date Created: October 24, 2015                                             *
 * Date Last Modified: November 14, 2015                                      *
 * Description: Determines if a winner exists.                                *
 * Input Parameters: board[][10]                                              *
 * Returns: The number of ships that have been sunk.                          *
 * Preconditions: A player board needs to exist and a function that checks if *
 *				  the ship had been sunk needs to exist.                      *
 * Postconditions: The number of ships that has been sunk should return.      *
 ******************************************************************************/
int is_winner (char board[][10])
{
	int number_of_ships = 0;

	number_of_ships += check_if_sunk_ship (board, 10, 10, 'c');
	number_of_ships += check_if_sunk_ship (board, 10, 10, 'b');
	number_of_ships += check_if_sunk_ship (board, 10, 10, 'r');
	number_of_ships += check_if_sunk_ship (board, 10, 10, 's');
	number_of_ships += check_if_sunk_ship (board, 10, 10, 'd');

	return number_of_ships;
}

/**************************************************************************************************************
 * Function: void display_board ()                                                                            *
 * Date Created: October 24, 2015                                                                             *
 * Date Last Modified: November 14, 2015                                                                      *
 * Description: Displays a board to the screen. Note that Player1's board should be displayed differently     *
 *				than Player2's board. Hint: pass in a flag (int) that stores whether or not you just passed   *
 *				in Player1's or Player2's board. Then perform the different logic for Player1's board versus  *
 *				Player2's board.                                                                              *
 * Input Parameters: char board[][10], int row, int column, int player_board                                  *
 * Returns: None.                                                                                             *
 * Preconditions: The size of the board should be established and the board need to be updated or intialized. *
 * Postconditions: A board should be displayed to the screen                                                  *
 **************************************************************************************************************/
void display_board (char board[][10], int row, int column, int player_board)
{
	int row_index = 0, col_index = 0;
	
	if (player_board == 1)
	{
		printf ("Player1's board\n");

		printf (" ");
		for (col_index = 0; col_index < column; col_index++)
		{
			printf (" %d", col_index);
		}
		putchar ('\n');

		for (row_index = 0; row_index < row; row_index++)
		{
			printf ("%d", row_index);
			for (col_index = 0; col_index < column; col_index++)
			{
				printf (" %c", board[row_index][col_index]);
			}
			putchar ('\n');
		}
		printf ("\n");
	}
	else
	{
		printf ("Player2's board\n");

		printf (" ");
		for (col_index = 0; col_index < column; col_index++)
		{
			printf (" %d", col_index);
		}
		putchar ('\n');

		for (row_index = 0; row_index < row; row_index++)
		{
			printf ("%d", row_index);
			for (col_index = 0; col_index < column; col_index++)
			{
				if (board[row_index][col_index] == 'c' || board[row_index][col_index] == 'b' || board[row_index][col_index] == 'r' || board[row_index][col_index] == 's' || board[row_index][col_index] == 'd')
				{
					printf (" %c", '~');
				}
				else 
				{
					printf (" %c", board[row_index][col_index]);
				}
			}
			putchar ('\n');
		}
		printf ("\n");
	}

	return; 
}

/******************************************************************************
 * Function: void output_current_move ()                *
 * Date Created: October 24, 2015                                             *
 * Date Last Modified: October 24, 2015                                       *
 * Description: Writes the position of the shot taken by the current player to the log file.
				it also writes whether or not it was a hit, miss, and if the ship was sunk.*
 * Input Parameters:                       *
 * Returns: .                                                             *
 * Preconditions:      *
 * Postconditions: The results of each shot take is outputed to a log file.                             *
 ******************************************************************************/
void output_current_move (int x, int y, int hit_or_miss, FILE *outfile, int player, int number_of_ships)
{

		if (hit_or_miss == 1)
		{
			fprintf (outfile, "Player %d shot at position (%d, %d) and it was a hit. %d ships sunk.\n", player, x, y, number_of_ships);
		}
		else
		{
			fprintf (outfile, "Player %d shot at position (%d, %d) and it was a miss\n", player, x, y);
		}
}

/****************************************************************************************
 * Function: int check_if_sunk_ship (char board[][10], int row, int column, char ship)  *
 * Date Created: October 24, 2015                                                       *
 * Date Last Modified: November 15, 2015                                                *
 * Description: Determines if a ship was sunk.                                          *
 * Input Parameters: char board[][10], int row, int column, char ship                   *
 * Returns: int check = 0 if the ships has been found and check = 1 if the ship was not *
 *			found.                                                                      *
 * Preconditions: a player board, the number of columns and rows and which ship you are *
 *				  searching for.                                                        *
 * Postconditions: Determine if ship was sunk or not                                    *
 ****************************************************************************************/
int check_if_sunk_ship (char board[][10], int row, int column, char ship)
{
	int check = 1, row_index = 0, col_index = 0;

	for (row_index = 0; row_index < row; row_index++)
	{
		for (col_index = 0; col_index < column; col_index++)
		{
			if (board[row_index][col_index] == ship)
			{
				check = 0;
			}
		}
	}

	return check;
}

/******************************************************************************************
 * Function: void check_shot (char board[][10], int target_row, int target_col)           *
 * Date Created: October 24, 2015                                                         *
 * Date Last Modified: November 14, 2015                                                  *
 * Description: checks if the shot taken was a hit or miss.                               *
 * Input Parameters: char board[][10], int target_row, int target_col                     *
 * Returns: int shot = 1 if it was a miss and otherwise 0 if it is a hit.                 *
 * Preconditions: a player board needs to exist and the players would have to get a shot. *
 * Postconditions: Displays a message if it was a hit or miss.                            *
 ******************************************************************************************/
void message_sunk (int check, char ship)
{
	if (check == 1)
	{
		switch (ship)
		{
			case 'c': printf ("The Carrier has been sunk.\n");
					  break;
			case 'b': printf ("The Battleship has been sunk.\n");
					  break;
			case 'r': printf ("The Cruiser has been sunk.\n");
					  break;
			case 's': printf ("The Submarine has been sunk.\n");
					  break;
			case 'd': printf ("The Destroyer has been sunk.\n");
					  break;
			default: break;
		}
	}
}

/********************************************************************************************************
 * Function: void update_board (char board[][10], int target_row, int target_col, int hit_or_miss)      *
 * Date Created: October 24, 2015                                                                       *
 * Date Last Modified: November 14, 2015                                                                *
 * Description: Updates the board every time a shot is taken. '*' indicates hit and 'm' indicates miss. *
 * Input Parameters: char board[][10], int target_row, int target_col, int hit_or_miss                  *
 * Returns: None                                                                                        *
 * Preconditions: A player board has to exist, and the shot taken by the player is a hit or miss        *
 * Postconditions: The board is updated                                                                 *
 ********************************************************************************************************/
void update_board (char board[][10], int x, int y, int hit_or_miss)
{
	if (hit_or_miss == 1)
	{
		//Hit
		board[x][y] = '*';
	}
	else
	{
		//Miss
		board[x][y] = 'm';
	}
}

void update_stats (struct stats player, int hit_or_miss, int number_of_ships)
{
	if (hit_or_miss == 1)
	{
		(player.hits)++;
	}
	else 
	{
		(player.misses)++;	
	}

	(player.shots)++;

	if (number_of_ships == 5)
	{
		strcpy (player.win_or_lose, "Win!");
	}
	else
	{
		strcpy (player.win_or_lose, "Lose.");
	}
}

/******************************************************************************
 * Function: void output_stats ()                *
 * Date Created: October 24, 2015                                             *
 * Date Last Modified: October 24, 2015                                       *
 * Description: Writes the statistics collected on each player to the log file                          *
 * Input Parameters:                       *
 * Returns: None.                                                             *
 * Preconditions:      *
 * Postconditions: The stats should be written into a log file.                             *
 ******************************************************************************/
void output_stats (struct stats *player, FILE *outfile, int players)
{
	if (players == 1)
	{
		fprintf (outfile, "Player1 stats:\n");
	}
	else 
	{
		fprintf (outfile, "Player2 stats:\n");
	}
	
	fprintf (outfile, "number of hits: %d\n", player -> hits);
	fprintf (outfile, "number of misses: %d\n", player -> misses);
	fprintf (outfile, "number of shots: %d\n", player -> shots);
	fprintf (outfile, "Ratio of hit to misses: %d%%\n", ((double) player -> hits / (double) player -> misses) * 100.0);
	fprintf (outfile, "%s\n", player -> win_or_lose);
}

/******************************************
 * Function: void clear_screen (void)     *
 * Date Created: October 24, 2015         *
 * Date Last Modified: October 26, 2015   *
 * Description: This clears the screen.   *
 * Input Parameters: None.                *
 * Returns: None.                         *
 * Preconditions: None.                   *
 * Postconditions: The screen is cleared. *
 ******************************************/
void clear_screen (void)
{
	system ("cls");

	return;
}

/***********************************************************************************************************
 * Function: int general_direction (void)                                                                  *
 * Date Created: October 28, 2015                                                                          *
 * Date Last Modified: October 28, 2015                                                                    *
 * Description: Randomally chooses what direction the ship should go. 0 is for vertical directon and 1 for *
 *				horizontal direction                                                                       *
 * Input Parameters: None                                                                                  *
 * Returns: int result.                                                                                    *
 * Preconditions: None                                                                                     *
 * Postconditions: Returns a 0 for the vertical direction and a 1 for the horizonatal.                     *
 ***********************************************************************************************************/
int general_direction (void)
{
	int result = 0;

	result = rand () % 2; // 0-vertical, 1-horizontal

	return result;
}

/****************************************************************************************************
 * Function: void get_starting_point (int length, int direction, int *row_start, int *column_start) *
 * Date Created: October 28, 2015                                                                   *
 * Date Last Modified: October 28, 2015                                                             *
 * Description: Finds a starting point to place a ship.                                             *
 * Input Parameters: int length, int direction, int *row_start, int *column_start                   *
 * Returns: None.                                                                                   *
 * Preconditions: The length of the ship and the direction should be avaliable.                     *
 * Postconditions: A starting point should be established.                                          *
 ****************************************************************************************************/
void get_starting_point (int length, int direction, int *row_start, int *column_start)
{
	if (direction == 0) // vertical
	{
		*column_start = rand () % 10;
		*row_start = rand () % (10 - length + 1);
	}
	else // horizontal
	{
		*column_start = rand () % (10 - length + 1);
		*row_start = rand () % 10;
	}

	return; 
}

/****************************************************************************************
 * Function: FILE *open_file_write (void)                                               *
 * Date Created: October 31, 2015                                                       *
 * Date Last Modified: October 31, 2015                                                 *
 * Description: opens up the battleship.log file so the results and be written into it. *
 * Input Parameters: None.                                                              *
 * Returns: outfile.                                                                    *
 * Preconditions: battleship.log needs to exsist.                                       *
 * Postconditions: battleship.log should be opened.                                     *
 ****************************************************************************************/
FILE *open_file_write (void)
{
	FILE *outfile = NULL;

	outfile = fopen ("battleship.log", "w");

	return outfile;
}

/**************************************************************************
 * Function: void system_pause (void)                                     *
 * Date Created: November 13, 2015                                        *
 * Date Last Modified: November 13, 2015                                  *
 * Description: Pauses the system and displays press any key to continue. *
 * Input Parameters: None.                                                *
 * Returns: None.                                                         *
 * Preconditions: None.                                                   *
 * Postconditions: Press any key to continue should be displayed.         *
 **************************************************************************/
void system_pause (void)
{
	system ("pause");

	return;
}

/*****************************************************************************************
 * Function: void get_target (int *target_row, int *target_col)                          *
 * Date Created: November 15, 2015                                                       *
 * Date Last Modified: November 15, 2015                                                 *
 * Description: Gets a shot from the user.                                               *
 * Input Parameters: int *target_row, int *target_col.                                   *
 * Returns: target_row and target_col.                                                   *
 * Preconditions: A variable that holds the target row and target column needs to exist. *
 * Postconditions: Coordinates should be taken from the player.                          *
 *****************************************************************************************/
void get_target (int *target_row, int *target_col)
{
	printf ("Please enter a coordinate to take a shot: ");
	scanf ("%d%d", target_row, target_col);
}

/*************************************************************************************
 * Function: void random_target (int *target_row, int *target_col)                   *
 * Date Created: November 15, 2015                                                   *
 * Date Last Modified: November 15, 2015                                             *
 * Description: Generates a random target for the computer.                          *
 * Input Parameters: int *target_row, int *target_col.                               *
 * Returns: None.                                                                    *
 * Preconditions: A variable that holds the target_row and target_col need to exist. *
 * Postconditions: A random target should be generated.                              *
 *************************************************************************************/
void random_target (int *target_row, int *target_col)
{
	*target_row = rand () % 10;
	*target_col = rand () % 10; 
}
