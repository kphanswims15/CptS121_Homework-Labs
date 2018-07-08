#include "game_functions.h"

/*******************************************************************************************************************************
 * Programmer: Kimberlee Phan                                                                                                  *
 *                                                                                                                             *
 * Class: CptS 121, Fall 2015; Lab Section: 5                                                                                  *
 *                                                                                                                             *
 * Programming Assignment: PA7                                                                                                 *
 *                                                                                                                             *
 * Date: November 22, 2015                                                                                                     *
 *                                                                                                                             *
 * Date Last Modified: December 5, 2015                                                                                        *
 *                                                                                                                             * 
 * Description: For this assignment you will need to design and construct a basic math program which targets elementary school *
 *			    children.                                                                                                      *
 *******************************************************************************************************************************/

int main (void)
{
	int total_points_levels[5] = {0};
	int total_points_for_game = 0, option = 0, level_option;
	char initals[3] = {'\0'};
	FILE *output = NULL;

	output = open_file_write ();

	do
	{
		game_menu (&option);

		switch (option)
		{
			case 1: learn_about_the_program ();
					break;
			case 2: enetr_intials (initals);
					break;
			case 3: difficulty_selections (&level_option);
					switch (level_option)
					{
						case 1: level_one(total_points_levels, 0);
								total_points_for_game = total_points (total_points_levels, 5);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 2: level_two (total_points_levels, 1);
								total_points_for_game = total_points (total_points_levels, 5);
								printf ("Congrats! You've completed level two.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 3: level_three (total_points_levels, 2);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 4: level_four(total_points_levels, 3);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 5: level_five(total_points_levels, 4);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						default: printf ("Invalid input\n");
								 break;
					}
			case 4: difficulty_selections (&level_option);
					switch (level_option)
					{
						case 1: level_one(total_points_levels, 0);
								total_points_for_game = total_points (total_points_levels, 5);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 2: level_two (total_points_levels, 1);
								total_points_for_game = total_points (total_points_levels, 5);
								printf ("Congrats! You've completed level two.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 3: level_three (total_points_levels, 2);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 4: level_four(total_points_levels, 3);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						case 5: level_five(total_points_levels, 4);
								printf ("Congrats! You've completed level one.");
								printf ("Total points for game: %d\n", total_points_for_game);
								system ("pause");
								system ("cls");
								break;
						default: printf ("Invalid input\n");
								 break;
					}
			case 5: total_points_for_game = (total_points_levels, 5);
					save_to_file (output, total_points_for_game, initals);
					break;
			default: printf ("Invalid input\n");
		}
	}while (option != 5);

	fclose(output);

	return 0;
}