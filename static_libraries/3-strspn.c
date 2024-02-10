#include "main.h"

/**
 * _strspn- gets the number of bytes in the initial segment of a string
 * which consist only of bytes from another string.
 *
 * @s: the string whose bytes are to be compared.
 *
 * @accept: the acceptable characters.
 *
 * Return: the number of bytes from the beginning of s that matched.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0;
	int k = 0;

	while ((s[i] != '\0') && (accept[k] != '\0'))
	{
		if (s[i] != accept[k])
		{
			k++;
		}
		else if (s[i] == accept[k])
		{
			i++;
			k = 0;
		}
		else
		{
			return (i--);
		}
	}
return (i);
}
