/*******************************************************************************************************************************
 * Programmer: Kimberlee Phan                                                                                                  *
 *                                                                                                                             *
 * Class: CptS 121, Fall 2015; Lab Section: 5                                                                                  *
 *                                                                                                                             *
 * Programming Assignment: PA3                                                                                                 *
 *                                                                                                                             *
 * Date: September 21, 2015                                                                                                    *
 *                                                                                                                             *
 * Date Last Modified: September 23, 2015                                                                                      *
 *                                                                                                                             * 
 * Description: Write a program that processes numbers, corresponding to student records read in from a file,                  *
 *		and writes the required results to an output file.                                                                     *
 *                                                                                                                             *
 * Functions:                                                                                                                  *
 *	   - double read_double (FILE *infile)                                                                                     *
 *	   - int read_integer (FILE *infile)                                                                                       *
 *	   - double calculate_sum (double number1, double number2, double number3, double number4, double number5)                 *
 *	   - double calculate_mean (double sum, int number)                                                                        *
 *	   - double calculate_deviation (double number, double mean)                                                               *
 *	   - double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4,                *
 *	     double deviation5, int number)                                                                                        *
 *	   - double calculate_standard_deviation (double variance)                                                                 *
 *	   - double find_max (double number1, double number2, double number3, double number4, double number5)                      *
 *	   - double find_min (double number1, double number2, double number3, double number4, double number5)                      *
 *	   - void print_double (FILE *outfile, double number)                                                                      *
 *                                                                                                                             *
 * A main ( ) function that does the following:                                                                                *
 *     - Opens an input file "input.dat" for reading                                                                           *
 * 	   - Opens an output file "output.dat" for writing                                                                         *
 * 	   - Reads five records from the input file (input.dat)                                                                    *
 * 	   - Calculates the sum of the GPAs;                                                                                       *
 * 	   - Calculates the sum of the class standings;                                                                            *
 * 	   - Calculates the sum of the ages;                                                                                       *
 * 	   - Calculates the mean of the GPAs, writing the result to the output file (output.dat);                                  *
 *	   - Calculates the mean of the class standings, writing the result to the output file (output.dat);                       *
 *	   - Calculates the mean of the ages, writing the result to the output file (output.dat);                                  *
 *	   - Calculates the deviation of each GPA from the mean (Hint: need to call calculate_deviation ( ) 5 times)               *
 *	   - Calculates the variance of the GPAs                                                                                   *
 *	   - Calculates the standard deviation of the GPAs, writing the result to the output file (output.dat);                    *
 *	   - Determines the min of the GPAs, writing the result to the output file (output.dat);                                   *
 *	   - Determines the max of the GPAs, writing the result to the output file (output.dat);                                   *  
 *	   - Closes the input and output files (i.e. input.dat and output.dat)                                                     *
 *                                                                                                                             *
 * Expected Input File Format (real numbers only):                                                                             *
 *	   - For this assignment you will be required to read five records from the "input.dat" file. Each record will             *
 * 	     have the following form:                                                                                              *
 *		  - Student ID# (an 8 digit integer number)                                                                            *
 *		    GPA (a floating-point value to the hundredths place)                                                               *
 *		    Class Standing (1 - 4, where 1 is a freshmen, 2 is a sophomore, 3 is a junior, and 4 is a senior --> all integers) *
 *		    Age (a floating-point value)                                                                                       *
 *                                                                                                                             *
 * General Equations:                                                                                                          *
 * 	   - sum = number1 + number2 + number3 + number4 + number5                                                                 *
 * 	   - mean = sum / number                                                                                                   *
 * 	   - deviation = number - mean                                                                                             *
 * 	   - variance = ((deviation1)^2 + (deviation2)^2 + (deviation3)^2 + (deviation4)^2 + (deviation5)^2) / number              *
 *	   - standard deviation = sqrt(variance)                                                                                   *
 *******************************************************************************************************************************/

#include "records.h"

int main (void)
{
	FILE *input = NULL;
	FILE *output = NULL;

	int student_ID_1 = 0, student_ID_2 = 0, student_ID_3 = 0, student_ID_4 = 0, student_ID_5 = 0;
	double gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0, gpa4 = 0.0, gpa5 = 0.0;
	int class_standing_1 = 0, class_standing_2 = 0, class_standing_3 = 0, class_standing_4 = 0, class_standing_5 = 0;
	double age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0;
	double sum_gpa = 0.0, sum_class_standing = 0.0, sum_ages = 0.0;
	double mean_gpa = 0.0, mean_class_standing = 0.0, mean_ages = 0.0;
	double deviation_gpa1 = 0.0, deviation_gpa2 = 0.0, deviation_gpa3 = 0.0, deviation_gpa4 = 0.0, deviation_gpa5 = 0.0;
	double varience_gpa = 0.0;
	double standard_deviation_gpa = 0.0;
	double min_gpa = 0.0, max_gpa = 0.0;
	int number_of_students = 5;
	
	input = open_file_read ();
	output = open_file_write ();
	
	//reads each number and sets them to a variable
	student_ID_1 = read_integer (input);
	gpa1 = read_double (input);
	class_standing_1 = read_integer (input);
	age1 = read_double (input);
		
	student_ID_2 = read_integer (input);
	gpa2 = read_double (input);
	class_standing_2 = read_integer (input);
	age2 = read_double (input);

	student_ID_3 = read_integer (input);
	gpa3 = read_double (input);
	class_standing_3 = read_integer (input);
	age3 = read_double (input);

	student_ID_4 = read_integer (input);
	gpa4 = read_double (input);
	class_standing_4 = read_integer (input);
	age4 = read_double (input);

	student_ID_5 = read_integer (input);
	gpa5 = read_double (input);
	class_standing_5 = read_integer (input);
	age5 = read_double (input);

	//Calculates the sum
	sum_gpa = calculate_sum (gpa1, gpa2, gpa3, gpa4, gpa5);
	sum_class_standing = calculate_sum ((double) class_standing_1, (double) class_standing_2, (double) class_standing_3, (double) class_standing_4, (double) class_standing_5);
	sum_ages = calculate_sum (age1, age2, age3, age4, age5);

	//Calculates the mean
	mean_gpa = calculate_mean (sum_gpa, number_of_students);
	mean_class_standing = calculate_mean (sum_class_standing, number_of_students);
	mean_ages = calculate_mean (sum_ages, number_of_students);

	//Prints the mean to the output file
	print_double (output, mean_gpa);
	print_double (output, mean_class_standing);
	print_double (output, mean_ages);

	//Calculates deviation of the gpa
	deviation_gpa1 = calculate_deviation (gpa1, mean_gpa);
	deviation_gpa2 = calculate_deviation (gpa2, mean_gpa);
	deviation_gpa3 = calculate_deviation (gpa3, mean_gpa);
	deviation_gpa4 = calculate_deviation (gpa4, mean_gpa);
	deviation_gpa5 = calculate_deviation (gpa5, mean_gpa);

	//Calculates varience of the gpa
	varience_gpa = calculate_variance (deviation_gpa1, deviation_gpa2, deviation_gpa3, deviation_gpa4, deviation_gpa5, number_of_students);

	//Calculates standard deviation
	standard_deviation_gpa = calculate_standard_deviation (varience_gpa);

	//Prints the standard deviation
	print_double (output, standard_deviation_gpa);

	//Finds the min of the gpa
	min_gpa = find_min (gpa1, gpa2, gpa3, gpa4, gpa5);

	//Prints min
	print_double (output, min_gpa);

	//Finds the max if the gpa
	max_gpa = find_max (gpa1, gpa2, gpa3, gpa4, gpa5);

	//Prints max
	print_double (output, max_gpa);

	//Closing the files
	fclose (input);
	fclose (output);
	
	return 0;
}