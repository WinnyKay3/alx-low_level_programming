#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: Bit
 * @index: index tp get the value at - indices starting at 0
 *
 * Return: if error - -1 else value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);

	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
