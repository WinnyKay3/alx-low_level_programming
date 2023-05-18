#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a doubly linked list
 *@head: the head node
 *
 * Return: void
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
