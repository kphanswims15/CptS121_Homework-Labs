#define _CTR_SECURE_NO_WARNINGS
#ifndef LAB5_1_H
#include <stdio.h>

FILE *open_file_read (void);
double read_quarterly_dollar_payments (FILE *infile);
double sum_quarterly_payments (double num1, double num2, double num3, double num4);
double determine_tax_bracket (double sum);
FILE *close_file_read (void);

#endif