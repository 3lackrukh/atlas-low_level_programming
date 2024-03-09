#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node of a linked list
 * at the index specified.
 *
 * @head: pointer to the pointer to the beginning of the
 * linked list.
 *
 * @index: the position of the node to be deleted.
 *
 * Return: 1 if success, -1 if failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *temp = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && position < (index - 1))
	{
		temp = temp->next;
		position++;
	}
	if (position == (index - 1))
	{
		previous = temp;
		temp = temp->next;
		previous->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
