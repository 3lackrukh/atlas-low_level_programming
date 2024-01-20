#include <stdio.h>

/**
 * main - Entry into program
 * Description: this program utilizes the putchar command
 * to print the alphabet.
 * Return: always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; alphabet[i] != '\0'; i++)
{
	putchar(alphabet[i]);
}

	putchar('\n');

	return (0);
}
