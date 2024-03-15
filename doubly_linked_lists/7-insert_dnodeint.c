#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position.
 *
 * @h: pointer to a pointer to the beginning of the list.
 *
 * @idx: the list position to insert the new node.
 *
 * @n: int data to be stored in the new node.
 *
 * Return: the address of the new node. NULL if failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new_node;

	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return(add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *h;
	new_node->n = n;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (idx > i)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	new_node->next = temp;
	return (new_node);
}

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
