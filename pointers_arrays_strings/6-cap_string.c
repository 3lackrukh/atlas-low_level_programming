#include "main.h"

/**
 * cap_string- capitalizes all the words of a string.
 *
 * @str: the string to scan and capitalize.
 *
 * Return: str, the edited string.
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char sep[12] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
				{
				str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
