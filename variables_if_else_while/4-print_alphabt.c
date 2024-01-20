#include <stdio.h>

/**
 * main - Entry into program
 * Description: this program utilizes the putchar command
 * to print the alphabet with the exception of the letters
 * q and e.
 * Return: always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
{
	putchar(alphabet[i]);
}

	putchar('\n');

	return (0);
}
