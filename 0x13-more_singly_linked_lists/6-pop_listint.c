#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data n
 * @head: pointer to a pointer to the head of the linked list
 *
 * Return: data of the head node that was deleted, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
