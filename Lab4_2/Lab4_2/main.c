#include "function.h"

int main (void)
{
	char answer1 = '\0', answer2 = '\0', answer3 = '\0', answer4 = '\0', answer5 = '\0', answer6 = '/0', answer7 = '\0';
	int total_bonus_main = 0.0;

	answer1 = all_star_game_appearance();
	answer2 = regular_season_mvp();
	answer3 = world_series_mvp();
	answer4 = gold_glove_award();
	answer5 = sliver_slugger_award();
	answer6 = home_run_champ();
	answer7 = batting_average_champ();

	total_bonus_main = total_bonus (answer1, answer2, answer3, answer4, answer5, answer6, answer7);
}