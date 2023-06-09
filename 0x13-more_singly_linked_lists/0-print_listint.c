#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: its points to a pointer which points to the head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
