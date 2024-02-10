#include "main.h"

/**
 * _strcmp- lexicographically compares two strings
 * one character at a time.
 *
 * @s1: string to be compared against.
 *
 * @s2: string to be compared.
 *
 * Return: ascii value difference of incongruous digit, else 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
return (0);
}
