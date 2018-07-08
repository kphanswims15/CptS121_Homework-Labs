#include "function.h"

char all_star_game_appearance (void)
{
	char answer = '/0';

	printf ("Did you make an All-Star Game appearance (type y for yes and n for no)?");
	scanf ("%c", answer);

	return answer;
}

char regular_season_mvp (void)
{
	char answer = '\0';

	printf ("Were you a Regular season MVP? (type y for yes and n for no)");
	scanf ("%c", &answer);

	return answer;
}

char world_series_mvp (void)
{
	char answer = '\0';

	printf ("Were you a World Season MVP? (type y for yes and n for no)");
	scanf ("%c", &answer);

	return answer;
}

char gold_glove_award (void)
{
	char answer = '\0';

	printf ("Did you recieve the Gold Glove award? (type y for yes and n for no)");
	scanf ("%c", &answer);

	return answer;
}

char sliver_slugger_award (void)
{
	char answer = '\0';

	printf ("Did you recieve the Silver Slugger award? (type y for yes and n for no)");
	scanf ("%c", &answer);

	return answer;
}

char home_run_champ (void)
{
	char answer = '\0';

	printf ("Were you the Home run champ? (type y for yes and n for no)");
	scanf ("%c", &answer);

	return answer;
}

char batting_average_champ (void)
{
	char answer = '\0';

	printf ("Were you the Batting average champ? (type y for yes nad n for no)");
	scanf ("%c", &answer);

	return answer;
}

int total_bonus (char ans1, char ans2, char ans3, char ans4, char ans5, char ans6, char ans7)
{
	int all_star = 25000;
	int regular = 75000;
	int world = 100000;
	int gold = 50000;
	int sliver = 35000;
	int home = 25000;
	int batting = 25000;
	int bonus = 0;

	if (ans1 == 'y' || ans1 == 'Y')
	{
		bonus = all_star + bonus; 
	}
	if (ans2 == 'y' || ans2 == 'Y')
	{
		bonus = bonus  + regular;
	}
	if (ans3 == 'y' || ans3 == 'Y')
	{
		bonus = bonus + world;
	}
	if (ans4 == 'y' || ans4 == 'Y')
	{
		bonus = bonus + gold;
	}
	if (ans5 == 'y' || ans5 == 'Y')
	{
		bonus = bonus + sliver;
	}
	if (ans6 == 'y' || ans6 == 'Y')
	{
		bonus = bonus + home;
	}
	if (ans7 == 'y' || ans7 == 'Y')
	{
		bonus = bonus + batting;
	}

	return bonus;
}