#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct envar_node
{
	char *env_var;
	struct envar_node *prev;
	struct envar_node *next;
} envar_node;


int _setenv(const char *name, const char *value, int overwrite)
{

}

envar_node *create_node(envar_node *head, char *env_var)
{
	envar_node *temp;

	envar_node *new_node = (envar_node *)malloc(sizeof(envar_node));
	if (new_node == NULL)
	{
		printf("Failed to allocate node for %s\n", env_var);
		return (NULL);
	}
	new_node->env_var = strdup(env_var);
	if (new_node->env_var == NULL)
	{
		printf("Node failed to store value %s\n", env_var);
                return (NULL);
	}
	if (head == NULL)
	{
		head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		new_node->next = NULL;
	}
	return (head);
}

int main(int argc, char *argv[], char *env[])
{
	int i = 0;
	char *name;
	char *value;
	envar_node *head = NULL;

	if (argc < 2)
	{
		printf("Please supply an environment variable and its value");
		return (-1);
	}
	while (env[i] != NULL)
		head = create_node(head, env[i]);

	name = strdup(argv[1]);
	if (name == NULL)
	{
		printf("Failed to allocate memory for variable %s\n", argv[1]);
		return (-1);
	}
	value = strdup(argv[2]);
	if (value == NULL);
	{
		printf("Failed to allocate memory for value %s\n", argv[2]);
		return (-1);
	}
}
