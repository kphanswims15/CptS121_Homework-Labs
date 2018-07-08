#include "play_game.h"

/************************************************************
 * Function: void print_game_rules (void)                   *
 * Date Created: October 2, 2015                           *
 * Date Last Modified:	October 2, 2015                     *
 * Description: Prints out the rule of the game of "craps". *
 * Input Parameters: None                                   *
 * Returns: None                                            *
 * Preconditions: None                                      *
 * Postconditions: Prints out the rule for "craps."         *
 ************************************************************/
void print_game_rules (void)
{
	printf ("**********************************************Game Rules for Craps***********************************************\n");
	printf ("* A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots.              *\n");
	printf ("* After the dice have come to rest, the sum of the spots on the two upward faces is calculated.                 *\n");
	printf ("* If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the first             *\n");
	printf ("* throw (called \"craps\"), the player loses (i.e. the \"house\" wins). If the sum is 4, 5, 6, 7, 8, 9, or 10       *\n");
	printf ("* on the first throw, then the sum becomes the player's \"point\". To win, you must conitnue                      *\n");
	printf ("* rolling the dice until you \"make your point.\" The player loses by rolling a 7 before making the point.        *\n");
	printf ("*****************************************************************************************************************\n");

	return;
}

/*************************************************************************
 * Function: double get_bank_balance (void)                              *
 * Date Created: October 2, 2015                                         *
 * Date Last Modified: October 2, 2015                                   *
 * Description: Prompts the player for an intial bank balance from which *
 * 			    wagering will be added or subtracted                     *
 * Input Parameters: None                                                *
 * Returns: The player entered bank balance is returned.                 *
 * Preconditions: None                                                   *
 * Postconditions: The bank balance is returned                          *
 *************************************************************************/
double get_bank_balance (void)
{
	double bank_balance = 0.0;

	printf ("Please enter you intial bank balance: ");
	scanf ("%lf", &bank_balance);

	return bank_balance;
}

/************************************************************************
 * Function: double get_wager_amount                                    *
 * Date Created: October 2, 2015                                        *
 * Date Last Modified: October 2, 2015                                  *
 * Description: Prompts the player for a wager on a particular roll.    *
 * Input Parameters: None                                               *
 * Returns: The wager is returned.                                      *
 * Preconditions: None                                                  *
 * Postconditions: The wager that is inputed by the player is returned. *
 ************************************************************************/
double get_wager_amount (void)
{
	double wager_amount = 0.0;

	printf ("Please enter your wager: ");
	scanf ("%lf", &wager_amount);

	return wager_amount;
}

/************************************************************************
 * Function: int check_wager_amouont (double wage, double balance)      *
 * Date Created: October 2, 2015                                        *
 * Date Last Modified: October 2, 2015                                  *
 * Description: Checks to see if the wager is within the limits of the  *
 *              player's allowable balance.                             *
 * Input Parameters: double wager and double balance                    *
 * Returns: 1 for within the limits and 0 outside the limits            *
 * Preconditions: double wager and double balance need to be available. *
 * Postconditions: Determines if the wager is within the bounds         *
 ************************************************************************/
int check_wager_amount (double wager, double balance)
{
	int check = 0;

	if (wager <= balance)
	{
		check = 1;
	}
  
	return check;
}

/*****************************************************************************
 * Function: int roll_die (void)                                             *
 * Date Created: October 2, 2015                                             *
 * Date Last Modified: October 2, 2015                                       *
 * Description: Rolls one die. This function should randomly generatea value *
 * 			    between 1 and 6, inclusively.                                *
 * Input Parameters: None                                                    *
 * Returns: Value of the Die                                                 *
 * Preconditions: None                                                       *
 * Postconditions: Returns a random number between 1 and 6.                  *
 *****************************************************************************/
int roll_die (void)
{
	int die_value = 0;

	die_value = rand () % 6 + 1;

	return die_value;
}

/***************************************************************
 * Function: void display_die (int dice)                       *
 * Date Created: October 6, 2015                               *
 * Date Last Modified: October 6, 2015                         *
 * Description: Displays the dice                              *
 * Input Parameters: int dice                                  *
 * Returns: Nothing                                            *
 * Preconditions: the value of the dice needs to be avaialble. * 
 * Postconditions: the value of the dice is displayed.         *
 ***************************************************************/
void display_die (int dice)
{
	if (dice == 1)
	{
		printf ("+---------+\n");
		printf ("|         |\n");
		printf ("|   (-)   |\n");
		printf ("|         |\n");
		printf ("+---------+\n");
	}
    
	if (dice == 2)
	{
		printf ("+---------+\n");
		printf ("|(-)      |\n");
		printf ("|         |\n");
		printf ("|      (-)|\n");
		printf ("+---------+\n");
	}
	
	if (dice == 3)
	{
		printf ("+---------+\n");
		printf ("|(-)      |\n");
		printf ("|   (-)   |\n");
		printf ("|      (-)|\n");
		printf ("+---------+\n");
	}
	
	if (dice == 4)
	{
		printf ("+---------+\n");
		printf ("|(-)   (-)|\n");
		printf ("|         |\n");
		printf ("|(-)   (-)|\n");
		printf ("+---------+\n");
	}
	
	if (dice == 5)
	{
		printf ("+---------+\n");
		printf ("|(-)   (-)|\n");
		printf ("|   (-)   |\n");
		printf ("|(-)   (-)|\n");
		printf ("+---------+\n");
	}

	if (dice == 6)
	{
		printf ("+---------+\n");
		printf ("|(-)   (-)|\n");
		printf ("|(-)   (-)|\n");
		printf ("|(-)   (-)|\n");
		printf ("+---------+\n");
	}
	return;
}

/*******************************************************************************
 * Function: int calculate_sum_dice (int die1_value, int die2_value)           *
 * Date Created: October 2, 2015                                               *
 * Date Last Modified: October 2, 2015                                         *
 * Description: Sums together the values of the two dice                       *
 * Input Parameters: int die1_value and int die2_value                         *
 * Returns: the sum of the two die                                             *
 * Preconditions: die1_value and die2_value must be available                  *
 * Postcondidtions: Sum of the two die are added up and the value is returned. *
 *******************************************************************************/
int calculate_sum_dice (int die1_value, int die2_value)
{
	int sum_dice = 0;

	sum_dice = die1_value + die2_value;

	return sum_dice;
}

/*************************************************************************************
 * Date Created: October 2, 2015                                                     *
 * Date Last Modified: October 2, 2015                                               *
 * Description: Determines the result of the first dice roll. If the sum is 7 or 11  *
 * 			    on the roll, the player wins and 1 is returned. If the sum is 2, 3,  *
 * 			    or 12 on the first throw (called "craps"), the player loses (i.e.    *
 * 	    	    the "house" wins) and 0 is returned. If the sum is 4, 5, 6, 8, 9,    *
 * 			    or 10 on the first throw, then the sum becomes the player's "point"  *
 * 			    and -1 is returned.                                                  *
 * Input Parameters: int sum_dice                                                    *
 * Returns: returns 1 when the player wins. 0 when the player loses. -1 when the sum *
 *		    is 4, 5, 6, 8, 9, or 10.                                                 *
 * Preconditions: the sum of the dice has to be available                            *
 * Postconditions: Determines the sum of the dice if it is a win, lose or a point.   *
 *************************************************************************************/
int is_win_loss_or_point (int sum_dice)
{
	int check = 0;

	if (sum_dice == 7 || sum_dice == 11)
	{
		check = 1;
	}

	if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12)
	{
		check = 0;
	}

	if (sum_dice == 4 || sum_dice == 5, sum_dice == 6 || sum_dice == 8 || sum_dice == 9 || sum_dice == 10)
	{
		check = -1;
	}

	return check;
}

/***************************************************************************************
 * Date Created: October 2, 2015													   *
 * Date Last Modified: October 2, 2015												   *
 * Function: int is_point_loss_or_neither (int sum_dice, int point_value)			   *
 * Description: Determines the result of any successive roll after the first roll. If  *
 *				the sum of the roll is the point_value, then 1 is returned. If the sum *
 *				of the roll is a 7, then 0 is returned. Otherwise, -1 is returned.     *
 * Input Parameters: int sum_dice and int point_value								   *
 * Returns: 1 if the sum of the roll is the point_value. 0 if the sum of the roll is a *
 *          7. -1 otherwise.                                                           *
 * Preconditions: int sum_dice and int point_value needs to be avaliable			   *
 * Postconditions: Deteremines if it is a 7 or not and returns 0 or -1.				   *
 ***************************************************************************************/
int is_point_loss_or_neither (int sum_dice, int point_value)
{
	int check = -1;

	if (sum_dice == point_value)
	{
		check = 1;
	}

	if (sum_dice == 7)
	{
		check = 0;
	}

   return check;
}

/********************************************************************************************************
 * Date Created: October 2, 2015                                                                        *
 * Date Last Modified: October 6, 2015                                                                  *
 * Function: double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract) *
 * Description: If add_or_subtract is 1, then the wager amount is added to the bank_balance. If add_or  *
 *			    subtract is 0, then the wager amount is subtracted from the bank_balance. Otherwise,    *
 *			    the bank_balance remains the same. The bank_balance result is returned.                 *
 * Input Parameters: double bank_balance, double wager_amount, int add_or_subtract                      *
 * Returns: the final balance is returned                                                               *
 * Preconditions: bank_balance, wager_amount, and add_or_subtract needs to be avaliable                 *
 * Postconditions: The result is returned                                                               *
 ********************************************************************************************************/
double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract)
{
	double final_balance = bank_balance;

	if (add_or_subtract == 1)
	{
		final_balance = bank_balance + wager_amount;
	}

	if (add_or_subtract == 0)
	{
		final_balance = bank_balance - wager_amount;
	}

	return final_balance;
}

/**************************************************************************************************************************************
 * Date Created: October 2, 2015																									  *
 * Date Last Modified: October 5, 2015																								  *
 * Function: void chatter_messages (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance) *
 * Description: Prints an appropriate message dependent on the number of rolls taken so far by the player, the current balance, and   *
 *              wether or not the player just won his roll. The parameter win_loss_neither indicates the result of the previous       *
 *			    roll.																												  *
 * Input Parameters: int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance				  *
 * Returns: None																													  *
 * Preconditions: number_rolls, win_loss_neither, initial_bank_balance, current_bank_balance										  *
 * Postconditions: A message is displayed																							  *
 **************************************************************************************************************************************/
void chatter_messages (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)
{
	if (win_loss_neither == 1)
	{
		printf ("**************Results*************\n");
		printf ("* Congrats you made the jackpot! *\n");
		printf ("* Number of rolls taken: %d       *\n", number_rolls);
		printf ("* Initial bank balance: %.2lf     *\n", initial_bank_balance);
		printf ("* Current bank balance: %.2lf     *\n", current_bank_balance);
		printf ("**********************************\n");
	}

	if (win_loss_neither == 0)
	{
		printf ("************Results**************\n");
		printf ("* Loser! Better Luck Next Time! *\n");
		printf ("* Number of rolls taken: %d      *\n", number_rolls);
		printf ("* Initial bank balance: %.2lf     *\n", initial_bank_balance);
		printf ("* Current bank balance: %.2lf     *\n", current_bank_balance);
		printf ("*********************************\n");
	}

	if (win_loss_neither == -1)
	{
		printf ("Nothing....");
	}
	return;
}