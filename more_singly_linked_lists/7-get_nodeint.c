#include "lists.h"

/**
 *
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
