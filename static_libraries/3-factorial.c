#include "main.h"

/**
 * factorial- returns the factorial of a given number.
 *
 * @n: the number to be factorialed.
 *
 * Return: the factorial of the number. -1 if the number is lower than 0
 * to indicate an error.
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
