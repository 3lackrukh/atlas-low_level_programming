#include "lists.h"

/**
 * free_listint- scrubs through a singly linked list
 * freeing allocated memory.
 *
 * @head: the first position of the singly linked list.
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
