#include "main.h"

/**
 * prm_hlp- helper to the is_prime_number function, and determines
 * whether a number is prime or not.
 *
 * @n: the number whose primeness is to be determined.
 *
 * @low: an integer incrementing from 2 serving as the lower level
 * test if n has a multiple.
 *
 * @high: an integer decrementing from 1/2 of n as the high range
 * test if n has a multiple.
 *
 * @multiple: counts integers n is a multiple of.
 *
 * Return: if n has any multiples in the test range, returns 0.
 * if n has no multiples, 1.
 */

int prm_hlp(int n, int low, int high, int multiple)
{
	if (n <= 1)
	{
		return (0);
	}
	if (multiple >= 1)
	{
		return (0);
	}
	if (high < low)
	{
		return (1);
	}
	if ((n % high == 0) || (n % low == 0))
	{
		multiple++;
	}
	high--;
	low++;
	return (prm_hlp(n, low, high, multiple));
}

/**
 * is_prime_number- a function that passes an integer into the helper
 * to test if a number is prime.
 *
 * @n: the number to be tested.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prm_hlp(n, 2, (n / 2), 0));
}
