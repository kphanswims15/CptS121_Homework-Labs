#define _CRT_SECURE_NO_WARNINGS
#ifndef GAME_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int welcome_screen (void);
void initialize_game_board (char board [10][10], int rows, int columns); 
int select_who_starts_first (void);
void manually_place_ships_on_board (char board [10][10], char ship);
void randomly_place_ships_on_board (char board [10][10], char ship);
void check_shot (char board [][10], int target_row, int target_col, int player, int *x, int *y, int *shot);
int is_winner (char board[][10]);
void message_sunk (int check, char ship);
void update_board (char board[][10], int x, int y, int hit_or_miss);
void display_board (char board [10][10], int row, int column, int player_board);
void output_current_move (int x, int y, int hit_or_miss, FILE *outfile, int player, int number_of_ships);
int check_if_sunk_ship (char board[][10], int row, int column, char ship);
void update_stats (struct stats *player, int hit_or_miss, int number_of_ships);
void output_stats (struct stats player, FILE *outfile, int players);
void clear_screen (void);
int general_direction (void);
void get_starting_point (int length, int direction, int *row_start, int *column_start);
FILE *open_file_write (void);
void system_pause (void);
void get_target (int *target_row, int *target_col);
void random_target (int *target_row, int *target_col);

typedef struct stats
{
	int hits;
	int misses;
	int shots;
	double ratio;
	char win_or_lose [100];
} Stats;

#endif 