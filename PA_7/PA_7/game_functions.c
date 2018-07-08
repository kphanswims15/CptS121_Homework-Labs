#include "game_functions.h"

void generate_random_three_numbers_level_one_range_two (int nums[])
{
	nums[0] = rand () % 3;
	nums[1] = rand () % 3;
	nums[2] = rand () % 3;
}

void gengerate_random_operator_level_one (int *oper)
{
	*oper = rand () % 4; 
}