#include "main.h"

/**
 * string_toupper- scans a string for lowercase characters
 * and replaces them with the corresponding uppercase characters.
 *
 * @*: the string pointed to.
 *
 * Return: the updated string.
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; *[i] != '\0'; i++)
	{
		if ((*[i] >= 97) && (*[i] <= 122))
		{
			*[i] = *[i] - 32;
		}
	}
return (*);
}
