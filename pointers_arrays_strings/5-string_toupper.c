#include "main.h"

/**
 * string_toupper- scans a string for lowercase characters
 * and replaces them with the corresponding uppercase characters.
 *
 * @ptr: the string pointed to.
 *
 * Return: ptr the updated string.
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if ((ptr[i] >= 97) && (ptr[i] <= 122))
		{
			ptr[i] = ptr[i] - 32;
		}
	}
return (ptr);
}
