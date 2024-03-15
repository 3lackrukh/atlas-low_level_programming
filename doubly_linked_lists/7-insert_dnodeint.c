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

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	temp = *h;
	new_node->n = n;
	new_node->prev = NULL;

	if (i == idx)
	{
		new_node->next = temp;
		temp->prev = new_node;
		return (new_node);
	}

	new_node->next = NULL;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}
