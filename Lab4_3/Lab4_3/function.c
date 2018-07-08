#include "function.h"

FILE *open_file_read (void)
{
	FILE *infile = NULL;

	infile = fopen ("input.dat", "r");

	return infile;
}

double read_input (FILE *infile)
{
	double number = 0.0;

	fscanf (infile, "%lf", &number);

	return number;
}

double find_sum (double num1, double num2, double num3, double num4, double num5)
{
	double sum = 0.0;

	sum = num1 + num2 + num3 + num4 + num5;

	return sum;
}

double find_average (double sum, double num)
{
	double average = 0.0;

	average = sum / num;

	return average;
}

double find_high_value (double num1, double num2, double num3, double num4, double num5)
{
	double high_value = 0.0;

	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
	{
		high_value = num1;
	}
	else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
	{
		high_value = num2;
	}
	else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
	{
		high_value = num3;
	}
	else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
	{
		high_value = num4;
	}
	else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
	{
		high_value = num5;
	}
	return high_value;
}

double find_low_value (double num1, double num2, double num3, double num4, double num5)
{
	double low_value = 0.0;

	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
	{
		low_value = num1;
	}
	else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
	{
		low_value = num2;
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
	{
		low_value = num3;
	}
	else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
	{
		low_value = num4;
	}
	else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
	{
		low_value = num5;
	}
	return low_value;
}