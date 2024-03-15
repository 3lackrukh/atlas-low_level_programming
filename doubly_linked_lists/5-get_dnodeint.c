#include "lists.h"

/**
 * get_dnodeint_at_index- traverses a doubly linked list
 * and returns the node at the indexed position if it exists.
 *
 * @head: pointer to the first element of the list.
 *
 * @index: the position of the desired node.
 *
 * Return: the specified node, or NULL on failure.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
		return (temp);

	return (NULL);
}
