#include "main.h"

/**
 * main - entry point of the program
 *
 * Description: prints _putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char var[] = "_putchar";
	int i = 0;

	for (i = 0; var[i] != '\0'; i++)
{
	_putchar(var[i]);
}

	_putchar('\n');

	return (0);
}
