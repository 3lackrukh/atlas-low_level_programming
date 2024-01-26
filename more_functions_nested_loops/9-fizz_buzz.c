#include <stdio.h>

/**
 * main- Entry point of the program.
 *
 * Description: This program prints numbers from 1 to 100.
 * in the case that a number is a multiple of 3,
 * "Fizz" will print instead.
 *
 * In the case that a number is a multiple of 5,
 * "Buzz" will print instead.
 *
 * In the case that a number is a multiple of both 3 and 5,
 * "FizzBuzz" will print instead.
 *
 * Return: always (0). success.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
return (0);
}

