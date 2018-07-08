#include "function.h"

void pop_array(FILE *infile, int list [], int *number)
{
	int index = 0;

	while (!feof(infile))
	{
		fscanf (infile, "%d", list [index]);
		index++;
	}

	*number = index;
}

void rev_array(int list[], int list2[], int num)
{
	int x = 0, y = 0, count = 0;

	for (count = num; count != 0; count--)
	{
		list2[x] = list [count];
		x++;
	}
}

void pop_array2 (int list [], int num_items)
{
	int index = 0;
	
	for (index = 0; index < num_items; index++)
	{
		list [index] = rand() % 100 + 1; 
	}
}

void number (int list[], int num_occurences[], int num_items)
{
	int index = 0;

	for (index = 0; index < num_items; index++)
	{
		num_occurences [list[index]] ++;
	}
}