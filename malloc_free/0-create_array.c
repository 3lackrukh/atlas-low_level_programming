#include <stdlib.h>
#include "main.h"

/**
 * create_array- creates an array of chars, and initializes it with
 * a specified char.
 *
 * @size: an integer specifying the size of the array.
 *
 * @c: the char to be used to initialize the array.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
return (str);
}
