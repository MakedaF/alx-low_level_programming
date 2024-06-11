#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsiged long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
