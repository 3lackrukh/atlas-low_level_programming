#include "main.h"

/**
 * _abs - check and print the absolute value of an integer.
 * @n : integer to be checked
 *
 * Return: the absolute value of the input integer.
 *
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
