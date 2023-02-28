#include "main.h"
#include <stdio.h>

/**
 * print_array - void function
 * @n: int number of elements to print
 * @a: the arrays int type
 *
 * Description: print elements of an array of integers
 */

void print_array(int *a, int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
