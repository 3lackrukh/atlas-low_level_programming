#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main- interprets string arguments into mathematical operations
 * and prints the result.
 *
 * @argc: the number of arguments passed in.
 *
 * @argv: pointer to an array of strings passed in as arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
