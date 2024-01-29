#include "main.h"

/**
 * rev_string- reverses a string.
 *
 * @s: the string to be reversed.
 *
 * Return: always (0) success.
 */

void rev_string(char *s)
{

	int length = 0;
	int begin;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	begin = 0;
	end = length - 1;

	while (begin < end)
	{
		temp = s[begin];
		s[begin] = s[end];
		s[end] = temp;

		begin++;
		end--;
	}
}
