#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter, 0 otherwise.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
{
		return (1);
}
	else if (c >= 'A' && c <= 'Z')
{
		return (1);
}
	else
{
		return (0);
}
}
