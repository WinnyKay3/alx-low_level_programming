#include "lists.h"

/**
 * sum_dlistint - the sum of all doubly linked list
 * @head: the head node
 * Return: int/ the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
