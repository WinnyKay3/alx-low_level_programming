#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a given index of a listint_t list
 * @head: pointer to the address of the head of listint_t list
 * @index: index of the node to be deleted - indices start at 0
 *
 * Return: 1 if success or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index || current == NULL)
	{
		return (-1);
	}
	if (prev == NULL)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}
	free(current);
	return (1);
}

