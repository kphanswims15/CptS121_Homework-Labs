/************************************************************************************************************************************************************
 * Date Created: September 20, 2015                                                                                                                         *
 * Date Last Modified: September 23, 2015                                                                                                                   *
 * Description: Defines these functions:                                                                                                                    *
 *					- double read_double (FILE *infile)                                                                                                     *
 *					- int read_integer (FILE *infile);                                                                                                      *
 *					- double calculate_sum (double number1, double number2, double number3, double number4, double number5)                                 *
 *					- double calculate_mean (double sum, int number)                                                                                        *
 *					- double calculate_deviation (double number, double mean)                                                                               *
 *					- double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) *
 *					- double calculate_standard_deviation (double variance)                                                                                 *
 *					- double find_max (double number1, double number2, double number3, double number4, double number5)                                      *
 *					- double find_min (double number1, double number2, double number3, double number4, double number5)                                      *
 *					- void print_double (FILE *outfile, double number)                                                                                      *
 ************************************************************************************************************************************************************/
#include "records.h"

/*******************************************************
 * Function: FILE * open_file_read (void)              *
 * Date Created: September 21, 2015                    *
 * Date Last Modified: September 21, 2015              *
 * Description: This function opens up the input file. *
 * Input Parameters: None.                             *
 * Returns: infile                                     *
 * Preconditions: None.                                *
 * Postconditions: Opens the file and returns it.      *
 *******************************************************/
FILE * open_file_read (void)
{
	FILE *infile = NULL;

	infile = fopen ("input.dat", "r");

	return infile; 
}

/********************************************************
 * Function: FILE * open_file_write (void)              *
 * Date Created: September 21, 2015                     *
 * Date Last Modified: September 21, 2015               *
 * Description: This function opens up the output file. *
 * Returns: outfile                                     *
 * Input Parameters: None.                              *
 * Preconditions: None.                                 *
 * Postcondition: Opens the file and returns it.        *
 ********************************************************/
FILE * open_file_write (void)
{
	FILE *outfile = NULL;

	outfile = fopen ("output.dat", "w");

	return outfile;
}

/************************************************************************
 * Function: double read_double (FILE *infile)                          *
 * Date Created: September 21, 2015                                     *
 * Date Last Modified: September 21, 2015                               *
 * Description: This function reads a double from the input.dat file.   *
 * Returns: number                                                      *
 * Input Parameters: infile                                             *
 * Preconditions: The file has to be open in orders to read into it.    *
 * Postconditions: The number is returned after it is read in the file. * 
 ************************************************************************/
double read_double (FILE *infile) 
{
	double number = 0.0;

	fscanf (infile, "%lf", &number);

	return number; 
}

/***********************************************************************
 * Function: int read_integer                                          *
 * Date Created: September 21, 2015                                    *
 * Date Last Modified: September 21, 2015                              *
 * Description: This function reads a int from the input.dat file.     *
 * Returns: number                                                     *
 * Input Parameters: infile                                            *
 * Preconditions: The file has to be open in oreder to read it.        *
 * Postcondition: The number is returned after it is read in the file. *
 ***********************************************************************/
int read_integer (FILE *infile) 
{
	int number = 0;

	fscanf (infile, "%d", &number);

	return number;
}

/*********************************************************************
 * Function: double calculate_sum                                    *
 * Date Created: September 20, 2015                                  *
 * Date Last Modified: September 20, 2015                            *
 * Description: This function adds up the sum of the numbers.        *
 * Input Parameters: number1, number2, number3, number4, and number5 *
 * Returns: The sum of the numbers.                                  *
 * Preconditions: Student's GPA, Class standing, or age needs to be  *
 *				  available.                                         *
 * Postconditions: The sum of the numbers are returned.              *
 *********************************************************************/
double calculate_sum (double number1, double number2, double number3, double number4, double number5) 
{
	double sum = 0.0;

	sum = number1 + number2 + number3 + number4 + number5;

	return sum;
}

/**********************************************************************
 * Function: double calculate_mean                                    *
 * Date Created: September 21, 2015                                   *
 * Date Last Modified: September 21, 2015                             *
 * Description: This function calculates the mean of all the numbers. *
 * Input Parameters: sum and number                                   *
 * Returns: The mean of the numbers.                                  *
 * Preconditions: The sum of the numbers and the number of students   *
 *				  need to be available.                               *
 * Postconditions: The mean of the numbers is returned.               *
 **********************************************************************/
double calculate_mean (double sum, int number) 
{
	double mean = 0.0;

	mean = sum / number;

	return mean;
}

/*************************************************************************
 * Function: double calculate_deviation                                  *
 * Date Created: September 21, 2015                                      *
 * Date Last Modified: September 21, 2015                                *
 * Description: This function calculates the standard deviation of the   *
 * 			    numbers.                                                 *
 * Input Parameters: number and mean                                     *
 * Returns: The deviation of the numbers.                                *
 * Preconditons: The number of numbers read and written into the program *
 *			     and the mean needs to be avaliable.                     *
 * Postconditions: The deviation of the numbers is returned.             *
 *************************************************************************/
double calculate_deviation (double number, double mean)
{
	double deviation = 0.0;

	deviation = number - mean;

	return deviation;
}

/**********************************************************************************
 * Function: double calculate_variance                                            *
 * Date Created: September 21, 2015                                               *
 * Date Last Modified: September 21, 2015                                         *
 * Description: This function calculates the variance of the numbers.             *
 * Input Parameters: deviation1, deviation2, deviation2, deviation3, deviation4,  *
 *				     and deviation5                                               *
 * Returns: The variance of the deviation.                                        *
 * Preconditions: deviation and the number of students need to be avaliable       *
 * Postconditions: The variance of the deviations is returned.                    *
 **********************************************************************************/
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double variance = 0.0;
	
	variance = ((deviation1 * deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) + (deviation4 * deviation4) + (deviation5 * deviation5)) / number;

	return variance; 
}

/********************************************************************************
 * Function: calculate_standard_deviation                                       *
 * Date Created: September 21, 2015                                             *
 * Date Last Modified: September 21, 2015                                       *
 * Description: This function calculates the standard deviation of the numbers. *
 * Input Parameters: variance                                                   *
 * Returns: The standard deviation of the equation.                             *
 * Preconditions: variance needs to be available.                               *
 * Postconditions: The standard deviation is returned.                          *
 ********************************************************************************/
double calculate_standard_deviation (double variance)
{
	double standard_deviation = 0.0;
	
	standard_deviation = sqrt(variance);

	return standard_deviation;
}

/********************************************************************************
 * Function: double find_max                                                    *
 * Date Created: September 21, 2015                                             *
 * Date Last Modified: September 21, 2015                                       * 
 * Description: This function finds the max of the GPA, class standing, or age. *
 * Input Parameters: number1, number2, number3, number4, and number5.           *
 * Returns: max                                                                 *
 * Preconditions: The GPA, class standing or age needs to be available.         *
 * Postconditions: The max number is returned.                                  *
 ********************************************************************************/
double find_max (double number1, double number2, double number3, double number4, double number5)  
{
	double max = 0.0;

	if ((number1 > number2) && (number1 > number3) && (number1 > number4) && (number1 > number5))
	{
		max = number1;
	}
	else if ((number2 > number1) && (number2 > number3) && (number2 > number4) && (number2 > number5))
	{
		max = number2;
	}
	else if ((number3 > number1) && (number3 > number2) && (number3 > number4) && (number3 > number5))
	{
		max = number3;
	}
	else if ((number4 > number1) && (number4 > number2) && (number4 > number3) && (number4 > number5))
	{
		max = number4;
	}
	else if ((number5 > number1) && (number5 > number2) && (number5 > number3) && (number5 > number4))
	{
		max = number5;
	}

	return max;
}

/********************************************************************************
 * Function: double find_min                                                    *
 * Date Created: September 21, 2015                                             *
 * Date Last Modified: September 21, 2015                                       *
 * Description: This function finds the min of the GPA, class standing, or age. *
 * Input Parameters: number1, number2, number3, number4, number5                *  
 * Returns: The min of the numbers.                                             *
 * Preconditions: The GPA, class standings, or age needs to be available.       *
 * Postconditions: The min of the number is returned.                           *
 ********************************************************************************/
double find_min (double number1, double number2, double number3, double number4, double number5)
{
	double min = 0.0;

	if ((number1 < number2) && (number1 < number3) && (number1 < number4) && (number1 < number5))
	{
		min = number1;
	}
	else if ((number2 < number1) && (number2 < number3) && (number2 < number4) && (number2 < number5))
	{
		min = number2;
	}
	else if ((number3 < number1) && (number3 < number2) && (number3 < number4) && (number3 < number5))
	{
		min = number3;
	}
	else if ((number4 < number1) && (number4 < number2) && (number4 < number3) && (number4 < number5))
	{
		min = number4;
	}
	else if ((number5 < number1) && (number5 < number2) && (number5 < number3) && (number5 < number4))
	{
		min = number5;
	}

	return min;
}

/*****************************************************************************
 * Function: void print_double (FILE *outfile, double number)                *
 * Date Created: September 22, 2015                                          *
 * Date Last Modified: September 21, 2015                                    *
 * Description: This function prints out the GPA, class standing, or age.    *
 * Input Parameters: outfile and number.                                     *
 * returns: None                                                             *
 * Preconditions: outfile must be open and the number needs to be available. *
 * Postconditions: prints out the number.                                    *
 *****************************************************************************/
void print_double (FILE *outfile, double number)
{
	fprintf (outfile, "%.2lf\n", number);
	return;
}