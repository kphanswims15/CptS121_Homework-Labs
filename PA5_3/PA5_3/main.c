/*******************************************************************************************************************************
 * Programmer: Kimberlee Phan                                                                                                  *
 *                                                                                                                             *
 * Class: CptS 121, Fall 2015; Lab Section: 5                                                                                  *
 *                                                                                                                             *
 * Programming Assignment: PA5                                                                                                 *
 *                                                                                                                             *
 * Date: October 9, 2015                                                                                                       *
 *                                                                                                                             *
 * Date Last Modified: October 9, 2015                                                                                         *
 *                                                                                                                             * 
 * Description: Design the Yahtzee game with functions that you see fit. I recommend that you start with a structure chart     *
 * and determine sub-problems and functions accordingly. You must also take advantage of applying pointers, output parameters, * 
 * and/or arrays!                                                                                                              *
 *******************************************************************************************************************************/
#include "game_function.h"

int main (void)
{
	int option = 0;

	print_option_menu();
	option = get_option();
	
	return 0;
}