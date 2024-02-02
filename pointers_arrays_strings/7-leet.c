#include "main.h"

/**
 * leet- encodes a string into 1337.
 *
 * @str: pointer to the character string to be encoded.
 *
 * Return: the pointer (str).
 */

char *leet(char *str)
{
	int i;
	int k;
	char array[3][5] = {
		{'a', 'e', 'o', 't', 'l'},
		{'A', 'E', 'O', 'T', 'L'},
		{'4', '3', '0', '7', '1'}
	};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (str[i] == array[0][k] || str[i] == array[1][k])
			{
				str[i] = array[2][k];
			}
		}
	}
return (str);
}

