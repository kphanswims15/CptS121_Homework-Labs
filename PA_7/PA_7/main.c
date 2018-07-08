#include "game_functions.h"

int main (void)
{
	int nums [3] = {0}, nums2 [3] = {0}, op = 0;

	generate_random_three_numbers_level_one_range_two (nums);
	gengerate_random_operator_level_one (&op);

	return 0;
}