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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str
