#include "Lab5_1.h"

FILE *open_file_read (void)
{
	FILE *infile = NULL;

	infile = fopen ("saleries.txt", "r");

	return infile;
}

double read_quarterly_dollar_payments (FILE *infile)
{
	double qdp = 0.0;

	fscanf (infile, "%lf", &qdp);

	return qdp;
}
double sum_quarterly_payments (double num1, double num2, double num3, double num4);
double determine_tax_bracket (double sum);
FILE *close_file_read (void);