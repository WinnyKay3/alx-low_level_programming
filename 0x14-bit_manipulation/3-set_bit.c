#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets value of a bit to 1 at a given index
 *@n: pointer to the bit
 *@index: index to set the value at - indices starting at 0
 *
 * Return: 1 if it workes, or -1 if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);

	}

	*n ^= (1 << index);

	return (1);
}
