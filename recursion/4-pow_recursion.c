#include "main.h"

/**
 * _pow_recursion- returns the value of one integer raised to the power
 * of another integer.
 *
 * @x: the integer to be raised.
 *
 * @y: the power raised to.
 *
 * Return: the raised value of x. If y is lower than 0, -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	else
	{
		return (1);
	}
}
