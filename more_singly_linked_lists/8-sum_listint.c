#include "lists.h"

/**
 * sum_listint- scrubs through a singly linked list
 * summing stored integers.
 *
 * @head: pointer to the beginning of the linked list.
 *
 * Return: the sum of n values in each node.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	while (head !=  NULL)
	{
		temp = head;
		sum = (sum + (temp->n));
		head = head->next;
	}
	return (sum);

}
