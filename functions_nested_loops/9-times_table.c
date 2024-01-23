#include "main.h"

/**
 * times_table - prints a multiplication table from 0 - 9.
 *
 */

#include "main.h"

void times_table(void)
{
	int table[10][10];
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			table[i][j] = i * j;
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = table[i][j];

			if (result >= 10)
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}
			else
			{
				putchar(result + '0');
			}

			putchar(',');

			if (j < 9)
			{
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
