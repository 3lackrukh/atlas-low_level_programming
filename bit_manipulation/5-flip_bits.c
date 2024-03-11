#include "main.h"

/**
 * flip_bits- compares the binary values of two integers and
 * counts the number of bits which would need to flip to get
 * from one to the other.
 *
 * @n: the first number to be compared.
 *
 * @m: the second number to be compared.
 *
 * Return: the number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count = 0;

	result = (n ^ m);
	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return count;
}
