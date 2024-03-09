#include "main.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be checked.
 *
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	const char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	return (p - s);
}

/**
 * binary_to_uint- converts a number to an unsigned int.
 *
 * @b: the binary number handed in as a char string.
 *
 * Return: the value of the string converted into a decimal value.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d = 0;
	int len = _strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if ((b[i] != '1') &&(b[i] != '0'))
		{
			return (0);
		}
		if (b[i] == '1')
		{
			d += 1 << (len - 1 -i);
		}
	}
	return (d);
}
