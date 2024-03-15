#include "lists.h"

/**
 * sum_dlistint- adds up the integer data stored in each node
 * of a doubly liked list.
 *
 * @head: pointer to the first element of the list.
 *
 * Return: the sum of int data stored in the list, or 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum = (sum + temp->n);
		temp = temp->next;
	}

	return (sum);
}
