#include "lists.h"

/**
 * listint_len - list length
 * @h: head to listint
 * Return: Length of list.
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}


	return (n);
}
