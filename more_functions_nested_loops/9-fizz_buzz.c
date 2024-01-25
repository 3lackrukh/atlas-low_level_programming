#include <stdio.h>

/**
 * - lists numbers from 1 to 100.
 *   in the case that a number is a multiple of 3, 
 *   "Fizz" will print instead.
 *   
 *   in the case that a number is a multiple of 5, 
 *   "Buzz" will print instead.
 *
 *   in the case that a number is a multiple of both 3 and 5,
 *   "FizzBuzz" will print instead.
 *
 *   return: always (0). success.
 */

int main(void)
{
	int i;

	for (i = 1; i <101; i++)
		if ((i % 3 = 0) && (i % 5 = 0))
		{
		       printf("FizzBuzz ");
		}
		if else (i % 3 = 0)
		{
			printf("Fizz ");
		}
		if else (i % 5 = 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf('%d ', i);
		}
		printf('\n');
}

