#include "main.h"

/**
 * *_strcpy- copies the string pointedto by src, including
 * the terminating null byte (\0), to the buffer pointed to
 * by dest.
 *
 * @dest: the destination for the copied string.
 *
 * @src: the string to be copied.
 *
 * Return: (ptr).
 */

char *_strcpy(char *dest, char *src)
{

	char *ptr = dest;

	while
	((*dest++ = *src++));

	return (ptr);
}
