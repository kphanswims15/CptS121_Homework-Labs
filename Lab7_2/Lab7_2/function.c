#include "function.h"

double calculate_revenue (int time)
{
	double revenue = 0.0;
	int new_time = 0;

	new_time = time - 1984;

	revenue = 203.265 * pow (1.071, time);

	return revenue;
}

int get_year (void)
{
	int year = 0;

	printf ("Please input a year: ");
	scanf ("%d", &year);
	
	return year;
}

double get_revenue (void)
{
	double revenue = 0.0;

	printf ("Please enter the revenue: ");
	scanf ("%lf", &revenue);
}

int predict (double revenue)
{
	int count = 0;
	while (revenue == )
}
//sublime text 2