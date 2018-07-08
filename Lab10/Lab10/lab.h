#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct coordinate
{
	int row;
	int column;
} Coordinate;

typedef struct cell 
{
	int occupied;
	char symbol;
	Coordinate location; 
} Cell;

typedef struct game_info
{
	int wins;
	int losses;
	int total_games_played;
} Game_info;

void draw_board (char board[][8], int num_rows, int num_col);
void display_board (char board[][8], int num_rows, int num_col);
int get_turn (char board[][8], int player);