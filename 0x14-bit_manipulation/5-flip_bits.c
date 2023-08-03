#include "main.h"

/**
 * flip_bits - Counts the no. of bits to change
 * to get from one no. to another
 * @n: first no.
 * @m: second no.
 *
 * Return: no. of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		current = exclusive >> d;
		if (current & 1)
			count++;
	}

	return (count);
}
