#include "lists.h"

/**
 * list_len- counts the number of elements in a linked list_t list.
 *
 * @h: pointer to the head of a singly linked list_t list.
 *
 * Return: the number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
