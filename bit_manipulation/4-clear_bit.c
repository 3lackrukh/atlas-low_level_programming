#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 *
 * @n: a pointer to the integer whose value is to be set.
 *
 * @index: the position of the integer's bimary representation
 * to be set.
 *
 * Return: 1 if success, -1 if failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int mask = 1;

        if (index > 63)
        {
                return (-1);
        }
        mask <<= index;
        *n &= ~mask;
        return (1);
}
