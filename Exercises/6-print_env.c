#include <stdio.h>

extern char **environ;

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i = 0;

    printf("%p\n", (void *)env);
    while (*environ != NULL)
    {
        printf("%s\n", environ[i]);
        i++;
    }
    return (0);
}
