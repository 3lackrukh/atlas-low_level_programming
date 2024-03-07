#include "lists.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be checked.
 *
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	const char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	return (p - s);
}

/**
 * add_node- adds a new node to the front of a singly linked list.
 *
 * @head: pointer to a pointer to the initializing node of the list.
 *
 * @str: pointer to string data to be held in the new node.
 *
 * Return: the address of the new element, or NULL if failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = NULL;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
