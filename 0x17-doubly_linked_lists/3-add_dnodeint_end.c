#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the dlistint
 * @head: the head node
 * @n: data
 *
 * Return: pointer to the node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (0);
	}
	if (!head)
	{
		free(new);
		return (0);
	}
	current = *head;

	new->n = n;
	new->next = 0;
	if (!*head)
	{
		new->prev = 0;
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	new->prev = current;
	current->next = new;
	return (new);
}
