#include "main.h"

/**
 * Description: this program prints the alphabet, in lowercase,
 * followed by ainewline using only _putchar.
 *
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
		_putchar(c);
}
	_putchar('\n');
}
