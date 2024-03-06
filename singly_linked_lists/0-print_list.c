#include "lists.h"

/**
 * print_list- prints all the elements of a list_t list.
 *
 * @h: pointer to the head of a singly linked list_t list.
 *
 * Return: the number of elements in the linked list.
 */

size_t print_list(const list_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		element_count++;
		h = h->next;
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		element_count++;
		h = h->next;
	}
	return (element_count);
}
