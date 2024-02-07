#include "main.h"

/**
 * _puts_recursion- prints a string, followed by  a new line. 
 *
 * @*s: pointer to the first char in the string to be printed.
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar ('\n');
		return (0);
	{
	else
		_putchar (*s);
		s++;
		return _puts_recursion(*s);
	}
}
