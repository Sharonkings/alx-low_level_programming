#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list -prints all the elements of a lis_t list.
 * @h: a pointer to the head of the lis_t list.
 *
 * Return: the number of nodes in the lis_t list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}



