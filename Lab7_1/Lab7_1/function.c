#include "function.h"

void charge (double hours, double *charge, double *average)
{
	double rate1 = 7.99, rate2 = 1.99;
	double new_time = 0.0;

	if (hours > 10)
	{
		new_time = hours - 10;
		*charge = rate1 + rate2 * new_time;
	}

	*average = *charge / hours;
}

