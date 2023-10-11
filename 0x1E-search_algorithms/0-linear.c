#include "search_algos.h"

/**
 * linear_search - searches for a value in array
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * @Return: index of value || -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (array == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		/* print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);

		if (array[k] == value)
			return (k);
	}
	return (-1);
}
