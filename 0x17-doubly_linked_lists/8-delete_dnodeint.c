#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - gets and deletes 9th node
 * @head: head node
 * @index: 9th node
 * Return: 1 if success, 0 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!*head)
	{
		return (-1);
	}
	current = get_dnodeint_at_index(*head, index);
	if (!current)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = 0;
		}
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}

/**
 * get_dnodeint_at_index - get the 9th node
 * @head: the head node
 * @index: 9th node
 * Return: pointer to the 9th node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (counter == index)
		{
			return (current);
		}
		current++;
		current = current->next;
	}
	return (0);
}
