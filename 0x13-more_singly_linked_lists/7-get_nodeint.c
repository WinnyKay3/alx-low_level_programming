#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - reurns the nth node of listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL && i < index; i++)
		node = node->next;

	return (i == index && node != NULL ? node : NULL);
}

