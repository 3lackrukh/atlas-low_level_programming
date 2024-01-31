#include "main.h"

/**
 * _strcat- concatenates two strings.
 *
 * @src: the string to be copied.
 *
 * @dest: the string to be copied to.
 *
 * Return: always (0) success.
 *
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int k = 0;

	while (dest[i] == '\0' && src[k] != '\0')
	{
		i++;
		k++;
	}
return (dest);
}

