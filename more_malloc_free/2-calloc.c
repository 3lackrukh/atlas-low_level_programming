/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}
/**
 * str_nconcat- allocates enough memory to copy two strings
 * and concatenates the two strings, returning a pointer to
 * the new string.
 *
 * @s1: the first string to be copied.
 *
 * @s2: the second string to be copied.
 *
 * Return: if adequate memory is allocated, returns a pointer
 * to the new string, else returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, k, l;
	char *scon;
	
	l = _strlen(s1);
	scon = malloc(sizeof(char) * ((l + n) + 1));
	if (scon == (NULL))
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < l; i++)
	{
		scon[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
		scon[i] = s2[k];
		i++;
	}
	scon[i++] = '\0';
	return (scon);
	free(scon);
}
