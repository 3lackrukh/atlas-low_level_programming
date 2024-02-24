#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "function_pointers.h"

/**
 * op_add- returns the sum of a and b.
 *
 * @a: the first of two integers to be summed.
 * @b: second of two integers to be summed.
 *
 * Return: the integer sum of a and b.
 */

int op_add(int a, int b)
{
	int sum = (a + b);

	return (sum);
}

/**
 * op_sub- returns the difference of a and b.
 *
 * @a: the integer to be subtraced from.
 * @b: the integer to subtract.
 *
 * Return: the integer difference between a and b.
 */

int op_sub(int a, int b)
{
	int dif = (a - b);

	return (dif);
}

/**
 * op_mul- returns the product of a and b.
 *
 * @a: the integer to be multiplied.
 * @b: the integer to multiply.
 *
 * Return: the integer factor of the two integers.
 */

int op_mul(int a, int b)
{
	int prd = (a * b);

	return (prd);
}

/**
 * op_div- returns the result of the division of a by b.
 *
 * @a: the integer to be divided.
 * @b: the integer factor of division.
 *
 * Return: the integer result of the division of a by b.
 */

int op_div(int a, int b)
{
	int res = (a / b);

	return (res);
}

/**
 * op_mod- returns the remainder of the division of a by b.
 *
 * @a: the integer to be divided.
 * @b: the factor of division.
 *
 * Return: the integer remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	int mod = (a % b);

	return (mod);
}
