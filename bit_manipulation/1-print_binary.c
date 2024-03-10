#include "main.h"
#include <unistd.h>

/**
 *
 */

void print_binary(unsigned long int n)
{
	int i;
	int remainder;
	char str[16];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; n > 0; i++)
	{
		remainder = n & 1;
		str[i] = '0' + remainder;
		n >>= 1;
	}

	while (i > 0)
	{
		i--;
		_putchar(str[i]);
	}
}
