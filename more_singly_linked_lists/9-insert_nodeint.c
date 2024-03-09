#include "lists.h"

/**
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int position = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head != NULL)
	{
		*temp = *head;
		while (temp != NULL && position < idx)
		{
			temp = temp->next;
			position ++;
		}
		if (position == idx)
		{
			new_node = temp;
			new_node->n = n;
			new_node->next = temp->next;
			return (new_node);
		}
	}
	return (NULL);
}
