#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

/**
 * struct dog_t- a data structure for storing information about good
 * doggos.
 * @name: a char string containing the dogdog's name.
 * @age: a float describing the dog's age... probably in years.
 * @owner: a char string containing the name of their caretaker.
 *
 */

typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

/**
 * struct dog- a data structure for storing information about good
 * doggos.
 * @name: a char string containing the dogdog's name.
 * @age: a float describing the dog's age... probably in years.
 * @owner: a char string containing the name of their caretaker.
 *
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
