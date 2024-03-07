#include "lists.h"

/**
 * free_list- scrubs through a singly linked list
 * freeing allocated memory.
 *
 * @head: the first position of the singly linked list.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
