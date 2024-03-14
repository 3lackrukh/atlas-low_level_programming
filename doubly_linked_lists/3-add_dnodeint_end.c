#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a
 * doubly linked list.
 *
 * @head: a pointer to a pointer to the head of the list.
 *
 * @n: the int data to be stored in the new node.
 *
 * Return: the address of the new element. or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
