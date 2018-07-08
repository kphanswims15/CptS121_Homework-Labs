/*******************************************************************************************************************************
 * Programmer: Kimberlee Phan                                                                                                  *
 *                                                                                                                             *
 * Class: CptS 121, Fall 2015; Lab Section: 5                                                                                  *
 *                                                                                                                             *
 * Programming Assignment: PA5                                                                                                 *
 *                                                                                                                             *
 * Date: October 9, 2015                                                                                                       *
 *                                                                                                                             *
 * Date Last Modified: November 15, 2015                                                                                       *
 *                                                                                                                             * 
 * Description: Design the Yahtzee game with functions that you see fit. I recommend that you start with a structure chart     *
 * and determine sub-problems and functions accordingly. You must also take advantage of applying pointers, output parameters, * 
 * and/or arrays!                                                                                                              *
 *******************************************************************************************************************************/
#include "game_functions.h"

int main (void)
{
	FILE *output = NULL;
	int option = 0, player_1 = 1, player_2 = 2, turn = 0, target_row = 0, target_col = 0, hit_or_miss = 0, x = 0, y = 0;
	int number_of_ships_player1 = 0, number_of_ships_player2 = 0, ships = 5;
	int check_carrier = 0, check_battleship = 0, check_cruiser = 0, check_submarine = 0, check_destroyer = 0;
	char player1_board [10][10] = {{'\0', '\0'}, {'\0'}};
	char player2_board [10][10] = {{'\0', '\0'}, {'\0'}};
	struct stats player1;
	struct stats player2;

	srand ((unsigned int) time (NULL));
	
	//opens up battleship.log
	output = open_file_write ();

	option = welcome_screen ();
	clear_screen ();

	//Human player board being set up
	switch (option)
	{
		case 1: initialize_game_board (player1_board, 10, 10);
				display_board (player1_board, 10, 10, player_1);
				
				//Places the Carrier
				manually_place_ships_on_board(player1_board, 'c');
				system_pause ();
				clear_screen ();
				display_board (player1_board, 10, 10, player_1);

				//Places the Battleship
				manually_place_ships_on_board (player1_board, 'b');
				system_pause ();
				clear_screen ();
				display_board (player1_board, 10, 10, player_1);

				//Places the Cruiser
				manually_place_ships_on_board (player1_board, 'r');
				system_pause ();
				clear_screen ();
				display_board (player1_board, 10, 10, player_1);

				//Places the Submarine
				manually_place_ships_on_board (player1_board, 's');
				system_pause ();
				clear_screen ();
				display_board (player1_board, 10, 10, player_1);

				//Places the Destroyer
				manually_place_ships_on_board (player1_board, 'd');
				system_pause ();
				clear_screen ();
				display_board (player1_board, 10, 10, player_1);
				
				system_pause ();
				clear_screen ();
				break;

		case 2: initialize_game_board (player1_board, 10, 10);
				
				//Places the Carrier
				randomly_place_ships_on_board (player1_board, 'c');

				//Places the Battleship
				randomly_place_ships_on_board (player1_board, 'b');
				
				//Places the Cruiser
				randomly_place_ships_on_board (player1_board, 'r');

				//Places the Submarine
				randomly_place_ships_on_board (player1_board, 's');

				//Places the Destroyer
				randomly_place_ships_on_board (player1_board, 'd');

				display_board (player1_board, 10, 10, player_1);
				
				system_pause ();
				clear_screen ();
				break;

		default: printf ("Invalid input.");
				 break;
	}

	//computer board being set up
	initialize_game_board (player2_board, 10, 10);

	//Places the Carrier 
	randomly_place_ships_on_board (player2_board, 'c');

	//Places the Battleship
	randomly_place_ships_on_board (player2_board, 'b');

	//Places the Cruiser
	randomly_place_ships_on_board (player2_board, 'r');

	//Places the Submarine
	randomly_place_ships_on_board (player2_board, 's');

	//Places the Destroyer
	randomly_place_ships_on_board (player2_board, 'd');

	turn = select_who_starts_first ();

	if (turn == 0)
	{
		printf ("Player1 goes first!\n");
	}
	else
	{
		printf ("Player2 goes first!\n");
	}

	system_pause ();
	clear_screen ();

	while (number_of_ships_player1 != ships && number_of_ships_player2 != ships)
	{
		if (turn % 2 == 0)
		{
			//Player1
			display_board (player1_board, 10, 10, player_1);
			display_board (player2_board, 10, 10, player_2);
			printf ("Player1: \n");
			get_target (&target_row, &target_col);
			check_shot (player2_board, target_row, target_col, player_1, &x, &y, &hit_or_miss);
			update_board (player2_board, x, y, hit_or_miss);

			system_pause ();
			clear_screen();

			//Checks if the ship has sunk
			check_carrier = check_if_sunk_ship (player2_board, 10, 10, 'c');
			check_battleship = check_if_sunk_ship (player2_board, 10, 10, 'b');
			check_cruiser = check_if_sunk_ship (player2_board, 10, 10, 'r');
			check_submarine = check_if_sunk_ship (player2_board, 10, 10, 's');
			check_destroyer = check_if_sunk_ship (player2_board, 10, 10, 'd');

			//Displays lists of ships sunken
			printf ("Player2's sunken ships: \n");
			message_sunk (check_carrier, 'c');
			message_sunk (check_battleship, 'b');
			message_sunk (check_cruiser, 'r');
			message_sunk (check_submarine, 's');
			message_sunk (check_destroyer, 'd');

			number_of_ships_player2 = is_winner (player2_board);
			output_current_move (x, y, hit_or_miss, output, player_1, number_of_ships_player1);

			system_pause ();
			clear_screen ();

			update_stats (&player1, hit_or_miss, number_of_ships_player2);

			turn++; 
		}
		else
		{
			//Player2
			display_board (player1_board, 10, 10, player_1);
			display_board (player2_board, 10, 10, player_2);
			printf ("Player2: \n");
			random_target (&target_row, &target_col);
			check_shot (player1_board, target_row, target_col, player_2, &x, &y, &hit_or_miss);
			update_board (player1_board, x, y, hit_or_miss);

			system_pause ();
			clear_screen ();
			
			//Checks if the ship has sunk
			check_carrier = check_if_sunk_ship (player1_board, 10, 10, 'c');
			check_battleship = check_if_sunk_ship (player1_board, 10, 10, 'b');
			check_cruiser = check_if_sunk_ship (player1_board, 10, 10, 'r');
			check_submarine = check_if_sunk_ship (player1_board, 10, 10, 's');
			check_destroyer = check_if_sunk_ship (player1_board, 10, 10, 'd');

			//Displays lists of ships sunken
			printf ("Player1's sunken ships: \n");
			message_sunk (check_carrier, 'c');
			message_sunk (check_battleship, 'b');
			message_sunk (check_cruiser, 'r');
			message_sunk (check_submarine, 's');
			message_sunk (check_destroyer, 'd');
			
			number_of_ships_player2 = is_winner (player1_board);
			output_current_move (x, y, hit_or_miss, output, player_2, number_of_ships_player2);

			system_pause ();
			clear_screen ();

			update_stats (&player2, hit_or_miss, number_of_ships_player1);

			turn++;
		}
	}

	number_of_ships_player1 = is_winner (player2_board);
	number_of_ships_player2 = is_winner (player1_board);

	if (number_of_ships_player1 == ships)
	{
		printf ("Player1 wins!!!!! Yay! :)\n");
	}
	else 
	{
		printf ("Player2 wins. Booooooo!!!!!!\n");
	}

	output_stats (player1, output, player_1);
	output_stats (player2, output, player_2);

	fclose (output);

	return 0;
}