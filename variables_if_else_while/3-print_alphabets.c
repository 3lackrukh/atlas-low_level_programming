#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: this program uses the putchar command to print
 * the entire alphabet in lowercase letters and capital letters.
 * Return: always 0 (success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
{
	putchar(alphabet[i]);
}

	putchar('\n');

	return (0);
}
