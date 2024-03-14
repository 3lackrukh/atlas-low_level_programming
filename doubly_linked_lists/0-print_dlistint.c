#include "lists.h"

/**
 * print_dlistint- prints the number of elements in a
 * doubly linked list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
