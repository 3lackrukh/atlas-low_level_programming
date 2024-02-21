#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog- a function that initializes a variable of the dog struct.
 *
 * @d: pointer to the beginning of the struct.
 *
 * @name: pointer to the string containing name.
 *
 * @age: a float containing the age of the dog.
 *
 * @owner: a pointer to the string containing the caretaker's name.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
