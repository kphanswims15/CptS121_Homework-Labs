/*************************************************************************************************************************
* Date Created: December 5, 2015                                                                                         *
* Date Last Modified: December 10, 2015                                                                                  *
* Description: Defines these functions:                                                                                  *
*					-int binary_search (int n, int list[], int target_value)                                             *                         
*					-void bubble_sort (char *ptr[], int number_of_strings)                                               *
*					-int is_palindrome (char *str, int length, int index)                                                *
*					-void maximum_occurences (char *str, Occurrences *ptr_occ, int *ptr_num, char *ptr_char, int length) *
*************************************************************************************************************************/
#include "functions.h"

/**************************************************************************************************************************
* Function: int binary_search (int n, int list[], int target_value);                                                      *
* Date Created: December 5, 2015                                                                                          *
* Date Last Modified: December 5, 2015                                                                                    *
* Description: Searches for a target value in a list of integers.                                                         *
* Input Parameters: int n - number of values, int list[] - list of values, int target_value - value it is searching for.  *
* Returns: True and the index of where the target was found, otherwise false is returned.                                 *
* Preconditions: A number of items in the list has to be known, a sorted list has to be available, and a target_value has * 
*				  been determined.                                                                                        *
* Postconditions: The target value if found is returned and true is return, otherwise false is returned.                  *
***************************************************************************************************************************/
int binary_search (int n, int list[], int target_value)
{
	int left = 0, right = 0, targetindex = 0, mid = 0;
	Boolean found = FALSE;

	left = 0; 
	right = n;
	targetindex = -1;

	//searches for the target value
	while (found == FALSE && left <= right)
	{
		mid = (right + left) / 2;

		if (target_value == list[mid])
		{
			found = TRUE;
			targetindex = mid;
		}

		if (target_value < list[mid])
		{
			right = mid - 1;
		}

		if (target_value > list[mid])
		{
			left = mid + 1;
		}
	}

	switch (found)
	{
	case FALSE: printf ("FALSE\n");
		break;
	case TRUE: printf ("TRUE\n");
		break;
	}

	return targetindex;
}

/*****************************************************************************************
* Function: void bubble_sort (char *ptr[], int number_of_strings)                        *
* Date Created: December 5, 2015                                                         *
* Date Last Modified: December 9, 2015                                                   *
* Description: The function sorts the strings in alphabetical order                      *
* Input Parameters: array of pointers to strings and the number of strings as arguments. *
* Returns: Nothing.                                                                      *
* Preconditions: pointer that points to an array of pointers should be available and the *
*				  number of strings need to be known.                                    *
* Postconditions: The list of strings will be sorted from a-z                            *
******************************************************************************************/
void bubble_sort (char *ptr[], int number_of_strings)
{
	int u = 0, c = 0;
	char *temp = '\0';

	u = number_of_strings - 1;

	while (u > 1)
	{
		c = 1;
		while (c <= u)
		{
			if (strcmp(ptr[c-1], ptr[c]) > 0)
			{
				temp = ptr[c-1];
				ptr[c-1] = ptr[c];
				ptr[c] = temp;
			}
			c++;
		}
		u--;
	}
}

/****************************************************************************************
* Function: int is_palindrome (char *str, int length, int index)                        *
* Date Created: December 7, 2015                                                        *
* Date Last Modified: December 8, 2015                                                  *
* Description: A palindrome is a sequence of symbols that may be interpreted the same   *
*				forward and backward. This program determines if the word is a          *
*   			palindrome.                                                             *
* Input Parameters: char *str, int length, int index                                    *
* Returns: 1-if the word is palindrome, 0-if the word is not a palindrome, otherwise    *
*			it returns itself.                                                          *
* Preconditions: A string needs to be established, it's length needs to be known,       *
*  			  and an index needs to be given.                                           *
* Postconditions: The program should determine if the string passed in is a palindrome. *  
*****************************************************************************************/
int is_palindrome (char *str, int length, int index)
{
	if (str[index] == ' ')
	{
		index++;
	}

	if (str[length-1] == ' ')
	{
		length--;
	}

	if (index >= length-1)
	{
		return 1;
	}
	if (str[index] != str[length-1])
	{
		return 0;
	}
	return is_palindrome (str, length-1, index+1);
}

/*******************************************************************************************************************
* Function: void maximum_occurences (char *str, Occurrences *ptr_occ, int *ptr_num, char *ptr_char, int length)    *
* Date Created: December 7, 2015                                                                                   *
* Date Last Modified: December 11, 2015                                                                            *
* Description: The function determinds the frequency of each character found in the array. The frequency is        *
*				defined as: number of one character symbol/total number of characters. The function should use     *
*   			the second array argument (of struct occurences) to keep track of the frequency of each character. *
* Input Parameters: char *str, Occurrences *ptr_occ, int *ptr_num, char *ptr_char, int length                      *
* Returns: maximum number of occurrences of any character and the corresponding character for which the maximum    *
*			represents.                                                                                            *
* Preconditions: A string has to be declared, an array of occurrences need to exsist, a variable num and a         *
*				  variable char, and the length of the string has to be known.                                     *
* Postconditions: The maximum occurances and the letter is returned.                                               *
********************************************************************************************************************/
void maximum_occurences (char *str, Occurrences *ptr_occ, int *ptr_num, char *ptr_char, double *ptr_frequency)
{
	int max = 0, length = 0;
	char current = '\0';
	
	length = strlen(str);

	while (*str != '\0')
	{
		current = *str;
		ptr_occ[current].num_occurrences++;
		if (ptr_occ[current].num_occurrences > max)
		{
			max = ptr_occ[current].num_occurrences;
			*ptr_char = current;
			ptr_occ[current].frequency = (double)max / (double)length;
			*ptr_frequency = ptr_occ[current].frequency;
		}
		str++;
	}

	*ptr_num = max;
}