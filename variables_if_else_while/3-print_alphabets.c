#include <stdio.h>

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
