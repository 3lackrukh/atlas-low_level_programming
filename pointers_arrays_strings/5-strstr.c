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
	int i, k, l, n;
	int match;

	while (needle[l] != '\0')
	{
		l++;
	}
	for (k = 0; haystack[k] != '\0'; k++)
	{
		match = 0;
		for (i = 0; i < l; i++)
	{
		if (needle[i] == haystack[k])
		{
			match = 1;
			n = k;
		}
	}
	}
return (match ? &haystack[n - l] : NULL);
}
