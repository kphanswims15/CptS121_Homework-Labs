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
		printf ("*******Yahtzee Game Menu******\n");
		printf ("* 1. Print game rules        *\n");
		printf ("* 2. Start a game of Yahtzee *\n");
		printf ("* 3. Exit                    *\n");
		printf ("******************************\n");
		printf ("Please enter an option: ");
		scanf ("%d", &option);
		clear_screen ();

		switch (option)
		{
			case 1: print_game_rules ();
				    break;
			case 2: play_the_game ();
				    break;
			case 3: printf ("Goodbye! Thanks for playing!/n");
					break;
			default: break;
		}
	}
	while (option != 3);

	return;
}

/****************************************
 * Function: void clear_screen (void)   *
 * Date Created: October 9, 2015        *
 * Date Last Modified: October 20, 2015 *
 * Description: Clears the screen.      *
 * Input Parameters: None               *
 * Returns: None.                       *
 * Preconditions: None                  *
 * Postconditions: The screen is clear  *
 ****************************************/
void clear_screen (void)
{
	system ("cls");

	return;
}

/************************************************************
 * Function: void system_pause (void)                       *
 * Date Created: October 9, 2015                            *
 * Date Last Modified: October 20, 2015                     *
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
				  needs to be available.                                                   *
 * Postconditions: The game of Yahtzee will play and alternate players                     *
 *******************************************************************************************/
void play_the_game (void)
{
	int count = 0, dice [5] = {0};
	
	// hold the scores for each player
	int scores1 [13] = {0}, scores2 [13] = {0};
	
	//hold the combinations used for each player
	int combination_used1 [13] = {0}, combination_used2 [13] = {0};

	//A better range of random numbers
	srand ((unsigned int) time (NULL));

	//Plays 13 rounds for each player
	for (count = 0; count < 26; count++)
	{
		//allow to swtich players
		if (count % 2 == 0)
		{
			printf ("Round %d: Player 1's turn/n", count);
			roll_dice (dice, 5);
			display_dice (dice, 5);
		}
		else
		{
			printf ("Round %d: Play 2's turn/n", count);
			roll_dice (dice, 5);
			display_dice (dice, 5);
		}
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

		printf ("How many dice would you like to reroll? ");
		scanf ("%d", &num_reroll);

		for (count = 0; count < num_items; count++)
		{
			printf ("Which die would you like to reroll? ");
			scanf ("%d", &position);
			dice_values [position - 1] = rand () % 6 + 1;
		}
		display_dice (dice_values, 5);
		times++;
	}
	while (answer != 'y' || times < 3);

	return;
}