#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: list
 * @idx: index node
 * @n: data
 * Return: pointer to the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int k = 0;
	dlistint_t *new;
	dlistint_t *current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (k < idx - 1)
	{
		current = current->next;
		if (!current)
		{
			return (0);
		}
		k++;
	}
	if (!current->next)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
