#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node in the linked list.
 *
 * @index: an integer specifying the node we're looking for.
 *
 * Return: a pointer to the requested node. if the list is empty, or the
 * requested node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int position = 0;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL && position < index)
		{
			temp = temp->next;
			position++;
		}
		if (position == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
