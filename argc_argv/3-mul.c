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

	int p;

	if (argc >= 3)
	{
		p = (atoi(argv[1]) * (atoi(argv[2])));
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
