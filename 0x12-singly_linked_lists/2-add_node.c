#include "lists.h"
/**
 * add_node - adds new node at begining
 * of list_t list
 * @h: pointer to the head of list_t list
 * @str: string to be added to the list
 *
 * Return: if function fails - null
 * otherwise adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
