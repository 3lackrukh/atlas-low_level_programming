#include "lists.h"

/**
 * pop_listint- removes the first node of a singly linked list
 * and returns the int value stored in the deleted node.
 *
 * @head: pointer to a pointer to the first position in the list.
 *
 * Return: the int data stored in the deleted node.
 * if the list was empty, returns 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;


	if (head != NULL && *head != NULL)
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
