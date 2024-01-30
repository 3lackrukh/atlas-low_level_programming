#include "main.h"

/**
 * _atoi- converts a string to an integer.
 *
 * @s: the string to be converted.
 *
 * Return: res x op.
 */

int _atoi(char *s)
{
	int res = 0;
	int op = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			op = (s[i++] == '-') ? -1 : 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i++] - '0');

			if (!(s[i] >= '0' && s[i] <= '9'))
			{
				break;
			}
		}
		else
		{
			i++;
		}
	}
return (op * res);
}
