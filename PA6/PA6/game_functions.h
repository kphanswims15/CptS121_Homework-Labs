#define _CRT_SECURE_NO_WARNINGS
#ifndef GAME_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome_screen (void);
void initialize_game_board (void); 
void select_who_starts_first (void);
void manually_place_ships_on_board (void);
void randomly_place_ships_on_board (void);
void check_shot (void);
void is_winner (void);
void update_board (void);
void display_board (void);
void output_current_move (void);
void check_if_sunk_ship (void);
void output_stats (void);
void clear_screen (void);
void system_pause (void);

#endif 