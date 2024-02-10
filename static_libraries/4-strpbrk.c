#include "main.h"

/**
 * _strpbrk- scans a string for any of a set of bytes.
 *
 * @s: the string to be scanned.
 *
 * @accept: the set of bytes to be scanned for.
 *
 * Return: if found, a pointer to the matching byte, else NULL.
 */

char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept)
{

	int i = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
