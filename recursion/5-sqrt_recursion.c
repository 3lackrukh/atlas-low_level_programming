#include <stdio.h>

/**
 * _fk_this- a binary search function recursively halving the
 * space between n and 0 and squaring the result to compare
 * for equality with n.
 *
 * @n: the number whose square root is sought.
 *
 * @low: the lower bounds of the range of numbers to be processed.
 *
 * @high: the upper bounds of the range of numbers to be processed.
 *
 * Return: the natural square root of the number.
 * If the number does not have a natural square root, -1 (error).
 */

int _fk_this(int n, int low, int high)
{
	int mid = (high - low) / 2 + low;
	int res = mid * mid;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (res == n)
	{
		return (mid);
	}
	else if ((high == low) && (res != n))
	{
		return (-1);
	}
	else if (res < n)
	{
		return (_fk_this(n, mid + 1, high));
	}
	else if (res > n)
	{
		return (_fk_this(n, low, mid - 1));
	}
return (0);
}

/**
 * _sqrt_recursion- returns the natural square root of a number.
 *
 * @n: the number.
 *
 * Return: the result of the helper function. Or, in the case that
 * n is less than 0, -1 (error).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_fk_this(n, 0, n));
}
