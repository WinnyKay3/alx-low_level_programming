#include "lists.h"

/**
 * get_dnodeint_at_index - gets the 9th node in the dlistint
 * @head: the head node
 * @index: the 9th node needed
 * Return: the 9th node
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
		counter++;
		current = current->next;
	}
	return (0);
}
