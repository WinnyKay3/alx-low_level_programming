#include "search_algos.h"

/**
 * jump_search - searches for value in sorted array
 * @array: points to the first element of array
 * @size: the number of elements in array
 * @value: value being searched
 * Return: first index of value in array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t k, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	for (k = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		k = prev_index;
		prev_index += jump_step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", k, prev_index);

	prev_index = prev_index < size - 1 ? prev_index : size - 1;
	for(; k < prev_index && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
