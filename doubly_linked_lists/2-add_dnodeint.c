#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning
 * of a doubly linked list.
 *
 * @head: pointer to a pointer to the head of
 * the list.
 *
 * @n: integer data to be stored in the new node.
 *
 * Return: the address of the new node].
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
