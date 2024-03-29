#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- prints elements of struct dog to standard output.
 *
 * @d: pointer to the beginning of stored data.
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
