#include "lists.h"

/**
 * free_listint2- scrubs through a singly linked list
 * freeing allocated memory and sets the head pointer
 * to NULL.
 *
 * @head: pointer to the pointer to the first position
 * of the singly linked listint_t list.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
