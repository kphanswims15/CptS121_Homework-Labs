/*********************************************************************************
 * Date Created: September 20, 2015                                              *
 * Date Last Modified: September 20, 2015                                        *
 * Description: Contains prototypes of the program and holds standard libraries. *
 *********************************************************************************/

#define _CTR_SECURE_NO_WARNINGS
#ifndef RECORDS_H 
#include <stdio.h>
#include <math.h>

FILE * open_file_read (void);
FILE * open_file_write (void);
double read_double (FILE *infile);                                                                                   
int read_integer (FILE *infile);                                                                                       
double calculate_sum (double number1, double number2, double number3, double number4, double number5);      
double calculate_mean (double sum, int number);                                                                       
double calculate_deviation (double number, double mean);                                                               
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation (double variance);                                                                
double find_max (double number1, double number2, double number3, double number4, double number5);                   
double find_min (double number1, double number2, double number3, double number4, double number5);                     
void print_double (FILE *outfile, double number);     

#endif