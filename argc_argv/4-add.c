#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit- Check if a character is a digit (0-9).
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(char *c)
{
	if ((*c >= '0') && (*c <= '9'))
	{
		return (1);
	}
	return (0);
}
/**
 * main- entry point of the program.
 * prints the sum of input integers. If non-integers passed in,
 * prints Error. If nothing passed in, prints 0.h
 *
 * @argc: the number of arguments passed in.
 *
 * @argv: a vector of command line strings passed in.
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, j; 
	int s = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (_isdigit(&argv[i][j]) != 1)
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}
return (0);
}
