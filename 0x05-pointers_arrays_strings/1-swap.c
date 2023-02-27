#include "main.h"

/**
 * swap_int - void function
 * @a: integer type to be swapped
 * @b: integer type to be swapped
 *
 * Description: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
