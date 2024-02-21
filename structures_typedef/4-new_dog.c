#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be checked.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	return (p - s);
}

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
/**
 * new_dog- populates dog_t with data for a new dog.
 *
 * @name: pointer to the string containing the dog's name.
 *
 * @age: float containing the dog's age in years.
 *
 * @owner: pointer to the string containing the guardian's name.
 *
 * Return: the new data struct with stored stats.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int lnam = _strlen(name);
	int lown = _strlen(owner);
	char *nnam;
	char *nown;

	if ((name == NULL) || (age == 0) || (owner == NULL))
	{
		return (NULL);
	}

	nnam = malloc(sizeof(char) * (lnam + 1));
	if (nnam == NULL)
	{
		return (NULL);
	}

	nown = malloc(sizeof(char) * (lown + 1));
	if (nown == NULL)
	{
		free(nnam);
		return (NULL);
	}

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nnam);
		free(nown);
		return (NULL);
	}

	_strcpy(nnam, name);
	_strcpy(nown, owner);
	nd->name = nnam;
	nd->age = age;
	nd->owner = nown;

	return (nd);
}
