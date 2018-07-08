/************************************************************************************************************************
 * Programmer: Kimberlee Phan                                                                                           *
 *                                                                                                                      *
 * Class: CptS 121, Fall 2015; Lab Section: 5                                                                           *
 *                                                                                                                      *
 * Programming Assignment: PA8                                                                                          *
 *                                                                                                                      *
 * Date: December 5, 2015                                                                                               *
 *                                                                                                                      *
 * Date Last Modified: December 11, 2015                                                                                *
 *                                                                                                                      * 
 * Description: For this assignment you will be required to write functions which solve each of the following problems. *
				You must place all of your functions in one project.                                                    *
 ************************************************************************************************************************/
#include "functions.h"

int main (void)
{
	//Binaray search
	int list[5] = {1, 2, 3, 4, 5};
	int target = 0, count = 0;

	//Bubble sort
	char *ptr[] = {"ant", "cow", "fish", "eel", "bat"};

	//Palindrome
	char str[] = "race car";
	int result = 0;

	//maximum occurences
	Occurrences arr[128] = {0};
	char str2[] = "chicken";
	int ptr_num = 0;
	double ptr_frequency = 0;
	char ptr_char = '\0';

	//Binary search
	printf ("Binary Search: \n");

	printf ("List: ");
	for (count = 0; count < 5; count++)
	{
		printf ("%d ", list[count]);
	}
	printf ("\n");

	printf ("Target: 2\n");
	target = binary_search (5, list, 2);

	if (target == -1)
	{
		printf ("Target was not found.\n\n");
	}
	else
	{
		printf ("Found at index: %d\n\n", target);
	}

	//bubble sort
	printf ("Bubble sort: \n");

	printf ("List Before: ");
	for (count = 0; count < 5; count++)
	{
		printf ("%s ", ptr[count]);
	}
	printf ("\n");

	bubble_sort (ptr, 5);

	printf ("List After: ");
	for (count = 0; count < 5; count++)
	{
		printf ("%s ", ptr[count]);
	}
	printf ("\n\n");

	//palindrome 
	printf ("Is Palindrome:\n");

	printf ("String: %s\n", str);
	result = is_palindrome(str, 8, 0);
	printf ("Result: %d\n\n", result);

	//maximum occurences
	printf ("Maximum occurences:\n");
	printf ("String: %s \n", str2);
	maximum_occurences (str2, arr, &ptr_num, &ptr_char, &ptr_frequency);
	printf ("Max occurence: %d\n", ptr_num);
	printf ("Letter occured the most: %c\n", ptr_char);
	printf ("Frequency of the character: %lf\n", ptr_frequency);

	return 0;
}

