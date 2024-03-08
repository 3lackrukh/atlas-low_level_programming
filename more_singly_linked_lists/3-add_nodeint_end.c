#include "lists.h"

/**
 * add_nodeint_end- adds a new node to the end of a singly linked list.
 *
 * @head: pointer to a pointer to the initializing node of the list.
 *
 * @n: intiger data to be added to the new node in the list.
 *
 * Return: the address of the new element, or NULL if failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = NULL;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
