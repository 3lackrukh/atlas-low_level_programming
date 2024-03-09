#include "lists.h"

/**
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (temp == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return *head;
	}
	while (temp != NULL && position < idx)
	{
		temp = temp->next;
		position ++;
	}
	if (position == idx)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
