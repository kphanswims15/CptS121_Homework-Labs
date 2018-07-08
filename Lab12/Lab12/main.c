#include <stdio.h>

int add_digits (int num);
void reverse (char str[], int index, int size);

int main (void)
{
	int result = 0, num = 5432154321;
	char str[100] = {'m', 'o', 'o', 't', 'm'};

	reverse (str, 0, 5);

	printf ("%s\n", str);

	return 0;
}

int add_digits (int num)
{
	int sum = 0;

	if (num == 1)
	{
		return 0;
	}

	sum = num % 10 + add_digits (num/10);

	return sum;
}

void reverse (char str[], int index, int size)
{
	char temp = '\0';

	temp = str[index];

	str [index] = str[(size-1) - index];

	str [(size-1) - index] = temp;

	if (index >= (size-1))
	{
		return;
	}

	reverse (str, index + 1, size - 1);
}