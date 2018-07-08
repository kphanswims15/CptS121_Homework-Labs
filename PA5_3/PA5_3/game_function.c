#include "game_function.h"

/********************************************************************
 * Function: void print_option_menu (void)                          *
 * Date Created: October 9, 2015                                    *
 * Date Last Modified: October 9, 2015                              *
 * Description: This function prints out an option menu for Yahtzee *
 * Input Parameters: None.                                          *
 * Returns: None.                                                   *
 * Preconditions: None.                                             *
 * Postconditions: Prints out the menu of the game.                 *
 ********************************************************************/
void print_option_menu (void)
{
	printf ("*********Yahtzee Menu*********\n");
	printf ("* 1. Print game rules        *\n");
	printf ("* 2. Start a game of Yahtzee *\n");
	printf ("* 3. Exit                    *\n");
	printf ("******************************\n");

	return;
}

/**************************************************************************
 * Function: int get_option (void)                                        *
 * Date Created: October 9, 2015                                          *
 * Date Last Modified: October 9, 2015                                    *
 * Description: This function gets an option from the menu for Yahtzee    *
 * Input Parameters: None.                                                *
 * Returns: option.                                                       *
 * Preconditions: None.                                                   *
 * Postconditions: Inputs an option from the use and returns the options. *
 **************************************************************************/
int get_option (void)
{
	int option = 0;

	printf ("Please choose you option from the menu: ");
	scanf ("%d", &option);
	
	return option;
}