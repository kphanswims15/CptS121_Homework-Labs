#include "lab.h"

void string_reverse (char word[100])
{
	char temp = '\0';
	int count = 0, size = 0, i = 0, j = 0;

	while (word[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	while (i < j)
	{
		temp = word[i];
		word[i] = word [j];
		word[j] = temp;
		i++;
		j--;
	}
}

void string_reverse_ptr (char *word)
{
	int count = 0, size = 0, j = 0;
	char *begin = '\0', *end = '\0', temp = '\0';

	while (*(word + count) != '\0')
	{
		count++;
	}

	size = count - 1;

	for (j = 0; j < size; j++)
	{
		end++;
	}

	for (j = 0; j = size/2; j++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

char *my_strcpy (char *destination, const char *source)
{
	while (*source)
	{
		*destination = *source;
		source++;
		destination++;
	}

	*destination = '\0';
}

char *my_strcat (char *destination, const char *source)
{
	int count = 0;

	while (*destination != '\0')
	{
		count++;
		destination++;
	}

	*my_strcpy();
}