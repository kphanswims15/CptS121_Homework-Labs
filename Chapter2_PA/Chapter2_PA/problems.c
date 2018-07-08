#include "problems.h"


/*
Function: 
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: 
Input Parameters: 
Returns:              
Preconditions:                                                                                         
Postconditions:
*/

/*
Function: void mileage_reimbursement_calculator (void)
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: Calculates mileage reimbursement for a salesperson at a rate of $0.35 per mile. It interacts with the user. 
Input Parameters: None
Returns: None             
Preconditions: None                                                                                         
Postconditions: Should calculate the money for the reimbursement.
*/
void mileage_reimbursement_calculator (void)
{
	double beginning = 0, end = 0, total_miles = 0, reimbursement = 0;

	printf ("MILEAGE REIMBURSEMENT CALCULATOR\n");
	printf ("Enter beginning odometer reading => ");
	scanf ("%lf", &beginning);
	printf ("Enter ending odometer reading => ");
	scanf ("%lf", &end);

	//Calculations for total miles
	total_miles = end - beginning;

	printf ("You travelled %.1lf mile.\n", total_miles);

	//Calculations for reimbursement
	reimbursement = total_miles * 0.35;

	printf ("At $0.35 per mile, your reimbursement is $%.2lf.\n", reimbursement);
}

/*
Function: void temperature_of_freezer_after_power_failure (void)
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: Estimate the temperature in a freezer (in *C) given the elapsed time (hours) since the power failure.
Input Parameters: None.
Returns: None.
Preconditions: None.                                                                                         
Postconditions: The estimated temperature should be calculated and displayed.
*/
void temperature_of_freezer_after_power_failure (void)
{
	int hours = 0, minutes = 0;
	double time = 0, temperature = 0;

	printf ("TEMPERATURE IN A FREEZER SINCE A POWER FAILURE CALCULATOR\n");
	printf ("Please enter how long it has been since the power failure in whole hours and minutes => ");
	scanf ("%d %d", &hours, &minutes);
	
	//Converting minutes to hours
	time = hours + (double)minutes / 60;

	//Temperature
	temperature = ((4 * time * time) / (time + 2)) - 20;

	printf ("The temperature in the freezer is %.2lf*C.\n", temperature);
}

/*
Function: void fahrenheit_to_kelvin_scale (void)
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: Converts a temperature in degrees Fahrenheit to the kelvin scale.
Input Parameters: None.
Returns: None.
Preconditions: None.                                                                                         
Postconditions: Fahrenheit in degrees should be converted to the kelvin scale.
*/
void fahrenheit_to_kelvin_scale (void)
{
	int fahrenheit = 0;
	double kelvin = 0;

	printf ("CONVERSION CALCULATER FROM FAHRENHEIT TO THE KELVIN SCALE\n");
	printf ("Please enter the degrees in Fahrenheit. => ");
	scanf ("%d", &fahrenheit);

	//Calculation for the conversion
	kelvin = 5 / 9 * (fahrenheit - 32) + 273.15;

	printf ("The temperature on the kelvin scale is %.2lf.\n", kelvin);
}

/*
Function: void hospital_medication_fulid_pump (void)
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: Outputs information for the labels the hospital pharmacy places on bags of IV medications indicating the volume of medication
			 to be infused and the rate at which the pup should be set. 
Input Parameters: None.
Returns: None. 
Preconditions: None.                                                                                        
Postconditions: The information for the labels should be calculated.
*/
void hospital_medication_fulid_pump (void)
{
	int volume = 0, minutes = 0, rate = 0;

	printf ("HOSPITAL MEDICATION FULID PUMP CALCULATOR\n");
	printf ("Volume to be infused (ml) => ");
	scanf ("%d", &volume);
	printf ("Minutes over which to infuse => ");
	scanf ("%d", &minutes);

	printf ("\nVTBI: %d ml\n", volume);

	//calculates the rate
	rate = 60 / minutes * volume;

	printf ("Rate: %d ml/hr\n", rate);
}

/*
Function: void score_need_on_final (void)
Date Created: December 12, 2015
Date Last Modified: December 12, 2015                                                                                    
Description: 
Input Parameters: 
Returns:              
Preconditions:                                                                                         
Postconditions:
*/
void score_need_on_final (void)
{
	char grade = '\0';
	double min = 0, average = 0, score = 0;
	int final_counts = 0;

	printf ("SCORE FINAL PREDICTOR TO GET DESIRED GRADE\n");
	printf ("Enter desired grade> ");
	scanf ("%c", &grade);
	printf ("Enter minimum average required> ");
	scanf ("%lf", &min);
	printf ("Enter current average in course> ");
	scanf ("%lf", &average);
	printf ("Enter how much the final counts as a percentage of the course grade> ");
	scanf ("%d", &final_counts);

	//calculates the score that you need for the final.
	score = (min - ((100 - final_counts) * (average / 100))) * (100 / final_counts);

	printf ("\nYou need a score of %.2lf on the final to get a %c.\n", score, grade);
}