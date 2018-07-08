#define _CTR_SECURE_NO_WARNINGS
#ifndef FUNCTIONS_H 
#include <stdio.h>

FILE * open_file_read (void);
double read_input (FILE *infile);
double find_sum (double num1, double num2, double num3, double num4, double num5);
double find_average (double sum, double num);
double find_high_value (double num1, double num2, double num3, double num4, double num5);
double find_low_value (double num1, double num2, double num3, double num4, double num5);

#endif 