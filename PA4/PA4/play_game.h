/******************************************************************************
 * Date Created: October 2, 2015                                              *
 * Date Last Modified: October 6, 2015                                        *
 * Description: This contains libraries and functions to play the game craps. *
 ******************************************************************************/
#define _CTR_SECURE_NO_WARNINGS
#ifndef PLAY_GAME_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_game_rules (void);
double get_bank_balance (void);
double get_wager_amount (void);
int check_wager_amount (double wager, double balance);
int roll_die (void);
void display_die (int dice);
int calculate_sum_dice (int die1_value, int die2_value);
int is_win_loss_or_point (int sum_dice);
int is_point_loss_or_neither (int sum_dice, int point_value);
double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract);
void chatter_messages (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);

#endif