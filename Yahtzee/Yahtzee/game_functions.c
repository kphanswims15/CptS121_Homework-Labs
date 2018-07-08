#include "game_functions.h"

/*****************************************************************************************
 * Function: void run_option_menu (void)                                                 *
 * Date Created: October 9, 2015                                                         *
 * Date Last Modified: October 20, 2015                                                  *
 * Description: Asks the user to get an option and runs the option menu. Option 1 prints * 
 *				the game rules, option 2 plays the game and option 3 exits the game.     *
 * Input Parameters: None                                                                *
 * Returns: None.                                                                        *
 * Preconditions: The print_game function and play_game function need to be available    *
 * Postconditions: option menu should run depending on which option is chosen            *
 *****************************************************************************************/
void run_option_menu (void)
{
	int option = 0;

	
		printf ("*********Yahtzee Menu*********\n");
		printf ("* 1. Print game rules        *\n");
		printf ("* 2. Start a game of Yahtzee *\n");
		printf ("* 3. Exit                    *\n");
		printf ("******************************\n");
		printf ("Please enter your option: ");
		scanf ("%d", &option);
}