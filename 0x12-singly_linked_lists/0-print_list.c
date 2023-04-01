#include "lists.h"
#include <stdio.h>

/**
 * print_list -  used to print the elements of a linked list
 * @h: header pointer
 * Description: to return the number of nodes en what each node
 *  constitutes
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		if (!ptr->str)
		{
			printf("[0] (nill)");
		}
		else
		{
			printf("[%u] %s", ptr->len, ptr->str);
		}
		num++;
		ptr = ptr->next;
		printf("\n");
	}
	return (num);
}
