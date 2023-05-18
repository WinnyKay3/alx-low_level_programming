#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - get the len of doubly linked list
 * Return: len
 * @h: list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
