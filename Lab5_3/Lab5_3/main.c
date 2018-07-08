#include <stdio.h>

int main (void)
{
	int num1 = 0, num2 = 0, x = 0, y = 0, remainder = 0;

	printf ("Please enter two integers to find the greatest common divisor: ");
	scanf ("%d%d", &num1, &num2);

	if (num1 > num2)
	{
		x = num1;
	}
	else 
	{
		x = num2;
	}
	
	for (y = x; y > 1; y--)
	{
		if (num1 % y == 0 && num2 % y == 0)
		{
			printf ("GCD of the two numbers is: %d", y);
		}
	}

	return 0;
}