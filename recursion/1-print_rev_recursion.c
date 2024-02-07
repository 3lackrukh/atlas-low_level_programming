#include <stdio.h>

/**
 * _print_rev_recursion- prints a string in reverse.
 *
 * @s: the string to be printed.
 *
 * Return: nothing.
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);
	}
}
