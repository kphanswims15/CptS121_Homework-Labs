/*********************************************************************************
 * Date Created: October 9, 2015                                                 *
 * Date Last Modified: October 20, 2015                                          *
 * Description: Contains prototypes of the program and holds standard libraries. *
 *********************************************************************************/
#define CRT_SECURE_NO_WARNINGS
#ifndef GAME_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void run_option_menu (void);
void clear_screen (void);
void system_pause (void);
void print_game_rules (void);
void play_the_game (void);
void roll_dice (int dice_value[], int num_items);
void display_dice (int dice_value[], int num_items);
void reroll_dice (int dice_Value [], int num_items);
void print_combination_menu (void);
void select_combination (int dice_values[], int scores[], int com_used[]);
void populate_num_dice (int dice_values[], int num_values[]);
int calculate_dice_values (int dice_values[], int num_items);
int calculate_scores (int scores[], int num_items);

#endif