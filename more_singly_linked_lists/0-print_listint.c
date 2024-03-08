#include "lists.h"

/**
 * print_listint- prints all elements of a listint_t list.
 *
 * @h: pointer to the head of a singly linked listint_t list.
 *
 * Return: the number of elements in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	if (h->n == 0)
	{
		printf("0\n");
		element_count++;
		h = h->next;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		element_count++;
		h = h->next;
	}
	return (element_count);
}
