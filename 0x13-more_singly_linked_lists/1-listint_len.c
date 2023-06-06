#include "lists.h"

/**
 * listint_len-returns the number of elements in a linked listint_t list
 * @h: a variable that points to a listint_t struct to traverse
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);

}
