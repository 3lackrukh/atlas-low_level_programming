#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

typedef struct dliststr_s
        {
                char *value;
                struct dliststr_s *prev;
                struct dliststr_s *next;
        } dliststr_t;

dliststr_t *create_node(char *value)
{
	dliststr_t *new_node = (dliststr_t *)malloc(sizeof(dliststr_t));
	if (new_node == NULL)
	{
		printf("Allocation for node %s failed.\n", value);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		printf("Allocation for node %s failed to store value\n", value);
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

dliststr_t *path_list(char *path)
{
	dliststr_t *head = NULL;
	dliststr_t *tail = NULL;
	dliststr_t *new_node;
	char *token;

	if (path != NULL)
	{
		token = strtok(path, ":");
		while (token != NULL)
		{
			new_node = create_node(token);
			if (head == NULL)
			{
				head = new_node;
				tail = new_node;
			}
			else
			{
				tail->next = new_node;
				new_node->prev = tail;
				tail = new_node;
			}
			token = strtok(NULL, ":");

		}
	}
	return (head);
}

char *get_env(const char *name)
{
	int i = 0;
	size_t length;

	length = strlen(name);
	while (environ[i] != NULL)
	{
		if (strncmp(name, environ[i], length) == 0  && environ[i][length] == '=')
			return(environ[i] + length + 1);
		i++;
	}
	return(NULL);
}

void free_list(dliststr_t *head)
{
	dliststr_t *current = head;
	dliststr_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->value);
		free(current);
		current = next;
	}
}

int main()
{
	char *path;
	dliststr_t *head;
	dliststr_t *temp;

	path = get_env("PATH");
	if (path != NULL)
	{
		head = path_list(path);
		if (head != NULL)
		{
			temp = head;
			while (temp != NULL)
			{
				printf("%s\n", temp->value);
				temp = temp->next;\
			}
			free_list(head);
		}
	}
	return(0);
}
