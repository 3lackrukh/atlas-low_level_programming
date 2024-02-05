#include "main.h"

/**
 * _strstr- locates a substring.
 *
 * @haystack: the string to be scanned.
 *
 * @needle: the substring to be scanned for.
 *
 * Return: pointer to first character if substring found.
 * if not, NULL.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;
	int match = 0;

	for (l = 0; needle[l] != '\0'; l++)
	{
	}
	for (k = 0; haystack[k] != '\0'; k++)
	{
		match = 0;
		if (haystack[k] == needle[0])
		{
			for (i = 0, j = k; i < l && needle[i] == haystack[j]; i++, j++)
			{
			}
			if (i == l)
			{
				match = 1;
				break;
			}
		}
	}
return (match ? &haystack[j - l] : NULL);
}
