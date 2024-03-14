#include "lists.h"

/**
 * free_dlistint- frees a dlistint_t list.
 *
 * @head: pointer to the first node of the list to be freed.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
