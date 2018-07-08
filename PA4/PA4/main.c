/***************************************************************************************************************************************
 * Programmer: Kimberlee Phan	                                                                                                       *
 *                                                                                                                                     *
 * Got Help From: Megan McPherson                                                                                                      *
 * 																																       *
 * Class: CptS, Fall 2015; Lab Section: 5																							   *	
 *																																       *
 * Programming Assignment: PA4																										   *
 *																																       *
 * Date Created: October 2, 2015																									   *
 *																																       *
 * Date Last Modified: October 6, 2015																								   *
 *																															           *
 * Description: Write a program that implements a craps game according to the above rules.											   *
 *			    The game should allow for wagering. This means that you need to prompt that										       *
 *			    user for an initial bank balance from which wagers will be added or subtracted.									       *
 *			    Before each roll prompt the user for a wager. Once a game is lost or won, the										   *
 *		        bank balance should be adjusted. As the game progresses, print various messages									       *
 * 		        to create some "chatter" such as, "Sorry, you busted!", or "Oh, you're going for									   *
 *			    broke, huh?", or "Aw cmon, take a chance!", or "You're up big, now's the time to									   *
 *			    cash in your chips!"																								   *
 *																																       *
 * Functions:																														   *
 *		-void print_game_rules (void)																								   *
 *		-double get_bank_balance (void)																								   *
 *		-double get_wager_amount (void)																								   *
 *		-int check_wager_amount (double wager, double balance)																		   *
 *		-int roll_die (void)			                                                                                               *
 *      -void display_die (int dice);                                                                                                  *
 *		-int calculate_sum_dice (int die1_value, int die2_value)																	   *
 *		-int is_win_loss_or_point (int sum_dice)																					   *
 *		-int is_point_loss_or_neither (int sum_dice, int point_value)																   *
 *		-double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract)									   *
 *		-void chatter_messages (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)	   *
 *																																	   *
 * A main() function that does: function that makes use of the above functions in order to play the game of craps as explained above.  *
 ***************************************************************************************************************************************/
#include "play_game.h"

int main (void)
{
	double balance = 0.0, wager = 0.0, current_balance = 0.0;
	int check_wager = 0, dice1 = 0, dice2 = 0, dice3 = 0, dice4 = 0, sum = 0, sum2 = 0, roll_again = 0, point_loss_or_neither = 0, rolls = 0;
	srand ((unsigned int) time (NULL));

	//prints the game rules
	print_game_rules();
	
	//Gets the balance from the user 
	balance = get_bank_balance();
	
	//Gets the wager from the user
	wager = get_wager_amount();
	
	//checks the wager to see if it is okay
	check_wager = check_wager_amount (wager, balance);

	//Runs the code if wager is the right amount.
	if (check_wager == 1)
	{
		dice1 = roll_die();
		display_die (dice1);
		dice2 = roll_die();
		display_die (dice2);
		sum = calculate_sum_dice(dice1, dice2);
		roll_again = is_win_loss_or_point(sum);
		rolls = 1;

		//Runs if is_win_loss_or_neither returns -1.
		while (roll_again == -1)
		{
			dice3 = roll_die();
			display_die (dice3);
			dice4 = roll_die();
			display_die (dice4);
			sum2 = calculate_sum_dice (dice3, dice4);
			roll_again = is_point_loss_or_neither (sum, sum2);
			//Determins the number of rolls taken
			rolls ++;
		}
		
			//Adjusts the bank balance
			current_balance = adjust_bank_balance (balance, wager, roll_again);
			//Gives a response based on the information given.
			chatter_messages (rolls, roll_again, balance, current_balance);
		}
	else 
	{
		printf ("Your bet too much! Gotta bet less than your bank balance.\n");
	}

	system("pause");
	return 0;
}