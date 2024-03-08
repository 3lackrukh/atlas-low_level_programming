#include "lists.h"

/**
 * add_nodeint- adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to a pointer to the initializing node of the list.
 *
 * @n: integer data to be held in the new node.
 *
 * Return: the address of the new element. NULL if failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = NULL;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
