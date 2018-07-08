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
void welcome_screen (void)
{
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

	return; 