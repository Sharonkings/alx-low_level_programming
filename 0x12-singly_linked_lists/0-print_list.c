#include "lists.h"
#include <stdio.h>

/**
 * print_list -prints all the elements of a lis_t list.
 * @h: a pointer to the head of the lis_t list.
 *
 * Return: the number of nodes in the lis_t list.
 */
size_t print_list(const list_t *h)
{
	int  count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}



