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

	do
	{
		printf ("*********Yahtzee Menu*********\n");
		printf ("* 1. Print game rules        *\n");
		printf ("* 2. Start a game of Yahtzee *\n");
		printf ("* 3. Exit                    *\n");
		printf ("******************************\n");
		printf ("Please enter your option: ");
		scanf ("%d", &option);
		clear_screen ();

		switch (option)
		{
			case 1: print_game_rules ();
					break;
			case 2: play_the_game ();
					break;
			case 3: printf ("Goodbye! Thank you for playing!\n");
					break;
		}
	} while (option != 3);

	return;
}

/***********************************************************************
 * Function: void clear_screen (void)                                  *
 * Date Created: October 9, 2015                                       *
 * Date Last Modified: October 20, 2015                                *
 * Description: Clears the screen after an option is chosen            *
 * Input Parameters: None                                              *
 * Returns: None.                                                      *
 * Preconditions: None                                                 *
 * Postconditions: The screen is clear                                 *
 ***********************************************************************/
void clear_screen (void)
{
	system ("cls");

	return;
}

/************************************************************
 * Function: void system_pause (void)                       *
 * Date Created: October 9, 2015                            *
 * Date Last Modified: October 23, 2015                     *
 * Description: Displays press any key to continue          *
 * Input Parameters: None                                   *
 * Returns: None.                                           *
 * Preconditions: None                                      *
 * Postconditions: press any key to continue should display *
 ************************************************************/
void system_pause (void)
{
	system ("pause");

	return;
}

/************************************************************************
 * Function: void print_game_rules (void)                               *
 * Date Created: October 9, 2015                                        *
 * Date Last Modified: October 9, 2015                                  *
 * Description: Prints the game rules                                   *
 * Input Parameters: None.                                              *
 * Returns: None.                                                       *
 * Preconditions: None.                                                 *
 * Postconditions: Game rules are printed if option one is chosen.      *
 ************************************************************************/
void print_game_rules (void)
{
	printf ("***************************************Game Rules****************************************\n");
	printf ("* The scorecard used for Yahtzee is composed of two sections. A upper section and       *\n"); 
	printf ("* a lower section. A total of thirteen boxes or thirteen scoring combinations are       *\n");
	printf ("* divided amongst the sections. The upper section consists of boxes that are scored     *\n");
	printf ("* by summing the value of the dice matching the faces of the box. If a player rolls     *\n");
	printf ("* four 3's, then the score placed in the 3's box is the sum of the dice which is 12.    *\n");
	printf ("* Once a player has chosen to score a box, it may not be changed and the combination    *\n");
	printf ("* is no longer in play for future rounds. If the sum of the scores in the upper section *\n"); 
	printf ("* is greater than or equal to 63, then 35 more points are added to the players overall  *\n");
	printf ("* score as a bonus. The lower section contains a number of poker like combinations.     *\n");
	printf ("*****************************************************************************************\n");

	return;
}

/*******************************************************************************************
 * Function: void play_the_game (void)                                                     *
 * Date Created: October 22, 2015                                                          *
 * Date Last Modified: October 23, 2015                                                    *
 * Description: Plays the game of Yahtzee and allows to alternate players                  *
 * Input Parameters: None.                                                                 *
 * Returns: None.                                                                          *
 * Preconditions: Roll dice function, reroll dice function and select combination function *
 *				  needs to be available.                                                   *
 * Postconditions: The game of Yahtzee will play and alternate players                     *
 *******************************************************************************************/
void play_the_game (void)
{
	int count = 0, dice [5] = {0};

	//holds the scores for each player
	int scores1 [13] = {0}, scores2 [13] = {0}, sum1 = 0, sum2 = 0;

	//holds the scores for each player
	int combination_used1 [13] = {0}, combination_used2 [13] = {0};

	srand ((unsigned int) time (NULL));

	//plays 26 rounds and alternate players
	for (count = 0; count < 28; count ++)
	{
		//allows to swtich player
		if (count % 2 == 0)
		{
			printf ("Player 1's turn\n");
			system_pause ();
			roll_dice (dice, 5);
			display_dice (dice, 5);
			reroll_dice (dice, 5);
			select_combination (dice, scores1, combination_used1);
			system_pause ();
			clear_screen ();
		}
		else
		{
			printf ("Player 2's turn\n");
			system_pause ();
			roll_dice (dice, 5);
			display_dice (dice, 5);
			reroll_dice (dice, 5);
			select_combination (dice, scores2, combination_used2);
			system_pause ();
			clear_screen ();
		}
	}

	sum1 = calculate_scores (scores1, 13);
	sum2 = calculate_scores (scores2, 13);

	if (sum1 >= 63)
	{
		sum1 = sum1 + 35;
	}

	if (sum2 >= 63)
	{
		sum2 = sum2 + 35;
	}

	printf ("Player one's score is %d\n", sum1);
	printf ("Player two's score is %d\n", sum2);

	if (sum1 > sum2)
	{
		printf ("Player one wins!\n");
	}
	else
	{
		printf ("Player two wins!\n");
	}

	return;
}

/******************************************************************************
 * Function: void roll_dice (int dice_value [], int num_items)                *
 * Date Created: October 12, 2015                                             *
 * Date Last Modified: October 13, 2015                                       *
 * Description: Rolls five dice for the game Yahtzee                          *
 * Input Parameters: int dice_value [] and int num_items                      *
 * Returns: None.                                                             *
 * Preconditions: dice value and the number of items need to be avaliable     *
 * Postconditions: The five dice should be rolled                             *
 ******************************************************************************/
void roll_dice (int dice_value[], int num_items)
{
	int index = 0;

	for (index = 0; index < num_items; index++)
	{
		dice_value[index] = rand () % 6 + 1;
	}

	return;
}

/******************************************************************************
 * Function: void display_dice (int dice_value [], int num_items)             *
 * Date Created: October 13, 2015                                             *
 * Date Last Modified: October 13, 2015                                       *
 * Description: Displays all five dice                                        *
 * Input Parameters: int dice_value [], int num_item                          *
 * Returns: None.                                                             *
 * Preconditions: The dice value and the number of items need to be avaliable *
 * Postconditions: The five dice should be displayed                          *
 ******************************************************************************/
void display_dice (int dice_value [], int num_items)
{
	int index = 0;

	while (index < num_items)
	{
		printf ("dice [%d]\n", index + 1);

		if (dice_value [index] == 1)
		{
			printf ("+---------+\n");
			printf ("|         |\n");
			printf ("|   (-)   |\n");
			printf ("|         |\n");
			printf ("+---------+\n");
		}
		else if (dice_value [index] == 2)
		{
			printf ("+---------+\n");
			printf ("|(-)      |\n");
			printf ("|         |\n");
			printf ("|      (-)|\n");
			printf ("+---------+\n");
		}
		else if (dice_value [index] == 3)
		{
			printf ("+---------+\n");
			printf ("|(-)      |\n");
			printf ("|   (-)   |\n");
			printf ("|      (-)|\n");
			printf ("+---------+\n");
		}
		else if (dice_value [index] == 4)
		{
			printf ("+---------+\n");
			printf ("|(-)   (-)|\n");
			printf ("|         |\n");
			printf ("|(-)   (-)|\n");
			printf ("+---------+\n");
		}
		else if (dice_value [index] == 5)
		{
			printf ("+---------+\n");
			printf ("|(-)   (-)|\n");
			printf ("|   (-)   |\n");
			printf ("|(-)   (-)|\n");
			printf ("+---------+\n");
		}
		else if (dice_value [index] == 6)
		{
			printf ("+---------+\n");
			printf ("|(-)   (-)|\n");
			printf ("|(-)   (-)|\n");
			printf ("|(-)   (-)|\n");
			printf ("+---------+\n");
		}
		index++;
	}
	return;
}

/***************************************************************************************************
 * Function: void reroll_dice (int dice_values [], int num_items)                                  *
 * Date Created: October 19, 2015                                                                  *
 * Date Last Modified: October 19, 2015                                                            *
 * Description: Asks the user wether or not if they want to use the dice rolled for a combination. *
 *				If they said yes then the loop will break. If the user says no ask the user how    *
 *				many dice they want to roll, then ask which dice they want to roll                 *
 * Input Parameters: int dice_value, int num_items                                                 *
 * Returns: None.                                                                                  *
 * Preconditions: The dice needs to be already rolled                                              *
 * Postconditions: The dice chosen should be rerolled                                              *
 ***************************************************************************************************/
void reroll_dice (int dice_values[], int num_items)
{
	int num_reroll = 0, position = 0, count = 0, times = 0;
	char answer = '/0';

	do
	{
		printf ("Would you like to use this roll for a combination (enter y for yes or n for no)? ");
		scanf (" %c", &answer);

		switch (answer)
		{
			case 'n': printf ("How many dice would you like to reroll? ");
					  scanf ("%d", &num_reroll);

					  for (count = 0; count < num_items; count++)
					  {
						 printf ("Which die would you like to reroll? ");
						 scanf ("%d", &position);
						 dice_values [position - 1] = rand () % 6 + 1;
						 system_pause ();
						 clear_screen ();
						 display_dice (dice_values, 5);
					  }
			case 'y': print_combination_menu ();
					  break;
			default: break;
		} 
	} while (answer != 'y');

	return;
}

/********************************************************
 * Function: void print_combination_menu (void)         *
 * Date Created: October 19, 2015                       *
 * Date Last Modified: October 19, 2015                 *
 * Description: Prints a menu for combinations          *
 * Input Parameters: None                               *
 * Returns: None.                                       *
 * Preconditions: None                                  *
 * Postconditions: A combination menu should be printed *
 ********************************************************/
void print_combination_menu (void)
{
	printf ("************Combination Menu**************\n");
	printf ("* 1. Sum of 1's       7. Three-of-a-kind *\n");
	printf ("* 2. Sum of 2's       8. Four-of-a-kind  *\n");
	printf ("* 3. Sum of 3's       9. Full house      *\n");
	printf ("* 4. Sum of 4's       10. Small straight *\n");
	printf ("* 5. Sum of 5's       11. Large straight *\n");
	printf ("* 6. Sum of 6's       12. Yahtzee        *\n");
	printf ("*            13. Chance                  *\n");
	printf ("******************************************\n");

	return;
}

/************************************************************************************
 * Function: void select_combination (int dice_values[], int score[], int comb_use) *
 * Date Created: October 19, 2015                                                   *
 * Date Last Modified: October 23, 2015                                             *
 * Description: Player chooses a combination and checks if you used the combination *
 * Input Parameters: int dice_values[], int score[], and comb_use[]                 *
 * Returns: None.                                                                   *
 * Preconditions: dice_value, scores, and comb_used arrays need to be availble      *
 * Postconditions: The combination should be chosen and check if the combination    *
 *				   is valid.                                                        *
 ************************************************************************************/
void select_combination (int dice_values[], int scores[], int comb_used[])
{
	int option = 0, check_flag = 0, num_values[6] = {0};

	do
	{
		check_flag = 0;
		printf ("Enter the combination you would like to use: ");
		scanf ("%d", &option);

		if (comb_used[option - 1] == 1)
		{
			check_flag = 1;
		}
	} 
	while (check_flag);

	comb_used[option - 1] = 1; 
	populate_num_dice (dice_values, num_values);

	switch (option)
	{
		case 1: scores [0] =  num_values [0] * 1;
			    break;
		case 2: scores [1] = num_values [1] * 2;
				break;
		case 3: scores [2] = num_values [2] * 3;
				break;
		case 4: scores [3] = num_values [3] * 4;
				break;
		case 5: scores [4] = num_values [4] * 5;
				break;
		case 6: scores [5] = num_values [5] * 6;
				break;
		case 7: scores [6] = calculate_dice_values (dice_values, 5);
				break;
		case 8: scores [7] = calculate_dice_values (dice_values, 5);
				break;
		case 9: scores [8] = 25;
				break;
		case 10: scores [9] = 30;
				 break;
		case 11: scores [10] = 40;
				 break;
		case 12: scores [11] = 50;
				 break;
		case 13: scores [12] = calculate_dice_values (dice_values, 5);
		default: break;
	}
	
	return;
}

/********************************************************************************
 * Function: void populate_num_dice (int dice_values [], int num_values [])     *
 * Date Created: October 19, 2015                                               *
 * Date Last Modified: October 19, 2015                                         *
 * Description: Populates an empty array.                                       *
 * Input Parameters: int dice_value, int num_values                             *
 * Returns: None.                                                               *
 * Preconditions: The array of dice_values and num_values needs to be available *
 * Postconditions: The array will be populated.                                 *
 ********************************************************************************/
void populate_num_dice (int dice_values[], int num_values[])
{
	int index = 0;

	for (; index < 5; index++)
	{
		num_values[dice_values[index] - 1]++;
	}
	
	return;
}

/*******************************************************************************************************
 * Function: int calculate_dice_values (int dice_values[], int num_items)                              *
 * Date Created: October 23, 2015                                                                      *
 * Date Last Modified: October 23, 2015                                                                *
 * Description: Calculates the face values of the dice for three-of-a-kind, four-of-a-kind, and chance *
 * Input Parameters: int dice_values[], int number_of_items                                            *
 * Returns: None.                                                                                      *
 * Preconditions: dice_values and the number of items should be available                              *
 * Postconditions: All the face values should added up.                                                *
 *******************************************************************************************************/
int calculate_dice_values (int dice_values[], int num_items)
{
	int sum = 0, count = 0;

	for (count = 0; count < num_items; count++)
	{
		sum += dice_values [count];
	}

	return sum;
}

/*******************************************************************************************************
 * Function: int calculate_score (int scores[], int num_items)                                         *
 * Date Created: October 23, 2015                                                                      *
 * Date Last Modified: October 23, 2015                                                                *
 * Description: Calculates the scores for each player                                                  *
 * Input Parameters: int dice_values[], int number_of_items                                            *
 * Returns: None.                                                                                      *
 * Preconditions: scores should be added up                                                            *
 * Postconditions: The scores will be added up.                                                        *
 *******************************************************************************************************/
int calculate_scores (int scores[], int num_items)
{
	int sum = 0, count = 0;

	for (count = 0; count < num_items; count++)
	{
		sum += scores[count];
	}

	return sum;
}