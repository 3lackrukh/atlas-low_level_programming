/**
 * _strncat- concatenates two strings.
 *
 * @src: the string to be copied.
 *
 * @dest: the string to be copied to.
 *
 * @n: the integer limiting length of copied string.
 *
 * @*p: pointer to the destination string.
 *
 * Return: (p).
 *
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int k = 0;
	char *p = dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (p);
}
