#include <stdlib.h>
#include <stdio.h>
/**
 * main- entry point of thr program.
 * prints the product of two integers. In the case that two integers
 * are not passed in, prints ERROR.
 *
 * @argc: the number of arguments passed in.
 *
 * @argv: a vector of command line strings passed in.
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, s;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				s += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}
return (0);
}
