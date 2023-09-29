#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
