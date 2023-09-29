#include "main.h"

/**
 * get_bit - the value of a bit at an index is returned
 * @n: the number to search
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}
