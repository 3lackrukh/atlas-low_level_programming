#include "main.h"

/**
 * Description: this program uses a nested for loop
 * to print the alphabet, in lowercase,
 * followed by a newline 10x over.
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <=9; i++)
{
		for (c = 'a'; c <= 'z'; c++)
{
                _putchar(c);
}
        _putchar('\n');
}
}
