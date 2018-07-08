/*********************************************************************************
 * Date Created: October 9, 2015                                                 *
 * Date Last Modified: October 22, 2015                                          *
 * Description: Contains prototypes of the program and holds standard libraries. *
 *********************************************************************************/
#define _CTR_SECURE_NO_WARNNINGS
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
void reroll_dice (int dice_values[], int num_items);

#endif