#include "lists.h"

/**
 * dlistint_len- counts and returns the number of elements
 * in a doubly-linked list.
 *
 * @h: pointer to the head node of the list.
 *
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
