#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- a helper function that passes a string to
 * another called by the calling function. If it sounds
 * redundant, that's because it is.
 *
 * @name: pointer to the string to be printed.
 *
 * @f: pointer to the actually useful function.
 *
 * Return: nothing. You lose.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
