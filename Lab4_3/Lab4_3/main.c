#include "function.h"

int main (void)
{
	double num1 = 0.0, num2 = 0.0, num3 = 0.0, num4 = 0.0, num5 = 0.0;
	double sum = 0.0;
	double average = 0.0, num = 5.0;
	double high_value = 0.0;
	double low_value = 0.0;
	int choice = 0;
	FILE *input = NULL;

	printf ("***************************************\n");
	printf ("*                Menu                 *\n");
	printf ("* 1. Find the average                 *\n");
	printf ("* 2. Find the high value              *\n");
	printf ("* 3. Find the lowest value            *\n");
	printf ("***************************************\n\n");
	printf ("Your choice is: ");
	scanf ("%lf", &choice);

	input = open_file_read ();
	num1 = read_input (input);
	num2 = read_input (input);
	num3 = read_input (input);
	num4 = read_input (input);
	num5 = read_input (input);

	switch (choice)
	{
		case 1: 
			sum = find_sum (num1, num2, num3, num4, num5);
			average = find_average (sum, num);
			printf ("The average is %lf.", average);
			break;
		case 2:
			high_value = find_high_value (num1, num2, num3, num4, num5);
			printf ("The highest value is %lf.", high_value);
			break;
		case 3:
			low_value = find_low_value (num1, num2, num3, num4, num5);
			printf ("The lowest value is %lf.", low_value);
			break;
	}
	
	fclose (input);

	return 0;
}