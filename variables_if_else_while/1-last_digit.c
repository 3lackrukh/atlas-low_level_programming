#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry to the program
 * Description: this program assigns a random number to the variabl n,
 * prints the last digit of variable n, and checks to see if it is
 * greater than five, equal to zero, or less than six.
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

		printf("Last digit of %d is %d", n, lastdigit);

			if (lastdigit > 5)
{
			printf(" and is greater than 5\n");
}
			else if (lastdigit == 0)
{
			printf(" and is 0\n");
}
			else if (lastdigit < 6 && lastdigit != 0)
{
			printf(" and is less than 6 and not 0\n");
}
	return (0);
}
